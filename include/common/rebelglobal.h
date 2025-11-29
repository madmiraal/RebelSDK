// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GLOBAL_H
#define REBEL_GLOBAL_H

#include "api/gdnative_api_struct.gen.h"
#include "common/array.h"
#include "common/string.h"

namespace Rebel {
extern "C" const rebel_gdnative_core_api_struct* api;
extern "C" const rebel_gdnative_core_1_1_api_struct* core_1_1_api;
extern "C" const rebel_gdnative_core_1_2_api_struct* core_1_2_api;
extern "C" const rebel_gdnative_ext_nativescript_api_struct* nativescript_api;
extern "C" const rebel_gdnative_ext_nativescript_1_1_api_struct*
    nativescript_1_1_api;
extern "C" const rebel_gdnative_ext_pluginscript_api_struct* pluginscript_api;
extern "C" const rebel_gdnative_ext_android_api_struct* android_api;
extern "C" const rebel_gdnative_ext_arvr_api_struct* arvr_api;
extern "C" const rebel_gdnative_ext_videodecoder_api_struct* videodecoder_api;
extern "C" const rebel_gdnative_ext_net_api_struct* net_api;
extern "C" const rebel_gdnative_ext_net_3_2_api_struct* net_3_2_api;
extern "C" const void* gdnlib;

namespace Global {
void print(const String& message);
void print_warning(
    const String& description,
    const String& function,
    const String& file,
    int line
);
void print_error(
    const String& description,
    const String& function,
    const String& file,
    int line
);

void gdnative_init(const rebel_gdnative_init_options* options);
void gdnative_terminate(rebel_gdnative_terminate_options* options);
void nativescript_init(void* handle);
void nativescript_terminate(void* handle);
void gdnative_profiling_add_data(const char* signature, uint64_t time);

template <class... Args>
void print(const String& string, Args... values) {
    print(string.format(Array::make(values...)));
}
} // namespace Global

struct RegisterState {
    static void* nativescript_handle;
    static int language_index;
};
} // namespace Rebel

#endif // REBEL_GLOBAL_H
