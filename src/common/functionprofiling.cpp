// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/functionprofiling.h"

#include "classes/os.h"

#include <cstdio>

namespace Rebel {
FunctionProfiling::FunctionProfiling(const char* function, const int line) {
    snprintf(signature, 1024, "::%d::%s", line, function);
    ticks = OS::get_singleton()->get_ticks_usec();
}

FunctionProfiling::~FunctionProfiling() {
    const uint64_t duration = OS::get_singleton()->get_ticks_usec() - ticks;
    if (duration > 0) {
        Global::gdnative_profiling_add_data(signature, duration);
    }
}
} // namespace Rebel
