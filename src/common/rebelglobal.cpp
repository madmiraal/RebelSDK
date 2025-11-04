// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/rebelglobal.h"

#include "common/string.h"
#include "common/wrapped.h"

namespace Rebel {
static GDCALLINGCONV void* wrapper_create(
    void* data,
    const void* type_tag,
    rebel_object* instance
) {
    Wrapped* wrapper_memory = (Wrapped*)api->rebel_alloc(sizeof(Wrapped));

    if (!wrapper_memory) {
        return NULL;
    }
    wrapper_memory->owner    = instance;
    wrapper_memory->type_tag = (size_t)type_tag;

    return (void*)wrapper_memory;
}

static GDCALLINGCONV void wrapper_destroy(void* data, void* wrapper) {
    if (wrapper) {
        api->rebel_free(wrapper);
    }
}

void* RegisterState::nativescript_handle;
int RegisterState::language_index;

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
const void* gdnlib                                                 = NULL;

void Global::print(const String& message) {
    api->rebel_print((rebel_string*)&message);
}

void Global::print_warning(
    const String& description,
    const String& function,
    const String& file,
    int line
) {
    int len;

    char* c_desc = description.alloc_c_string();
    char* c_func = function.alloc_c_string();
    char* c_file = file.alloc_c_string();

    if (c_desc != nullptr && c_func != nullptr && c_file != nullptr) {
        api->rebel_print_warning(c_desc, c_func, c_file, line);
    };

    if (c_desc != nullptr) {
        api->rebel_free(c_desc);
    }
    if (c_func != nullptr) {
        api->rebel_free(c_func);
    }
    if (c_file != nullptr) {
        api->rebel_free(c_file);
    }
}

void Global::print_error(
    const String& description,
    const String& function,
    const String& file,
    int line
) {
    int len;

    char* c_desc = description.alloc_c_string();
    char* c_func = function.alloc_c_string();
    char* c_file = file.alloc_c_string();

    if (c_desc != nullptr && c_func != nullptr && c_file != nullptr) {
        api->rebel_print_error(c_desc, c_func, c_file, line);
    };

    if (c_desc != nullptr) {
        api->rebel_free(c_desc);
    }
    if (c_func != nullptr) {
        api->rebel_free(c_func);
    }
    if (c_file != nullptr) {
        api->rebel_free(c_file);
    }
}

void register_types();
void init_method_bindings();

void Global::gdnative_init(rebel_gdnative_init_options* options) {
    api    = options->api_struct;
    gdnlib = options->gd_native_library;

    const rebel_gdnative_api_struct* core_extension = api->next;

    while (core_extension) {
        if (core_extension->version.major == 1
            && core_extension->version.minor == 1) {
            core_1_1_api =
                (const rebel_gdnative_core_1_1_api_struct*)core_extension;
        } else if (core_extension->version.major == 1
                   && core_extension->version.minor == 2) {
            core_1_2_api =
                (const rebel_gdnative_core_1_2_api_struct*)core_extension;
        }
        core_extension = core_extension->next;
    }

    // now find our extensions
    for (int i = 0; i < api->num_extensions; i++) {
        switch (api->extensions[i]->type) {
            case GDNATIVE_EXT_NATIVESCRIPT: {
                nativescript_api =
                    (const rebel_gdnative_ext_nativescript_api_struct*)
                        api->extensions[i];

                const rebel_gdnative_api_struct* extension =
                    nativescript_api->next;

                while (extension) {
                    if (extension->version.major == 1
                        && extension->version.minor == 1) {
                        nativescript_1_1_api =
                            (const rebel_gdnative_ext_nativescript_1_1_api_struct*)
                                extension;
                    }

                    extension = extension->next;
                }
            } break;
            case GDNATIVE_EXT_PLUGINSCRIPT: {
                pluginscript_api =
                    (const rebel_gdnative_ext_pluginscript_api_struct*)
                        api->extensions[i];
            } break;
            case GDNATIVE_EXT_ANDROID: {
                android_api = (const rebel_gdnative_ext_android_api_struct*)
                                  api->extensions[i];
            } break;
            case GDNATIVE_EXT_ARVR: {
                arvr_api = (const rebel_gdnative_ext_arvr_api_struct*)
                               api->extensions[i];
            } break;
            case GDNATIVE_EXT_VIDEODECODER: {
                videodecoder_api =
                    (const rebel_gdnative_ext_videodecoder_api_struct*)
                        api->extensions[i];
            } break;
            case GDNATIVE_EXT_NET: {
                net_api = (const rebel_gdnative_ext_net_api_struct*)
                              api->extensions[i];

                const rebel_gdnative_api_struct* extension = net_api->next;

                while (extension) {
                    if (extension->version.major == 3
                        && extension->version.minor == 2) {
                        net_3_2_api =
                            (const rebel_gdnative_ext_net_3_2_api_struct*)
                                extension;
                    }

                    extension = extension->next;
                }
            } break;

            default:
                break;
        }
    }

    // Initialize the `language_index` here since `__register_types()` makes use
    // of it.
    rebel_instance_binding_functions binding_funcs = {};
    binding_funcs.alloc_instance_binding_data      = wrapper_create;
    binding_funcs.free_instance_binding_data       = wrapper_destroy;

    RegisterState::language_index =
        nativescript_1_1_api
            ->rebel_nativescript_register_instance_binding_data_functions(
                binding_funcs
            );

    // register these now
    register_types();
    init_method_bindings();
}

void Global::gdnative_terminate(rebel_gdnative_terminate_options* options) {
    // reserved for future use.
}

void Global::gdnative_profiling_add_data(
    const char* p_signature,
    uint64_t p_time
) {
    nativescript_1_1_api->rebel_nativescript_profiling_add_data(
        p_signature,
        p_time
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
