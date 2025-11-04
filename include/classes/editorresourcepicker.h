// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORRESOURCEPICKER_H
#define REBEL_EDITORRESOURCEPICKER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/hboxcontainer.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class InputEvent;
class Object;
class Resource;
class Texture;

class EditorResourcePicker : public HBoxContainer {
public:
    void _button_draw();
    void _button_input(const Ref<InputEvent> arg0);
    void _edit_menu_cbk(const int64_t arg0);
    void _file_quick_selected();
    void _file_selected(const String arg0);
    void _resource_selected();
    void _update_menu();
    void _update_resource_preview(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const int64_t arg3);
    bool can_drop_data_fw(const Vector2 position, const Variant data, const Control* from) const;
    void drop_data_fw(const Vector2 position, const Variant data, const Control* from);
    PoolStringArray get_allowed_types() const;
    String get_base_type() const;
    Variant get_drag_data_fw(const Vector2 position, const Control* from);
    Ref<Resource> get_edited_resource();
    bool handle_menu_selected(const int64_t id);
    bool is_editable() const;
    bool is_toggle_mode() const;
    void set_base_type(const String base_type);
    void set_create_options(const Object* menu_node);
    void set_editable(const bool enable);
    void set_edited_resource(const Ref<Resource> resource);
    void set_toggle_mode(const bool enable);
    void set_toggle_pressed(const bool pressed);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorResourcePicker";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorResourcePicker";
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
        rebel_method_bind* mb__button_draw;
        rebel_method_bind* mb__button_input;
        rebel_method_bind* mb__edit_menu_cbk;
        rebel_method_bind* mb__file_quick_selected;
        rebel_method_bind* mb__file_selected;
        rebel_method_bind* mb__resource_selected;
        rebel_method_bind* mb__update_menu;
        rebel_method_bind* mb__update_resource_preview;
        rebel_method_bind* mb_can_drop_data_fw;
        rebel_method_bind* mb_drop_data_fw;
        rebel_method_bind* mb_get_allowed_types;
        rebel_method_bind* mb_get_base_type;
        rebel_method_bind* mb_get_drag_data_fw;
        rebel_method_bind* mb_get_edited_resource;
        rebel_method_bind* mb_handle_menu_selected;
        rebel_method_bind* mb_is_editable;
        rebel_method_bind* mb_is_toggle_mode;
        rebel_method_bind* mb_set_base_type;
        rebel_method_bind* mb_set_create_options;
        rebel_method_bind* mb_set_editable;
        rebel_method_bind* mb_set_edited_resource;
        rebel_method_bind* mb_set_toggle_mode;
        rebel_method_bind* mb_set_toggle_pressed;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORRESOURCEPICKER_H
