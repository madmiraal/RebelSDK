#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2025 Rebel SQLite Library contributors
#
# SPDX-License-Identifier: MIT

# A collection of functions used by the Rebel build system.

import json
import os
import subprocess
import sys
from SCons.Platform import TempFileMunge
from SCons.Script import Environment
from SCons.Script import Help
from SCons.Script import Variables
from SCons.Variables import *
from shutil import rmtree
from shutil import which

supported_platforms = ["linux", "macos", "windows", "android", "ios", "web"]
supported_macos_architectures = ["universal", "x86_64", "arm64"]
supported_android_architectures = ["armv7", "arm64v8", "x86", "x86_64"]
supported_ios_architectures = ["arm64", "x86_64"]
ndk_version = "29.0.14206865"


def get_environment(ARGUMENTS):
    build_tools = get_build_tools(ARGUMENTS)
    options = get_options(ARGUMENTS)
    environment = Environment(tools=build_tools, variables=options)
    check(options)
    Help(options.GenerateHelpText(environment))
    configure(environment)
    return environment


def get_build_tools(ARGUMENTS):
    build_tools = ["default"]
    platform = ARGUMENTS.get("platform", get_host_platform())
    use_llvm = (
        ARGUMENTS.get("use_llvm", False) or platform == "android" or platform == "ios"
    )
    use_mingw = (
        ARGUMENTS.get("use_mingw", False)
        or (os.name == "nt" and not is_msvc_installed())
        or (os.name == "posix" and platform == "windows")
    )
    if use_llvm:
        build_tools = ["clang", "clang++", "ar", "link"]
    elif platform == "web":
        # Use generic POSIX build toolchain for Emscripten.
        build_tools = ["cc", "c++", "ar", "link"]
    elif use_mingw:
        build_tools = ["mingw"]
    return build_tools


def get_options(ARGUMENTS):
    options = Variables(None, ARGUMENTS)
    options.Add(
        EnumVariable(
            "platform",
            "Target platform.",
            get_host_platform(),
            tuple(supported_platforms),
        )
    )
    options.Add(
        EnumVariable("target", "Compilation target.", "release", ("release", "debug"))
    )
    options.Add(
        EnumVariable(
            "bits", "Target bits (only suppoted on Windows).", "64", ("64", "32")
        )
    )
    options.Add(BoolVariable("use_llvm", "Use the LLVM toolchain.", False))
    options.Add(BoolVariable("use_mingw", "Use the MinGW toolchain.", False))
    options.Add(
        EnumVariable(
            "macos_arch",
            "Target macOS architecture.",
            "universal",
            tuple(supported_macos_architectures),
        )
    )
    options.Add(
        EnumVariable(
            "android_arch",
            "Target Android architecture.",
            "arm64v8",
            tuple(supported_android_architectures),
        )
    )
    options.Add("android_ndk_api", "Android NDK API level (minimum SDK supported).", 21)
    options.Add(
        EnumVariable(
            "ios_arch", "Target iOS architecture", "arm64", ["arm64", "x86_64"]
        )
    )
    options.Add(
        "xctoolchain",
        "Path to xctoolchain toolchain directory.",
        "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain",
    )
    options.Add(
        "emsdk",
        "Path to emsdk",
        (
            os.environ["EMSDK"]
            if "EMSDK" in os.environ
            else os.path.join(os.getcwd(), "emsdk")
        ),
    )
    options.Add(
        "emscripten_version",
        "Version of Emscripten to use.",
        "latest",
    )
    return options


def check(options):
    unknown = options.UnknownVariables()
    if unknown:
        print("ERROR: Unrecognised arguments:")
        for item in unknown.items():
            print("- " + item[0] + "=" + item[1])
        print()
        print("Use `scons -h` to view available arguments.")
        exit(1)


def configure(environment):
    environment["using_msvc"] = (
        environment["platform"] == "windows"
        and is_msvc_installed()
        and not environment["use_mingw"]
    )
    print(
        "Building "
        + environment["target"].capitalize()
        + " version for "
        + get_platform_name(environment["platform"])
        + "."
    )
    configure_compiler(environment)
    if environment["platform"] == "linux":
        configure_linux(environment)
    elif environment["platform"] == "windows":
        configure_windows(environment)
    elif environment["platform"] == "macos":
        configure_macos(environment)
    elif environment["platform"] == "android":
        configure_android(environment)
    elif environment["platform"] == "ios":
        configure_ios(environment)
    elif environment["platform"] == "web":
        configure_web(environment)
    if environment["target"] == "release":
        configure_release(environment)
    else:  # environment["target"] == "debug"
        configure_debug(environment)
    environment["OBJSUFFIX"] = "-" + get_suffix(environment) + environment["OBJSUFFIX"]
    if not environment["SHOBJSUFFIX"] == "$OBJSUFFIX":
        environment["SHOBJSUFFIX"] = (
            "-" + get_suffix(environment) + environment["SHOBJSUFFIX"]
        )


def configure_compiler(environment):
    if environment["using_msvc"]:
        return
    environment.Append(CCFLAGS=["-fPIC"])
    environment.Append(CXXFLAGS=["-std=c++14"])


def configure_release(environment):
    if environment["using_msvc"]:
        environment.Append(CCFLAGS=["/O2", "/MD"])
    else:
        environment.Append(CCFLAGS=["-O2"])


def configure_debug(environment):
    if environment["using_msvc"]:
        environment.Append(CCFLAGS=["/Od", "/MDd"])
    else:
        environment.Append(CCFLAGS=["-Og", "-g"])


def configure_linux(environment):
    pass


def configure_macos(environment):
    print("Building for " + environment["macos_arch"] + " architecture.")
    if environment["macos_arch"] == "universal":
        environment.Append(CCFLAGS=["-arch", "x86_64", "-arch", "arm64"])
        environment.Append(LINKFLAGS=["-arch", "x86_64", "-arch", "arm64"])
    else:
        environment.Append(CCFLAGS=["-arch", environment["macos_arch"]])
        environment.Append(LINKFLAGS=["-arch", environment["macos_arch"]])


def configure_windows(environment):
    if get_host_platform() == "linux":
        configure_windows_on_linux(environment)
    elif environment["using_msvc"]:
        print("Configuring for MSVC...")
        configure_windows_msvc(environment)
    else:
        print("Configuring for mingw...")
        configure_windows_mingw(environment)
        use_response_files(environment)


def configure_android(environment):
    check_android(environment)
    print("Building for " + environment["android_arch"] + " architecture.")
    (triple, target_triple) = get_android_triples(environment["android_arch"])
    target_triple += str(environment["android_ndk_api"])
    host_subpath = get_host_subpath()
    ndk_root = get_android_ndk_root()
    toolchain_path = os.path.join(
        ndk_root, "toolchains", "llvm", "prebuilt", host_subpath
    )
    compiler_path = os.path.join(toolchain_path, "bin")
    libc_shared_path = os.path.join(toolchain_path, "sysroot", "usr", "lib", triple)
    environment["CC"] = os.path.join(compiler_path, "clang")
    environment["CXX"] = os.path.join(compiler_path, "clang++")
    environment["AR"] = os.path.join(compiler_path, "llvm-ar")
    environment["RANLIB"] = os.path.join(compiler_path, "llvm-ranlib")
    environment.Append(CCFLAGS=["-target", target_triple])
    environment.Append(ASFLAGS=["-target", target_triple])
    environment.Append(LINKFLAGS=["-target", target_triple])
    environment["SHLIBPREFIX"] = "lib"
    environment["SHLIBSUFFIX"] = ".so"
    configure_android_arch(environment)
    if get_host_platform() == "windows":
        use_response_files(environment)


def configure_ios(environment):
    print("Building for " + environment["ios_arch"] + " architecture.")
    if environment["ios_arch"] == "arm64":
        sdk_name = "iphoneos"
        environment.Append(CCFLAGS=["-miphoneos-version-min=10.0"])
    else:  # environment["ios_arch"] == "x86_64"
        print("Building for ios simulator.")
        sdk_name = "iphonesimulator"
        environment.Append(CCFLAGS=["-mios-simulator-version-min=10.0"])
    sdk_path = get_xcode_sdk_path(sdk_name)
    xctoolchain = environment["xctoolchain"]
    compiler_path = os.path.join(xctoolchain, "usr", "bin")
    environment.PrependENVPath("PATH", compiler_path)
    environment["CC"] = os.path.join(compiler_path, "clang")
    environment["CXX"] = os.path.join(compiler_path, "clang++")
    environment["AR"] = os.path.join(compiler_path, "ar")
    environment["RANLIB"] = os.path.join(compiler_path, "ranlib")
    environment.Append(
        CCFLAGS=["-arch", environment["ios_arch"], "-isysroot", sdk_path]
    )
    environment.Append(
        LINKFLAGS=[
            "-arch",
            environment["ios_arch"],
            "-isysroot",
            sdk_path,
        ]
    )


def configure_web(environment):
    prepare_web(environment)
    if is_emscripten_active(environment):
        print("Building with active Emscripten")
    else:
        print("Building with Emscripten " + environment["emscripten_version"] + ".")
    environment["CC"] = "emcc"
    environment["CXX"] = "em++"
    environment["AR"] = "emar"
    environment["RANLIB"] = "emranlib"
    environment["SHLIBPREFIX"] = ""
    environment["SHLIBSUFFIX"] = ".wasm"
    environment.Append(LINKFLAGS=["-sSIDE_MODULE"])
    if get_host_platform() == "windows":
        use_response_files(environment)


def is_msvc_installed():
    vswhere = which("vswhere")
    if not vswhere:
        vswhere = os.path.join("Microsoft Visual Studio", "Installer", "vswhere.exe")
        if "ProgramFiles(x86)" in os.environ:
            vswhere = os.path.join(os.environ["ProgramFiles(x86)"], vswhere)
        elif "ProgramFiles" in os.environ:
            vswhere = os.path.join(os.environ["ProgramFiles"], vswhere)
    if not os.path.exists(vswhere):
        return False
    try:
        output = (
            subprocess.check_output(
                [
                    vswhere,
                    "-requires",
                    "Microsoft.VisualStudio.Component.VC.Tools.x86.x64",
                    "-format",
                    "json",
                ]
            )
            .decode("utf-8")
            .strip()
        )
        result = json.loads(output)
    except (subprocess.CalledProcessError, json.JSONDecodeError):
        print("Error: vswhere found, but failed to provide JSON output!")
        return False
    if len(result) == 0:
        return False
    return True


def configure_windows_on_linux(environment):
    configure_linux(environment)
    if environment["bits"] == "64":
        prefix = "x86_64-w64-mingw32-"
    else:  # environment["bits"] == "32"
        prefix = "i686-w64-mingw32-"
    environment["CC"] = prefix + "gcc"
    environment["CXX"] = prefix + "g++"
    environment["AR"] = prefix + "gcc-ar"
    environment["RANLIB"] = prefix + "gcc-ranlib"


def configure_windows_mingw(environment):
    check_windows_scons_toolchain(environment)
    print("Building using the Mingw toolchain.")
    configure_linux(environment)


def check_windows_scons_toolchain(environment):
    configure = environment.Configure()
    if not configure.CheckCXX():
        cxx_path = which(environment["CXX"])
        if not cxx_path:
            print("ERROR:", environment["CXX"], "not found!")
            print(
                "Please ensure",
                environment["CXX"],
                "is installed and available in your path.",
            )
            exit(1)
        print("Found", cxx_path)
        cxx_dir = os.path.dirname(cxx_path)
        print("Adding", cxx_dir, "to SCons path.")
        environment.PrependENVPath("PATH", cxx_dir)
        if not configure.CheckCXX():
            print("Please check your configuration and try again.")
            exit(1)
    configure.Finish()


def configure_windows_msvc(environment):
    print("Building using the MSVC toolchain.")
    if environment["bits"] == "64":
        environment["TARGET_ARCH"] = "amd64"
    else:  # environment["bits"] == "32"
        environment["TARGET_ARCH"] = "x86"
    environment.Append(CCFLAGS=["/EHsc"])


def check_android(environment):
    if not get_host_platform():
        print("Unsupported host platform: " + sys.platform)
        exit(1)
    if not "ANDROID_HOME" in os.environ:
        print("Building for Android requires ANDROID_HOME to be defined.")
        exit(1)
    if not os.path.exists(get_android_home()):
        print("The ANDROID_HOME path does not exist!")
        exit(1)
    if not os.path.exists(get_android_ndk_root()):
        install_android_ndk()
    ndk_api = environment["android_ndk_api"]
    if ndk_api < 21:
        print("WARNING: Minimum Android NDK API level is 21.")
        print("Setting Android NDK API to 21.")
        environment["android_ndk_api"] = 21
    elif ndk_api >= 24:
        environment.Append(CPPDEFINES=["_FILE_OFFSET_BITS", 64])


def get_android_triples(android_arch):
    if android_arch == "armv7":
        triple = "arm-linux-androideabi"
        target_triple = "armv7a-linux-androideabi"
    elif android_arch == "arm64v8":
        triple = "aarch64-linux-android"
        target_triple = triple
    elif android_arch == "x86":
        triple = "i686-linux-android"
        target_triple = triple
    elif android_arch == "x86_64":
        triple = "x86_64-linux-android"
        target_triple = triple
    return (triple, target_triple)


def configure_android_arch(environment):
    if environment["android_arch"] == "armv7":
        environment.Append(CCFLAGS=["-mfpu=neon"])
    elif environment["android_arch"] == "arm64v8":
        environment.Append(CCFLAGS=["-mfix-cortex-a53-835769"])
    elif environment["android_arch"] == "x86":
        if environment["android_ndk_api"] < 24:
            environment.Append(CCFLAGS=["-mstackrealign"])
    elif environment["android_arch"] == "x86_64":
        pass


def install_android_ndk():
    sdk_manager = get_android_sdk_manager()
    print("Installing Android NDK...")
    ndk_download_args = "ndk;" + ndk_version
    subprocess.run([sdk_manager, ndk_download_args])


def get_android_sdk_manager():
    extension = ".bat" if os.name == "nt" else ""
    sdkmanager = os.path.join(
        get_android_home(), "cmdline-tools", "latest", "bin", "sdkmanager" + extension
    )
    if os.path.exists(sdkmanager):
        return sdkmanager
    else:
        print("ERROR: Cannot find " + sdkmanager)
        print("Please ensure ANDROID_HOME is correct and cmdline-tools are installed.")
        print("Alternatively, install NDK version " + ndk_version + " manually.")
        exit(1)


def get_android_home():
    return os.environ["ANDROID_HOME"]


def get_android_ndk_root():
    return os.path.join(get_android_home(), "ndk", ndk_version)


def get_xcode_sdk_path(sdk_name):
    return (
        subprocess.check_output(["xcrun", "--sdk", sdk_name, "--show-sdk-path"])
        .decode("utf-8")
        .strip()
    )


def prepare_web(environment):
    if is_emscripten_active(environment):
        print("EMSDK environment variable found.")
        check_active_emscripten()
        configure_active_emscripten_scons(environment)
        return
    if is_emsdk_cloned(environment):
        update_emsdk(environment)
    else:
        install_emsdk(environment)
    install_emscripten(environment)
    env_string = activate_emscripten(environment)
    configure_emscripten_scons(environment, env_string)


def is_emscripten_active(environment):
    return "EMSDK" in os.environ and environment["emsdk"] == os.environ["EMSDK"]


def check_active_emscripten():
    if (
        not which("emcc")
        or not which("em++")
        or not which("emar")
        or not which("emranlib")
    ):
        print("ERROR: Required Emscripten tools not found:")
        if not which("emcc"):
            print("- emcc")
        if not which("em++"):
            print("- em++")
        if not which("emar"):
            print("- emar")
        if not which("emranlib"):
            print("- emranlib")
        print("Please check your Emscripten configuration and try again.")
        exit(1)


def install_emscripten(environment):
    version = environment["emscripten_version"]
    emsdk_app = get_emsdk_app(environment)
    if not emsdk_app:
        install_emsdk(environment)
        emsdk_app = get_emsdk_app(environment)
    print("Installing emscipten version:", version)
    subprocess.run([emsdk_app, "install", version])


def activate_emscripten(environment):
    version = environment["emscripten_version"]
    emsdk_path = environment["emsdk"]
    # We call the emsdk python code directly, because
    # we need to obtain the environment string that it generates.
    sys.path.append(emsdk_path)
    import emsdk as sdk

    print("Activating emscipten version:", version)
    sdk.main(["activate", version])
    # .emscripten file is created or updated by activate; so load it (again).
    print("Loading Emscripten config.")
    sdk.load_em_config()
    print("Getting environment construction string.")
    active_tools = sdk.currently_active_tools()
    print("Currently active tools:", active_tools)
    active_tools = sdk.process_tool_list(active_tools)
    print("Processed tool list:", active_tools)
    env_string = sdk.construct_env(active_tools, False, False)
    print("Environment construction string:")
    print(env_string)
    return env_string


def configure_emscripten_scons(environment, env_string):
    print("Applying Emscripten environment settings to SCons environment:")
    emsdk_path = os.path.abspath(environment["emsdk"])
    lines = env_string.split("\n")
    for line in lines:
        if line.startswith("SET"):
            # Drop "SET " at start of line.
            clean_line = line[4:]
            path_separator = ";"
        else:
            # Drop "export " at start of line.
            clean_line = line[7:]
            clean_line = clean_line.strip(";")
            path_separator = ":"
        parts = clean_line.split("=")
        if len(parts) != 2:
            if line:
                print("Skipping line:", line)
            continue
        key = parts[0]
        value = parts[1]
        if key.startswith("EMSDK"):
            print("Adding variable:", key, "=", value)
            environment[key] = value
        if key.startswith("EMSDK_PYTHON"):
            python_path = os.path.dirname(value)
            if python_path.startswith('"') and not python_path.endswith('"'):
                python_path += '"'
            print("Adding path:", python_path)
            environment.PrependENVPath("PATH", python_path)
        if key.startswith("PATH"):
            paths = value.split(path_separator)
            for path in paths:
                path = path.strip('"')
                path = path.strip("'")
                if path.startswith("/") and get_host_platform() == "windows":
                    path = windows_path_from_bash_path(path)
                if path.startswith(emsdk_path):
                    print("Adding path:", path)
                    environment.PrependENVPath("PATH", path)


def configure_active_emscripten_scons(environment):
    print("Applying active Emscripten settings to SCons environment:")
    emsdk_path = os.path.normpath(environment["emsdk"])
    for key, value in os.environ.items():
        if key.startswith("EMSDK"):
            print("Adding variable:", key, "=", value)
            environment[key] = value
        if key == "PATH":
            paths = value.split(os.pathsep)
            for path in paths:
                if path.startswith(emsdk_path):
                    print("Adding path:", path)
                    environment.PrependENVPath("PATH", path)


def is_emsdk_cloned(environment):
    if get_emsdk_app(environment):
        return True
    return False


def get_emsdk_app(environment):
    emsdk_path = environment["emsdk"]
    emsdk_app = os.path.join(emsdk_path, "emsdk" + (".bat" if os.name == "nt" else ""))
    if not os.path.exists(emsdk_app):
        if os.path.exists(emsdk_path):
            print("ERROR: ", emsdk_app, "not found, but", emsdk_path, "exists!?")
            print("Please fix the issue and try again.")
            exit(1)
        return None
    return emsdk_app


def install_emsdk(environment):
    emsdk_path = environment["emsdk"]
    parent = os.path.dirname(emsdk_path)
    cwd = os.getcwd()
    if parent != cwd:
        os.chdir(parent)
    print("Downloading Emscripten SDK into", parent)
    subprocess.run(["git", "clone", "https://github.com/emscripten-core/emsdk.git"])
    if parent != cwd:
        os.chdir(cwd)


def update_emsdk(environment):
    emsdk_path = environment["emsdk"]
    cwd = os.getcwd()
    if emsdk_path != cwd:
        os.chdir(emsdk_path)
    print("Updating Emscripten SDK in", emsdk_path)
    subprocess.run(["git", "pull"])
    if emsdk_path != cwd:
        os.chdir(cwd)


def use_response_files(environment):
    print("Configuring response files:")
    environment["TEMPFILE"] = TempFileMunge
    environment["ARCOM"] = "${TEMPFILE('" + environment["ARCOM"] + "', '$ARCOMSTR')}"
    environment["LINKCOM"] = (
        "${TEMPFILE('" + environment["LINKCOM"] + "', '$LINKCOMSTR')}"
    )
    environment["TEMPFILEARGESCFUNC"] = fix_windows_backslash


def fix_windows_backslash(argument):
    # Apply default quote spaces function.
    from SCons.Subst import quote_spaces

    argument = quote_spaces(argument)

    if get_host_platform() != "windows":
        return argument
    argument = argument.replace("\\", "\\\\")
    return argument


def windows_path_from_bash_path(path):
    drive = path[1].capitalize() + ":\\"
    # Drop leading "/<drive-letter>/".
    path = path[3:]
    path = path.replace("/", "\\")
    # Add drive letter.
    return drive + path


def get_host_platform():
    if sys.platform == "linux":
        return "linux"
    elif sys.platform == "darwin":
        return "macos"
    elif sys.platform == "win32":
        return "windows"
    else:
        return None


def get_host_subpath():
    host_platform = get_host_platform()
    if host_platform == "linux":
        return "linux-x86_64"
    elif host_platform == "macos":
        return "darwin-x86_64"
    elif host_platform == "windows":
        if is_64bits():
            return "windows-x86_64"
        else:
            return "windows"


def is_64bits():
    return sys.maxsize > 2**32


def add_sources(sources, directory, extension):
    for file in os.listdir(directory):
        if file.endswith("." + extension):
            sources.append(directory + "/" + file)


def get_rebel_sdk_library_name(environment):
    return "-".join(
        [
            "rebel",
            get_suffix(environment),
        ]
    )


def get_platform_name(platform):
    if platform == "macos":
        return "macOS"
    elif platform == "ios":
        return "iOS"
    else:
        return platform.capitalize()


def get_suffix(environment):
    platform = environment["platform"]
    target = environment["target"]
    arch_suffix = get_arch_suffix(environment)
    suffix = platform
    if arch_suffix:
        suffix = "-".join([suffix, arch_suffix])
    if target != "release":
        suffix = "-".join([suffix, target])
    return suffix


def get_arch_suffix(environment):
    if environment["platform"] == "linux":
        return None
    elif environment["platform"] == "macos":
        if environment["macos_arch"] == "universal":
            return None
        else:
            return environment["macos_arch"]
    elif environment["platform"] == "windows":
        return environment["bits"]
    elif environment["platform"] == "android":
        return environment["android_arch"]
    elif environment["platform"] == "ios":
        return environment["ios_arch"]
    elif environment["platform"] == "web":
        return None
