// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef DEFS_H
#define DEFS_H

#include "rebelglobal.h"

namespace Rebel {
enum class Error {
    OK,
    FAILED,
    ERR_UNAVAILABLE,
    ERR_UNCONFIGURED,
    ERR_UNAUTHORIZED,
    ERR_PARAMETER_RANGE_ERROR,
    ERR_OUT_OF_MEMORY,
    ERR_FILE_NOT_FOUND,
    ERR_FILE_BAD_DRIVE,
    ERR_FILE_BAD_PATH,
    ERR_FILE_NO_PERMISSION,
    ERR_FILE_ALREADY_IN_USE,
    ERR_FILE_CANT_OPEN,
    ERR_FILE_CANT_WRITE,
    ERR_FILE_CANT_READ,
    ERR_FILE_UNRECOGNIZED,
    ERR_FILE_CORRUPT,
    ERR_FILE_MISSING_DEPENDENCIES,
    ERR_FILE_EOF,
    ERR_CANT_OPEN,
    ERR_CANT_CREATE,
    ERR_QUERY_FAILED,
    ERR_ALREADY_IN_USE,
    ERR_LOCKED,
    ERR_TIMEOUT,
    ERR_CANT_CONNECT,
    ERR_CANT_RESOLVE,
    ERR_CONNECTION_ERROR,
    ERR_CANT_ACQUIRE_RESOURCE,
    ERR_CANT_FORK,
    ERR_INVALID_DATA,
    ERR_INVALID_PARAMETER,
    ERR_ALREADY_EXISTS,
    ERR_DOES_NOT_EXIST,
    ERR_DATABASE_CANT_READ,
    ERR_DATABASE_CANT_WRITE,
    ERR_COMPILATION_FAILED,
    ERR_METHOD_NOT_FOUND,
    ERR_LINK_FAILED,
    ERR_SCRIPT_FAILED,
    ERR_CYCLIC_LINK,
    ERR_INVALID_DECLARATION,
    ERR_DUPLICATE_SYMBOL,
    ERR_PARSE_ERROR,
    ERR_BUSY,
    ERR_SKIP,
    ERR_HELP,
    ERR_BUG,
    ERR_PRINTER_ON_FIRE,
};
} // namespace Rebel

// alloca() is non-standard. When using MSVC, it's in malloc.h.
#if defined(__linux__) || defined(__APPLE__)
#include <alloca.h>
#else
#include <malloc.h>
#endif

typedef float real_t;

// This epsilon should match the one used by Rebel for consistency.
// Using `f` when `real_t` is float.
#define CMP_EPSILON  0.00001f
#define CMP_EPSILON2 (CMP_EPSILON * CMP_EPSILON)

#define Math_PI  3.1415926535897932384626433833
#define Math_TAU 6.2831853071795864769252867666

#define _PLANE_EQ_DOT_EPSILON 0.999
#define _PLANE_EQ_D_EPSILON   0.0001

#ifdef __GNUC__
#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)
#else
#define likely(x)   x
#define unlikely(x) x
#endif

// Don't use this directly; instead, use any of the CRASH_* macros
#ifdef _MSC_VER
#define GENERATE_TRAP                                                          \
    __debugbreak();                                                            \
    /* Avoid warning about control paths */                                    \
    for (;;) {}
#else
#define GENERATE_TRAP __builtin_trap();
#endif

// ERR/WARN macros
#ifndef WARN_PRINT
#define WARN_PRINT(msg) Global::print_warning(msg, __func__, __FILE__, __LINE__)
#endif

#ifndef WARN_PRINTS
#define WARN_PRINTS(msg) WARN_PRINT((msg).utf8().get_data())
#endif

#ifndef ERR_PRINT
#define ERR_PRINT(msg) Global::print_error(msg, __func__, __FILE__, __LINE__)
#endif

#ifndef ERR_PRINTS
#define ERR_PRINTS(msg) ERR_PRINT((msg).utf8().get_data())
#endif

#ifndef FATAL_PRINT
#define FATAL_PRINT(msg) ERR_PRINT(String("FATAL: ") + (msg))
#endif

#ifndef ERR_MSG_INDEX
#define ERR_MSG_INDEX(index, size)                                             \
    (String("Index ") + #index + "=" + String::num_int64(index)                \
     + " out of size (" + #size + "=" + String::num_int64(size) + ")")
#endif

#ifndef ERR_MSG_NULL
#define ERR_MSG_NULL(param) (String("Parameter '") + #param + "' is null.")
#endif

#ifndef ERR_MSG_COND
#define ERR_MSG_COND(cond) (String("Condition '") + #cond + "' is true.")
#endif

#ifndef ERR_FAIL_INDEX
#define ERR_FAIL_INDEX(index, size)                                            \
    do {                                                                       \
        if (unlikely((index) < 0 || (index) >= (size))) {                      \
            ERR_PRINT(ERR_MSG_INDEX(index, size));                             \
            return;                                                            \
        }                                                                      \
    } while (0)
#endif

#ifndef ERR_FAIL_INDEX_V
#define ERR_FAIL_INDEX_V(index, size, ret)                                     \
    do {                                                                       \
        if (unlikely((index) < 0 || (index) >= (size))) {                      \
            ERR_PRINT(ERR_MSG_INDEX(index, size));                             \
            return ret;                                                        \
        }                                                                      \
    } while (0)
#endif

#ifndef ERR_FAIL_UNSIGNED_INDEX_V
#define ERR_FAIL_UNSIGNED_INDEX_V(index, size, ret)                            \
    do {                                                                       \
        if (unlikely((index) >= (size))) {                                     \
            ERR_PRINT(ERR_MSG_INDEX(index, size));                             \
            return ret;                                                        \
        }                                                                      \
    } while (0)
#endif

#ifndef CRASH_BAD_INDEX
#define CRASH_BAD_INDEX(index, size)                                           \
    do {                                                                       \
        if (unlikely((index) < 0 || (index) >= (size))) {                      \
            FATAL_PRINT(ERR_MSG_INDEX(index, size));                           \
            GENERATE_TRAP;                                                     \
        }                                                                      \
    } while (0)
#endif

#ifndef ERR_FAIL_NULL
#define ERR_FAIL_NULL(param)                                                   \
    do {                                                                       \
        if (unlikely(!param)) {                                                \
            ERR_PRINT(ERR_MSG_NULL(param));                                    \
            return;                                                            \
        }                                                                      \
    } while (0)
#endif

#ifndef ERR_FAIL_NULL_V
#define ERR_FAIL_NULL_V(param, ret)                                            \
    do {                                                                       \
        if (unlikely(!param)) {                                                \
            ERR_PRINT(ERR_MSG_NULL(param));                                    \
            return ret;                                                        \
        }                                                                      \
    } while (0)
#endif

#ifndef ERR_FAIL_COND
#define ERR_FAIL_COND(cond)                                                    \
    do {                                                                       \
        if (unlikely(cond)) {                                                  \
            ERR_PRINT(ERR_MSG_COND(cond));                                     \
            return;                                                            \
        }                                                                      \
    } while (0)
#endif

#ifndef CRASH_COND
#define CRASH_COND(cond)                                                       \
    do {                                                                       \
        if (unlikely(cond)) {                                                  \
            FATAL_PRINT(ERR_MSG_COND(cond));                                   \
            GENERATE_TRAP;                                                     \
        }                                                                      \
    } while (0)
#endif

#ifndef ERR_FAIL_COND_V
#define ERR_FAIL_COND_V(cond, ret)                                             \
    do {                                                                       \
        if (unlikely(cond)) {                                                  \
            ERR_PRINT(ERR_MSG_COND(cond));                                     \
            return ret;                                                        \
        }                                                                      \
    } while (0)
#endif

#ifndef ERR_CONTINUE
#define ERR_CONTINUE(cond)                                                     \
    {                                                                          \
        if (unlikely(cond)) {                                                  \
            ERR_PRINT(ERR_MSG_COND(cond));                                     \
            continue;                                                          \
        }                                                                      \
    }
#endif

#ifndef ERR_BREAK
#define ERR_BREAK(cond)                                                        \
    {                                                                          \
        if (unlikely(cond)) {                                                  \
            ERR_PRINT(ERR_MSG_COND(cond));                                     \
            break;                                                             \
        }                                                                      \
    }
#endif

#ifndef ERR_FAIL
#define ERR_FAIL()                                                             \
    do {                                                                       \
        ERR_PRINT("Method/Function Failed.");                                  \
        return;                                                                \
    } while (0)
#endif

#ifndef ERR_FAIL_V
#define ERR_FAIL_V(ret)                                                        \
    do {                                                                       \
        ERR_PRINT("Method/Function Failed.");                                  \
        return ret;                                                            \
    } while (0)
#endif

#ifndef CRASH_NOW
#define CRASH_NOW()                                                            \
    do {                                                                       \
        FATAL_PRINT("Method/Function Failed.");                                \
        GENERATE_TRAP;                                                         \
    } while (0)
#endif

#endif // DEFS_H
