// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef FUNCTION_PROFILING_H
#define FUNCTION_PROFILING_H

#include "common/defs.h"

namespace Rebel {
class FunctionProfiling {
public:
    FunctionProfiling(const char* function, int line);
    ~FunctionProfiling();

private:
    char signature[1024];
    uint64_t ticks;
};
} // namespace Rebel

#ifdef DEBUG_ENABLED
#define REBEL_FUNCTION_PROFILING                                               \
    FunctionProfiling function_profiling(__FUNCTION__, __LINE__);
#else
#define REBEL_FUNCTION_PROFILING
#endif

#endif // FUNCTION_PROFILING_H
