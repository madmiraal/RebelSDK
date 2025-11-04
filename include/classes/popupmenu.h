// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_POPUPMENU_H
#define REBEL_POPUPMENU_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/popup.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class ShortCut;
class Texture;

class PopupMenu : public Popup {
public:
    Array _get_items() const;
    void _gui_input(const Ref<InputEvent> arg0);
    void _set_items(const Array arg0);
    void _submenu_timeout();
    void add_check_item(const String label, const int64_t id = -1, const int64_t accel = 0);
    void add_check_shortcut(const Ref<ShortCut> shortcut, const int64_t id = -1, const bool global = false);
    void add_icon_check_item(const Ref<Texture> texture, const String label, const int64_t id = -1, const int64_t accel = 0);
    void add_icon_check_shortcut(const Ref<Texture> texture, const Ref<ShortCut> shortcut, const int64_t id = -1, const bool global = false);
    void add_icon_item(const Ref<Texture> texture, const String label, const int64_t id = -1, const int64_t accel = 0);
    void add_icon_radio_check_item(const Ref<Texture> texture, const String label, const int64_t id = -1, const int64_t accel = 0);
    void add_icon_radio_check_shortcut(const Ref<Texture> texture, const Ref<ShortCut> shortcut, const int64_t id = -1, const bool global = false);
    void add_icon_shortcut(const Ref<Texture> texture, const Ref<ShortCut> shortcut, const int64_t id = -1, const bool global = false);
    void add_item(const String label, const int64_t id = -1, const int64_t accel = 0);
    void add_multistate_item(const String label, const int64_t max_states, const int64_t default_state = 0, const int64_t id = -1, const int64_t accel = 0);
    void add_radio_check_item(const String label, const int64_t id = -1, const int64_t accel = 0);
    void add_radio_check_shortcut(const Ref<ShortCut> shortcut, const int64_t id = -1, const bool global = false);
    void add_separator(const String label = "", const int64_t id = -1);
    void add_shortcut(const Ref<ShortCut> shortcut, const int64_t id = -1, const bool global = false);
    void add_submenu_item(const String label, const String submenu, const int64_t id = -1);
    void clear();
    bool get_allow_search() const;
    int64_t get_current_index() const;
    int64_t get_item_accelerator(const int64_t idx) const;
    int64_t get_item_count() const;
    Ref<Texture> get_item_icon(const int64_t idx) const;
    int64_t get_item_id(const int64_t idx) const;
    int64_t get_item_index(const int64_t id) const;
    Variant get_item_metadata(const int64_t idx) const;
    Ref<ShortCut> get_item_shortcut(const int64_t idx) const;
    String get_item_submenu(const int64_t idx) const;
    String get_item_text(const int64_t idx) const;
    String get_item_tooltip(const int64_t idx) const;
    real_t get_submenu_popup_delay() const;
    bool is_hide_on_checkable_item_selection() const;
    bool is_hide_on_item_selection() const;
    bool is_hide_on_state_item_selection() const;
    bool is_hide_on_window_lose_focus() const;
    bool is_item_checkable(const int64_t idx) const;
    bool is_item_checked(const int64_t idx) const;
    bool is_item_disabled(const int64_t idx) const;
    bool is_item_radio_checkable(const int64_t idx) const;
    bool is_item_separator(const int64_t idx) const;
    bool is_item_shortcut_disabled(const int64_t idx) const;
    void remove_item(const int64_t idx);
    void set_allow_search(const bool allow);
    void set_hide_on_checkable_item_selection(const bool enable);
    void set_hide_on_item_selection(const bool enable);
    void set_hide_on_state_item_selection(const bool enable);
    void set_hide_on_window_lose_focus(const bool enable);
    void set_item_accelerator(const int64_t idx, const int64_t accel);
    void set_item_as_checkable(const int64_t idx, const bool enable);
    void set_item_as_radio_checkable(const int64_t idx, const bool enable);
    void set_item_as_separator(const int64_t idx, const bool enable);
    void set_item_checked(const int64_t idx, const bool checked);
    void set_item_disabled(const int64_t idx, const bool disabled);
    void set_item_icon(const int64_t idx, const Ref<Texture> icon);
    void set_item_id(const int64_t idx, const int64_t id);
    void set_item_metadata(const int64_t idx, const Variant metadata);
    void set_item_multistate(const int64_t idx, const int64_t state);
    void set_item_shortcut(const int64_t idx, const Ref<ShortCut> shortcut, const bool global = false);
    void set_item_shortcut_disabled(const int64_t idx, const bool disabled);
    void set_item_submenu(const int64_t idx, const String submenu);
    void set_item_text(const int64_t idx, const String text);
    void set_item_tooltip(const int64_t idx, const String tooltip);
    void set_submenu_popup_delay(const real_t seconds);
    void toggle_item_checked(const int64_t idx);
    void toggle_item_multistate(const int64_t idx);

    static PopupMenu* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PopupMenu";
    }

    inline static const char* get_rebel_class_name() {
        return "PopupMenu";
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
        rebel_method_bind* mb__get_items;
        rebel_method_bind* mb__gui_input;
        rebel_method_bind* mb__set_items;
        rebel_method_bind* mb__submenu_timeout;
        rebel_method_bind* mb_add_check_item;
        rebel_method_bind* mb_add_check_shortcut;
        rebel_method_bind* mb_add_icon_check_item;
        rebel_method_bind* mb_add_icon_check_shortcut;
        rebel_method_bind* mb_add_icon_item;
        rebel_method_bind* mb_add_icon_radio_check_item;
        rebel_method_bind* mb_add_icon_radio_check_shortcut;
        rebel_method_bind* mb_add_icon_shortcut;
        rebel_method_bind* mb_add_item;
        rebel_method_bind* mb_add_multistate_item;
        rebel_method_bind* mb_add_radio_check_item;
        rebel_method_bind* mb_add_radio_check_shortcut;
        rebel_method_bind* mb_add_separator;
        rebel_method_bind* mb_add_shortcut;
        rebel_method_bind* mb_add_submenu_item;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_get_allow_search;
        rebel_method_bind* mb_get_current_index;
        rebel_method_bind* mb_get_item_accelerator;
        rebel_method_bind* mb_get_item_count;
        rebel_method_bind* mb_get_item_icon;
        rebel_method_bind* mb_get_item_id;
        rebel_method_bind* mb_get_item_index;
        rebel_method_bind* mb_get_item_metadata;
        rebel_method_bind* mb_get_item_shortcut;
        rebel_method_bind* mb_get_item_submenu;
        rebel_method_bind* mb_get_item_text;
        rebel_method_bind* mb_get_item_tooltip;
        rebel_method_bind* mb_get_submenu_popup_delay;
        rebel_method_bind* mb_is_hide_on_checkable_item_selection;
        rebel_method_bind* mb_is_hide_on_item_selection;
        rebel_method_bind* mb_is_hide_on_state_item_selection;
        rebel_method_bind* mb_is_hide_on_window_lose_focus;
        rebel_method_bind* mb_is_item_checkable;
        rebel_method_bind* mb_is_item_checked;
        rebel_method_bind* mb_is_item_disabled;
        rebel_method_bind* mb_is_item_radio_checkable;
        rebel_method_bind* mb_is_item_separator;
        rebel_method_bind* mb_is_item_shortcut_disabled;
        rebel_method_bind* mb_remove_item;
        rebel_method_bind* mb_set_allow_search;
        rebel_method_bind* mb_set_hide_on_checkable_item_selection;
        rebel_method_bind* mb_set_hide_on_item_selection;
        rebel_method_bind* mb_set_hide_on_state_item_selection;
        rebel_method_bind* mb_set_hide_on_window_lose_focus;
        rebel_method_bind* mb_set_item_accelerator;
        rebel_method_bind* mb_set_item_as_checkable;
        rebel_method_bind* mb_set_item_as_radio_checkable;
        rebel_method_bind* mb_set_item_as_separator;
        rebel_method_bind* mb_set_item_checked;
        rebel_method_bind* mb_set_item_disabled;
        rebel_method_bind* mb_set_item_icon;
        rebel_method_bind* mb_set_item_id;
        rebel_method_bind* mb_set_item_metadata;
        rebel_method_bind* mb_set_item_multistate;
        rebel_method_bind* mb_set_item_shortcut;
        rebel_method_bind* mb_set_item_shortcut_disabled;
        rebel_method_bind* mb_set_item_submenu;
        rebel_method_bind* mb_set_item_text;
        rebel_method_bind* mb_set_item_tooltip;
        rebel_method_bind* mb_set_submenu_popup_delay;
        rebel_method_bind* mb_toggle_item_checked;
        rebel_method_bind* mb_toggle_item_multistate;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_POPUPMENU_H
