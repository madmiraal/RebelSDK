// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_BOXCONTAINER_H
#define REBEL_BOXCONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class BoxContainer : public Container {
public:
    enum AlignMode {
        ALIGN_BEGIN = 0,
        ALIGN_CENTER = 1,
        ALIGN_END = 2,
    };

    void add_spacer(const bool begin);
    BoxContainer::AlignMode get_alignment() const;
    void set_alignment(const int64_t alignment);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "BoxContainer";
    }

    inline static const char* get_rebel_class_name() {
        return "BoxContainer";
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
        rebel_method_bind* mb_add_spacer;
        rebel_method_bind* mb_get_alignment;
        rebel_method_bind* mb_set_alignment;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_BOXCONTAINER_H
