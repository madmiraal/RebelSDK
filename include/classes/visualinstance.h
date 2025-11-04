// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_VISUALINSTANCE_H
#define REBEL_VISUALINSTANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/cullinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class VisualInstance : public CullInstance {
public:
    RID _get_visual_instance_rid() const;
    AABB get_aabb() const;
    RID get_base() const;
    RID get_instance() const;
    int64_t get_layer_mask() const;
    bool get_layer_mask_bit(const int64_t layer) const;
    AABB get_transformed_aabb() const;
    void set_base(const RID base);
    void set_layer_mask(const int64_t mask);
    void set_layer_mask_bit(const int64_t layer, const bool enabled);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "VisualInstance";
    }

    inline static const char* get_rebel_class_name() {
        return "VisualInstance";
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
        rebel_method_bind* mb__get_visual_instance_rid;
        rebel_method_bind* mb_get_aabb;
        rebel_method_bind* mb_get_base;
        rebel_method_bind* mb_get_instance;
        rebel_method_bind* mb_get_layer_mask;
        rebel_method_bind* mb_get_layer_mask_bit;
        rebel_method_bind* mb_get_transformed_aabb;
        rebel_method_bind* mb_set_base;
        rebel_method_bind* mb_set_layer_mask;
        rebel_method_bind* mb_set_layer_mask_bit;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_VISUALINSTANCE_H
