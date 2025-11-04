// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GRAPHNODE_H
#define REBEL_GRAPHNODE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class Texture;

class GraphNode : public Container {
public:
    enum Overlay {
        OVERLAY_DISABLED = 0,
        OVERLAY_BREAKPOINT = 1,
        OVERLAY_POSITION = 2,
    };

    void _gui_input(const Ref<InputEvent> arg0);
    void clear_all_slots();
    void clear_slot(const int64_t idx);
    Color get_connection_input_color(const int64_t idx);
    int64_t get_connection_input_count();
    Vector2 get_connection_input_position(const int64_t idx);
    int64_t get_connection_input_type(const int64_t idx);
    Color get_connection_output_color(const int64_t idx);
    int64_t get_connection_output_count();
    Vector2 get_connection_output_position(const int64_t idx);
    int64_t get_connection_output_type(const int64_t idx);
    Vector2 get_offset() const;
    GraphNode::Overlay get_overlay() const;
    Color get_slot_color_left(const int64_t idx) const;
    Color get_slot_color_right(const int64_t idx) const;
    int64_t get_slot_type_left(const int64_t idx) const;
    int64_t get_slot_type_right(const int64_t idx) const;
    String get_title() const;
    bool is_close_button_visible() const;
    bool is_comment() const;
    bool is_resizable() const;
    bool is_selected();
    bool is_slot_enabled_left(const int64_t idx) const;
    bool is_slot_enabled_right(const int64_t idx) const;
    void set_comment(const bool comment);
    void set_offset(const Vector2 offset);
    void set_overlay(const int64_t overlay);
    void set_resizable(const bool resizable);
    void set_selected(const bool selected);
    void set_show_close_button(const bool show);
    void set_slot(const int64_t idx, const bool enable_left, const int64_t type_left, const Color color_left, const bool enable_right, const int64_t type_right, const Color color_right, const Ref<Texture> custom_left = nullptr, const Ref<Texture> custom_right = nullptr);
    void set_slot_color_left(const int64_t idx, const Color color_left);
    void set_slot_color_right(const int64_t idx, const Color color_right);
    void set_slot_enabled_left(const int64_t idx, const bool enable_left);
    void set_slot_enabled_right(const int64_t idx, const bool enable_right);
    void set_slot_type_left(const int64_t idx, const int64_t type_left);
    void set_slot_type_right(const int64_t idx, const int64_t type_right);
    void set_title(const String title);

    static GraphNode* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GraphNode";
    }

    inline static const char* get_rebel_class_name() {
        return "GraphNode";
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
        rebel_method_bind* mb_clear_all_slots;
        rebel_method_bind* mb_clear_slot;
        rebel_method_bind* mb_get_connection_input_color;
        rebel_method_bind* mb_get_connection_input_count;
        rebel_method_bind* mb_get_connection_input_position;
        rebel_method_bind* mb_get_connection_input_type;
        rebel_method_bind* mb_get_connection_output_color;
        rebel_method_bind* mb_get_connection_output_count;
        rebel_method_bind* mb_get_connection_output_position;
        rebel_method_bind* mb_get_connection_output_type;
        rebel_method_bind* mb_get_offset;
        rebel_method_bind* mb_get_overlay;
        rebel_method_bind* mb_get_slot_color_left;
        rebel_method_bind* mb_get_slot_color_right;
        rebel_method_bind* mb_get_slot_type_left;
        rebel_method_bind* mb_get_slot_type_right;
        rebel_method_bind* mb_get_title;
        rebel_method_bind* mb_is_close_button_visible;
        rebel_method_bind* mb_is_comment;
        rebel_method_bind* mb_is_resizable;
        rebel_method_bind* mb_is_selected;
        rebel_method_bind* mb_is_slot_enabled_left;
        rebel_method_bind* mb_is_slot_enabled_right;
        rebel_method_bind* mb_set_comment;
        rebel_method_bind* mb_set_offset;
        rebel_method_bind* mb_set_overlay;
        rebel_method_bind* mb_set_resizable;
        rebel_method_bind* mb_set_selected;
        rebel_method_bind* mb_set_show_close_button;
        rebel_method_bind* mb_set_slot;
        rebel_method_bind* mb_set_slot_color_left;
        rebel_method_bind* mb_set_slot_color_right;
        rebel_method_bind* mb_set_slot_enabled_left;
        rebel_method_bind* mb_set_slot_enabled_right;
        rebel_method_bind* mb_set_slot_type_left;
        rebel_method_bind* mb_set_slot_type_right;
        rebel_method_bind* mb_set_title;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GRAPHNODE_H
