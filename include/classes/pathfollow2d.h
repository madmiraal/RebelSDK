// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PATHFOLLOW2D_H
#define REBEL_PATHFOLLOW2D_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node2d.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PathFollow2D : public Node2D {
public:
    bool get_cubic_interpolation() const;
    real_t get_h_offset() const;
    real_t get_lookahead() const;
    real_t get_offset() const;
    real_t get_unit_offset() const;
    real_t get_v_offset() const;
    bool has_loop() const;
    bool is_rotating() const;
    void set_cubic_interpolation(const bool enable);
    void set_h_offset(const real_t h_offset);
    void set_lookahead(const real_t lookahead);
    void set_loop(const bool loop);
    void set_offset(const real_t offset);
    void set_rotate(const bool enable);
    void set_unit_offset(const real_t unit_offset);
    void set_v_offset(const real_t v_offset);

    static PathFollow2D* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PathFollow2D";
    }

    inline static const char* get_rebel_class_name() {
        return "PathFollow2D";
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
        rebel_method_bind* mb_get_cubic_interpolation;
        rebel_method_bind* mb_get_h_offset;
        rebel_method_bind* mb_get_lookahead;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_unit_offset;
        rebel_method_bind* mb_get_v_offset;
        rebel_method_bind* mb_has_loop;
        rebel_method_bind* mb_is_rotating;
        rebel_method_bind* mb_set_cubic_interpolation;
        rebel_method_bind* mb_set_h_offset;
        rebel_method_bind* mb_set_lookahead;
        rebel_method_bind* mb_set_loop;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_rotate;
        rebel_method_bind* mb_set_unit_offset;
        rebel_method_bind* mb_set_v_offset;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PATHFOLLOW2D_H
