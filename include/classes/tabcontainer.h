// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TABCONTAINER_H
#define REBEL_TABCONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Control;
class InputEvent;
class Node;
class Popup;
class Texture;

class TabContainer : public Container {
public:
    enum TabAlign {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
    };

    void _child_renamed_callback();
    void _gui_input(const Ref<InputEvent> arg0);
    void _on_mouse_exited();
    void _on_theme_changed();
    void _repaint();
    void _update_current_tab();
    bool are_tabs_visible() const;
    int64_t get_current_tab() const;
    Control* get_current_tab_control() const;
    bool get_drag_to_rearrange_enabled() const;
    Popup* get_popup() const;
    int64_t get_previous_tab() const;
    TabContainer::TabAlign get_tab_align() const;
    Control* get_tab_control(const int64_t tab_idx) const;
    int64_t get_tab_count() const;
    bool get_tab_disabled(const int64_t tab_idx) const;
    bool get_tab_hidden(const int64_t tab_idx) const;
    Ref<Texture> get_tab_icon(const int64_t tab_idx) const;
    int64_t get_tab_idx_at_point(const Vector2 point) const;
    String get_tab_title(const int64_t tab_idx) const;
    int64_t get_tabs_rearrange_group() const;
    bool get_use_hidden_tabs_for_min_size() const;
    bool is_all_tabs_in_front() const;
    void set_all_tabs_in_front(const bool is_front);
    void set_current_tab(const int64_t tab_idx);
    void set_drag_to_rearrange_enabled(const bool enabled);
    void set_popup(const Node* popup);
    void set_tab_align(const int64_t align);
    void set_tab_disabled(const int64_t tab_idx, const bool disabled);
    void set_tab_hidden(const int64_t tab_idx, const bool hidden);
    void set_tab_icon(const int64_t tab_idx, const Ref<Texture> icon);
    void set_tab_title(const int64_t tab_idx, const String title);
    void set_tabs_rearrange_group(const int64_t group_id);
    void set_tabs_visible(const bool visible);
    void set_use_hidden_tabs_for_min_size(const bool enabled);

    static TabContainer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "TabContainer";
    }

    inline static const char* get_rebel_class_name() {
        return "TabContainer";
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
        rebel_method_bind* mb__child_renamed_callback;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__on_mouse_exited;
        rebel_method_bind* mb__on_theme_changed;
        rebel_method_bind* mb__repaint;
        rebel_method_bind* mb__update_current_tab;
        rebel_method_bind* mb_are_tabs_visible;
        rebel_method_bind* mb_get_current_tab;
        rebel_method_bind* mb_get_current_tab_control;
        rebel_method_bind* mb_get_drag_to_rearrange_enabled;
        rebel_method_bind* mb_get_popup;
        rebel_method_bind* mb_get_previous_tab;
        rebel_method_bind* mb_get_tab_align;
        rebel_method_bind* mb_get_tab_control;
        rebel_method_bind* mb_get_tab_count;
        rebel_method_bind* mb_get_tab_disabled;
        rebel_method_bind* mb_get_tab_hidden;
        rebel_method_bind* mb_get_tab_icon;
        rebel_method_bind* mb_get_tab_idx_at_point;
        rebel_method_bind* mb_get_tab_title;
        rebel_method_bind* mb_get_tabs_rearrange_group;
        rebel_method_bind* mb_get_use_hidden_tabs_for_min_size;
        rebel_method_bind* mb_is_all_tabs_in_front;
        rebel_method_bind* mb_set_all_tabs_in_front;
        rebel_method_bind* mb_set_current_tab;
        rebel_method_bind* mb_set_drag_to_rearrange_enabled;
        rebel_method_bind* mb_set_popup;
        rebel_method_bind* mb_set_tab_align;
        rebel_method_bind* mb_set_tab_disabled;
        rebel_method_bind* mb_set_tab_hidden;
        rebel_method_bind* mb_set_tab_icon;
        rebel_method_bind* mb_set_tab_title;
        rebel_method_bind* mb_set_tabs_rearrange_group;
        rebel_method_bind* mb_set_tabs_visible;
        rebel_method_bind* mb_set_use_hidden_tabs_for_min_size;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TABCONTAINER_H
