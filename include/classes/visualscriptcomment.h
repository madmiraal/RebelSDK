// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALSCRIPTCOMMENT_H
#define REBEL_VISUALSCRIPTCOMMENT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualscriptnode.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualScriptComment : public VisualScriptNode {
public:
    String get_description() const;
    Vector2 get_size() const;
    String get_title() const;
    void set_description(const String description);
    void set_size(const Vector2 size);
    void set_title(const String title);

    static VisualScriptComment* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualScriptComment";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualScriptComment";
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
        rebel_method_bind* mb_get_description;
        rebel_method_bind* mb_get_size;
        rebel_method_bind* mb_get_title;
        rebel_method_bind* mb_set_description;
        rebel_method_bind* mb_set_size;
        rebel_method_bind* mb_set_title;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALSCRIPTCOMMENT_H
