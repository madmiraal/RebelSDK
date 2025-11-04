#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2025 Rebel SDK contributors
# SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
# SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
#
# SPDX-License-Identifier: MIT

from tools.build import *

Import("*")

if not "environment" in globals():
    environment = get_environment(ARGUMENTS)

# Include directories
environment.Append(
    CPPPATH=[
        "include",
        "include/api",
    ]
)

# Source files
sources = []
add_sources(sources, "src/common", "cpp")
add_sources(sources, "src/classes", "cpp")

# Rebel SDK Library name
rebel_sdk_library = get_rebel_sdk_library_name(environment)

environment.StaticLibrary(target="builds/" + rebel_sdk_library, source=sources)
