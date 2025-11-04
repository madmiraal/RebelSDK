// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RANGE_H
#define REBEL_RANGE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;

class Range : public Control {
public:
    real_t get_as_ratio() const;
    real_t get_max() const;
    real_t get_min() const;
    real_t get_page() const;
    real_t get_step() const;
    real_t get_value() const;
    bool is_greater_allowed() const;
    bool is_lesser_allowed() const;
    bool is_ratio_exp() const;
    bool is_using_rounded_values() const;
    void set_allow_greater(const bool allow);
    void set_allow_lesser(const bool allow);
    void set_as_ratio(const real_t value);
    void set_exp_ratio(const bool enabled);
    void set_max(const real_t maximum);
    void set_min(const real_t minimum);
    void set_page(const real_t pagesize);
    void set_step(const real_t step);
    void set_use_rounded_values(const bool enabled);
    void set_value(const real_t value);
    void share(const Node* with);
    void unshare();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Range";
    }

    inline static const char* get_rebel_class_name() {
        return "Range";
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
        rebel_method_bind* mb_get_as_ratio;
        rebel_method_bind* mb_get_max;
        rebel_method_bind* mb_get_min;
        rebel_method_bind* mb_get_page;
        rebel_method_bind* mb_get_step;
        rebel_method_bind* mb_get_value;
        rebel_method_bind* mb_is_greater_allowed;
        rebel_method_bind* mb_is_lesser_allowed;
        rebel_method_bind* mb_is_ratio_exp;
        rebel_method_bind* mb_is_using_rounded_values;
        rebel_method_bind* mb_set_allow_greater;
        rebel_method_bind* mb_set_allow_lesser;
        rebel_method_bind* mb_set_as_ratio;
        rebel_method_bind* mb_set_exp_ratio;
        rebel_method_bind* mb_set_max;
        rebel_method_bind* mb_set_min;
        rebel_method_bind* mb_set_page;
        rebel_method_bind* mb_set_step;
        rebel_method_bind* mb_set_use_rounded_values;
        rebel_method_bind* mb_set_value;
        rebel_method_bind* mb_share;
        rebel_method_bind* mb_unshare;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RANGE_H
