// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_OPTIONBUTTON_H
#define REBEL_OPTIONBUTTON_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/button.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class PopupMenu;
class Texture;

class OptionButton : public Button {
public:
    void _focused(const int64_t arg0);
    Array _get_items() const;
    void _select_int(const int64_t arg0);
    void _selected(const int64_t arg0);
    void _set_items(const Array arg0);
    void add_icon_item(const Ref<Texture> texture, const String label, const int64_t id = -1);
    void add_item(const String label, const int64_t id = -1);
    void add_separator();
    void clear();
    int64_t get_item_count() const;
    Ref<Texture> get_item_icon(const int64_t idx) const;
    int64_t get_item_id(const int64_t idx) const;
    int64_t get_item_index(const int64_t id) const;
    Variant get_item_metadata(const int64_t idx) const;
    String get_item_text(const int64_t idx) const;
    PopupMenu* get_popup() const;
    int64_t get_selected() const;
    int64_t get_selected_id() const;
    Variant get_selected_metadata() const;
    bool is_item_disabled(const int64_t idx) const;
    void remove_item(const int64_t idx);
    void select(const int64_t idx);
    void set_item_disabled(const int64_t idx, const bool disabled);
    void set_item_icon(const int64_t idx, const Ref<Texture> texture);
    void set_item_id(const int64_t idx, const int64_t id);
    void set_item_metadata(const int64_t idx, const Variant metadata);
    void set_item_text(const int64_t idx, const String text);

    static OptionButton* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "OptionButton";
    }

    inline static const char* get_rebel_class_name() {
        return "OptionButton";
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
        rebel_method_bind* mb__focused;
        rebel_method_bind* mb__get_items;
        rebel_method_bind* mb__select_int;
        rebel_method_bind* mb__selected;
        rebel_method_bind* mb__set_items;
        rebel_method_bind* mb_add_icon_item;
        rebel_method_bind* mb_add_item;
        rebel_method_bind* mb_add_separator;
        rebel_method_bind* mb_clear;
        rebel_method_bind* mb_get_item_count;
        rebel_method_bind* mb_get_item_icon;
        rebel_method_bind* mb_get_item_id;
        rebel_method_bind* mb_get_item_index;
        rebel_method_bind* mb_get_item_metadata;
        rebel_method_bind* mb_get_item_text;
        rebel_method_bind* mb_get_popup;
        rebel_method_bind* mb_get_selected;
        rebel_method_bind* mb_get_selected_id;
        rebel_method_bind* mb_get_selected_metadata;
        rebel_method_bind* mb_is_item_disabled;
        rebel_method_bind* mb_remove_item;
        rebel_method_bind* mb_select;
        rebel_method_bind* mb_set_item_disabled;
        rebel_method_bind* mb_set_item_icon;
        rebel_method_bind* mb_set_item_id;
        rebel_method_bind* mb_set_item_metadata;
        rebel_method_bind* mb_set_item_text;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_OPTIONBUTTON_H
