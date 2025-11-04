// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_THREAD_H
#define REBEL_THREAD_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Object;

class Thread : public Reference {
public:
    enum Priority {
        PRIORITY_LOW = 0,
        PRIORITY_NORMAL = 1,
        PRIORITY_HIGH = 2,
    };

    String get_id() const;
    bool is_active() const;
    bool is_alive() const;
    Error start(const Object* instance, const String method, const Variant userdata = Variant(), const int64_t priority = 1);
    Variant wait_to_finish();

    static Thread* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Thread";
    }

    inline static const char* get_rebel_class_name() {
        return "Thread";
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
        rebel_method_bind* mb_get_id;
        rebel_method_bind* mb_is_active;
        rebel_method_bind* mb_is_alive;
        rebel_method_bind* mb_start;
        rebel_method_bind* mb_wait_to_finish;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_THREAD_H
