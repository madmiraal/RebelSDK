// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PCKPACKER_H
#define REBEL_PCKPACKER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PCKPacker : public Reference {
public:
    Error add_file(const String pck_path, const String source_path);
    Error flush(const bool verbose = false);
    Error pck_start(const String pck_name, const int64_t alignment = 0);

    static PCKPacker* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PCKPacker";
    }

    inline static const char* get_rebel_class_name() {
        return "PCKPacker";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb_add_file;
        rebel_method_bind* mb_flush;
        rebel_method_bind* mb_pck_start;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PCKPACKER_H
