// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_TABS_H
#define REBEL_TABS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/control.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class Texture;

class Tabs : public Control {
public:
    enum CloseButtonDisplayPolicy {
        CLOSE_BUTTON_SHOW_NEVER = 0,
        CLOSE_BUTTON_SHOW_ACTIVE_ONLY = 1,
        CLOSE_BUTTON_SHOW_ALWAYS = 2,
        CLOSE_BUTTON_MAX = 3,
    };

    enum TabAlign {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
        ALIGN_MAX = 3,
    };

    void _gui_input(const Ref<InputEvent> arg0);
    void _on_mouse_exited();
    void _update_hover();
    void add_tab(const String title = "", const Ref<Texture> icon = nullptr);
    void ensure_tab_visible(const int64_t idx);
    int64_t get_current_tab() const;
    bool get_drag_to_rearrange_enabled() const;
    bool get_offset_buttons_visible() const;
    int64_t get_previous_tab() const;
    bool get_scrolling_enabled() const;
    bool get_select_with_rmb() const;
    Tabs::TabAlign get_tab_align() const;
    Tabs::CloseButtonDisplayPolicy get_tab_close_display_policy() const;
    int64_t get_tab_count() const;
    bool get_tab_disabled(const int64_t tab_idx) const;
    Ref<Texture> get_tab_icon(const int64_t tab_idx) const;
    int64_t get_tab_offset() const;
    Rect2 get_tab_rect(const int64_t tab_idx) const;
    String get_tab_title(const int64_t tab_idx) const;
    int64_t get_tabs_rearrange_group() const;
    void move_tab(const int64_t from, const int64_t to);
    void remove_tab(const int64_t tab_idx);
    void set_current_tab(const int64_t tab_idx);
    void set_drag_to_rearrange_enabled(const bool enabled);
    void set_scrolling_enabled(const bool enabled);
    void set_select_with_rmb(const bool enabled);
    void set_tab_align(const int64_t align);
    void set_tab_close_display_policy(const int64_t policy);
    void set_tab_disabled(const int64_t tab_idx, const bool disabled);
    void set_tab_icon(const int64_t tab_idx, const Ref<Texture> icon);
    void set_tab_title(const int64_t tab_idx, const String title);
    void set_tabs_rearrange_group(const int64_t group_id);

    static Tabs* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Tabs";
    }

    inline static const char* get_rebel_class_name() {
        return "Tabs";
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
        rebel_method_bind* mb__on_mouse_exited;
        rebel_method_bind* mb__update_hover;
        rebel_method_bind* mb_add_tab;
        rebel_method_bind* mb_ensure_tab_visible;
        rebel_method_bind* mb_get_current_tab;
        rebel_method_bind* mb_get_drag_to_rearrange_enabled;
        rebel_method_bind* mb_get_offset_buttons_visible;
        rebel_method_bind* mb_get_previous_tab;
        rebel_method_bind* mb_get_scrolling_enabled;
        rebel_method_bind* mb_get_select_with_rmb;
        rebel_method_bind* mb_get_tab_align;
        rebel_method_bind* mb_get_tab_close_display_policy;
        rebel_method_bind* mb_get_tab_count;
        rebel_method_bind* mb_get_tab_disabled;
        rebel_method_bind* mb_get_tab_icon;
        rebel_method_bind* mb_get_tab_offset;
        rebel_method_bind* mb_get_tab_rect;
        rebel_method_bind* mb_get_tab_title;
        rebel_method_bind* mb_get_tabs_rearrange_group;
        rebel_method_bind* mb_move_tab;
        rebel_method_bind* mb_remove_tab;
        rebel_method_bind* mb_set_current_tab;
        rebel_method_bind* mb_set_drag_to_rearrange_enabled;
        rebel_method_bind* mb_set_scrolling_enabled;
        rebel_method_bind* mb_set_select_with_rmb;
        rebel_method_bind* mb_set_tab_align;
        rebel_method_bind* mb_set_tab_close_display_policy;
        rebel_method_bind* mb_set_tab_disabled;
        rebel_method_bind* mb_set_tab_icon;
        rebel_method_bind* mb_set_tab_title;
        rebel_method_bind* mb_set_tabs_rearrange_group;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_TABS_H
