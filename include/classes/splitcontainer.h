// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SPLITCONTAINER_H
#define REBEL_SPLITCONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;

class SplitContainer : public Container {
public:
    enum DraggerVisibility {
        DRAGGER_VISIBLE = 0,
        DRAGGER_HIDDEN = 1,
        DRAGGER_HIDDEN_COLLAPSED = 2,
    };

    void _gui_input(const Ref<InputEvent> arg0);
    void clamp_split_offset();
    SplitContainer::DraggerVisibility get_dragger_visibility() const;
    int64_t get_split_offset() const;
    bool is_collapsed() const;
    void set_collapsed(const bool collapsed);
    void set_dragger_visibility(const int64_t mode);
    void set_split_offset(const int64_t offset);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SplitContainer";
    }

    inline static const char* get_rebel_class_name() {
        return "SplitContainer";
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
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb_clamp_split_offset;
        rebel_method_bind* mb_get_dragger_visibility;
        rebel_method_bind* mb_get_split_offset;
        rebel_method_bind* mb_is_collapsed;
        rebel_method_bind* mb_set_collapsed;
        rebel_method_bind* mb_set_dragger_visibility;
        rebel_method_bind* mb_set_split_offset;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SPLITCONTAINER_H
