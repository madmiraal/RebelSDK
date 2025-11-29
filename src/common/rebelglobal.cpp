// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/rebelglobal.h"

#include "common/wrapped.h"

namespace Rebel {
namespace {
GDCALLINGCONV void* wrapper_create(
    void*,
    const void* type_tag,
    rebel_object* instance
) {
    auto* wrapper_memory =
        static_cast<Wrapped*>(api->rebel_alloc(sizeof(Wrapped)));
    if (!wrapper_memory) {
        return nullptr;
    }
    wrapper_memory->owner    = instance;
    wrapper_memory->type_tag = (size_t)type_tag;

    return wrapper_memory;
}

GDCALLINGCONV void wrapper_destroy(void*, void* wrapper) {
    if (wrapper) {
        api->rebel_free(wrapper);
    }
}
} // namespace

const rebel_gdnative_core_api_struct* api                          = nullptr;
const rebel_gdnative_core_1_1_api_struct* core_1_1_api             = nullptr;
const rebel_gdnative_core_1_2_api_struct* core_1_2_api             = nullptr;
const rebel_gdnative_ext_nativescript_api_struct* nativescript_api = nullptr;
const rebel_gdnative_ext_nativescript_1_1_api_struct* nativescript_1_1_api =
    nullptr;
const rebel_gdnative_ext_pluginscript_api_struct* pluginscript_api = nullptr;
const rebel_gdnative_ext_android_api_struct* android_api           = nullptr;
const rebel_gdnative_ext_arvr_api_struct* arvr_api                 = nullptr;
const rebel_gdnative_ext_videodecoder_api_struct* videodecoder_api = nullptr;
const rebel_gdnative_ext_net_api_struct* net_api                   = nullptr;
const rebel_gdnative_ext_net_3_2_api_struct* net_3_2_api           = nullptr;
const void* gdnlib                                                 = nullptr;

void Global::print(const String& message) {
    api->rebel_print(reinterpret_cast<const rebel_string*>(&message));
}

void Global::print_warning(
    const String& description,
    const String& function,
    const String& file,
    const int line
) {
    char* c_description = description.alloc_c_string();
    char* c_function    = function.alloc_c_string();
    char* c_file        = file.alloc_c_string();
    if (c_description && c_function && c_file) {
        api->rebel_print_warning(c_description, c_function, c_file, line);
    };
    if (c_description != nullptr) {
        api->rebel_free(c_description);
    }
    if (c_function != nullptr) {
        api->rebel_free(c_function);
    }
    if (c_file != nullptr) {
        api->rebel_free(c_file);
    }
}

void Global::print_error(
    const String& description,
    const String& function,
    const String& file,
    const int line
) {
    char* c_description = description.alloc_c_string();
    char* c_function    = function.alloc_c_string();
    char* c_file        = file.alloc_c_string();
    if (c_description && c_function && c_file) {
        api->rebel_print_error(c_description, c_function, c_file, line);
    };
    if (c_description != nullptr) {
        api->rebel_free(c_description);
    }
    if (c_function != nullptr) {
        api->rebel_free(c_function);
    }
    if (c_file != nullptr) {
        api->rebel_free(c_file);
    }
}

void register_types();
void init_method_bindings();

void set_core_extensions(const rebel_gdnative_core_api_struct* core_api) {
    const rebel_gdnative_api_struct* core_extension = core_api->next;
    while (core_extension) {
        if (core_extension->version.major == 1
            && core_extension->version.minor == 1) {
            core_1_1_api =
                reinterpret_cast<const rebel_gdnative_core_1_1_api_struct*>(
                    core_extension
                );
        } else if (core_extension->version.major == 1
                   && core_extension->version.minor == 2) {
            core_1_2_api =
                reinterpret_cast<const rebel_gdnative_core_1_2_api_struct*>(
                    core_extension
                );
        }
        core_extension = core_extension->next;
    }
}

void set_nativescript_extensions(
    const rebel_gdnative_ext_nativescript_api_struct* nativescript_api_extension
) {
    const rebel_gdnative_api_struct* nativescript_extension =
        nativescript_api_extension->next;
    while (nativescript_extension) {
        if (nativescript_extension->version.major == 1
            && nativescript_extension->version.minor == 1) {
            nativescript_1_1_api = reinterpret_cast<
                const rebel_gdnative_ext_nativescript_1_1_api_struct*>(
                nativescript_extension
            );
        }
        nativescript_extension = nativescript_extension->next;
    }
}

void set_net_extensions(
    const rebel_gdnative_ext_net_api_struct* net_api_extension
) {
    const rebel_gdnative_api_struct* net_extension = net_api_extension->next;
    while (net_extension) {
        if (net_extension->version.major == 3
            && net_extension->version.minor == 2) {
            net_3_2_api =
                reinterpret_cast<const rebel_gdnative_ext_net_3_2_api_struct*>(
                    net_extension
                );
        }
        net_extension = net_extension->next;
    }
}

void set_extensions(const rebel_gdnative_core_api_struct* core_api) {
    set_core_extensions(core_api);
    for (int i = 0; i < api->num_extensions; i++) {
        const rebel_gdnative_api_struct* extension = core_api->extensions[i];
        switch (extension->type) {
            case GDNATIVE_EXT_NATIVESCRIPT: {
                nativescript_api = reinterpret_cast<
                    const rebel_gdnative_ext_nativescript_api_struct*>(extension
                );
                set_nativescript_extensions(nativescript_api);
            } break;
            case GDNATIVE_EXT_PLUGINSCRIPT: {
                pluginscript_api = reinterpret_cast<
                    const rebel_gdnative_ext_pluginscript_api_struct*>(extension
                );
            } break;
            case GDNATIVE_EXT_ANDROID: {
                android_api = reinterpret_cast<
                    const rebel_gdnative_ext_android_api_struct*>(extension);
            } break;
            case GDNATIVE_EXT_ARVR: {
                arvr_api =
                    reinterpret_cast<const rebel_gdnative_ext_arvr_api_struct*>(
                        extension
                    );
            } break;
            case GDNATIVE_EXT_VIDEODECODER: {
                videodecoder_api = reinterpret_cast<
                    const rebel_gdnative_ext_videodecoder_api_struct*>(extension
                );
            } break;
            case GDNATIVE_EXT_NET: {
                net_api =
                    reinterpret_cast<const rebel_gdnative_ext_net_api_struct*>(
                        extension
                    );
                set_net_extensions(net_api);
            } break;
            default:
                break;
        }
    }
}

void set_language_index() {
    rebel_instance_binding_functions binding_data_functions = {};
    binding_data_functions.alloc_instance_binding_data      = wrapper_create;
    binding_data_functions.free_instance_binding_data       = wrapper_destroy;
    RegisterState::language_index =
        nativescript_1_1_api
            ->rebel_nativescript_register_instance_binding_data_functions(
                binding_data_functions
            );
}

void Global::gdnative_init(const rebel_gdnative_init_options* options) {
    api    = options->api_struct;
    gdnlib = options->gd_native_library;
    set_extensions(api);
    // Set language index before registering types().
    set_language_index();
    register_types();
    init_method_bindings();
}

void Global::gdnative_terminate(rebel_gdnative_terminate_options*) {
    // Nothing to do.
}

void Global::gdnative_profiling_add_data(
    const char* signature,
    const uint64_t time
) {
    nativescript_1_1_api->rebel_nativescript_profiling_add_data(
        signature,
        time
    );
}

void Global::nativescript_init(void* handle) {
    RegisterState::nativescript_handle = handle;
}

void Global::nativescript_terminate(void* handle) {
    nativescript_1_1_api
        ->rebel_nativescript_unregister_instance_binding_data_functions(
            RegisterState::language_index
        );
}
} // namespace Rebel
