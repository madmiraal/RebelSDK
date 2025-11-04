// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/optionbutton.h"

#include "classes/icalls.h"
#include "classes/popupmenu.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void OptionButton::_focused(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__focused,
        (const Object*)this,
        arg0
    );
}

Array OptionButton::_get_items() const {
    return rebel_icall_array(
        method_bindings.mb__get_items,
        (const Object*)this
    );
}

void OptionButton::_select_int(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__select_int,
        (const Object*)this,
        arg0
    );
}

void OptionButton::_selected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__selected,
        (const Object*)this,
        arg0
    );
}

void OptionButton::_set_items(const Array arg0) {
    rebel_icall_void_array(
        method_bindings.mb__set_items,
        (const Object*)this,
        arg0
    );
}

void OptionButton::add_icon_item(const Ref<Texture> texture, const String label, const int64_t id) {
    rebel_icall_void_object_string_int(
        method_bindings.mb_add_icon_item,
        (const Object*)this,
        texture.ptr(),
        label,
        id
    );
}

void OptionButton::add_item(const String label, const int64_t id) {
    rebel_icall_void_string_int(
        method_bindings.mb_add_item,
        (const Object*)this,
        label,
        id
    );
}

void OptionButton::add_separator() {
    rebel_icall_void(
        method_bindings.mb_add_separator,
        (const Object*)this
    );
}

void OptionButton::clear() {
    rebel_icall_void(
        method_bindings.mb_clear,
        (const Object*)this
    );
}

int64_t OptionButton::get_item_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_item_count,
        (const Object*)this
    );
}

Ref<Texture> OptionButton::get_item_icon(const int64_t idx) const {
    return Ref<Texture>::create_ref(rebel_icall_object_int(
        method_bindings.mb_get_item_icon,
        (const Object*)this,
        idx
    ));
}

int64_t OptionButton::get_item_id(const int64_t idx) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_item_id,
        (const Object*)this,
        idx
    );
}

int64_t OptionButton::get_item_index(const int64_t id) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_item_index,
        (const Object*)this,
        id
    );
}

Variant OptionButton::get_item_metadata(const int64_t idx) const {
    return rebel_icall_variant_int(
        method_bindings.mb_get_item_metadata,
        (const Object*)this,
        idx
    );
}

String OptionButton::get_item_text(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_item_text,
        (const Object*)this,
        idx
    );
}

PopupMenu* OptionButton::get_popup() const {
    return (PopupMenu*)rebel_icall_object(
        method_bindings.mb_get_popup,
        (const Object*)this
    );
}

int64_t OptionButton::get_selected() const {
    return rebel_icall_int(
        method_bindings.mb_get_selected,
        (const Object*)this
    );
}

int64_t OptionButton::get_selected_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_selected_id,
        (const Object*)this
    );
}

Variant OptionButton::get_selected_metadata() const {
    return rebel_icall_variant(
        method_bindings.mb_get_selected_metadata,
        (const Object*)this
    );
}

bool OptionButton::is_item_disabled(const int64_t idx) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_item_disabled,
        (const Object*)this,
        idx
    );
}

void OptionButton::remove_item(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_remove_item,
        (const Object*)this,
        idx
    );
}

void OptionButton::select(const int64_t idx) {
    rebel_icall_void_int(
        method_bindings.mb_select,
        (const Object*)this,
        idx
    );
}

void OptionButton::set_item_disabled(const int64_t idx, const bool disabled) {
    rebel_icall_void_int_bool(
        method_bindings.mb_set_item_disabled,
        (const Object*)this,
        idx,
        disabled
    );
}

void OptionButton::set_item_icon(const int64_t idx, const Ref<Texture> texture) {
    rebel_icall_void_int_object(
        method_bindings.mb_set_item_icon,
        (const Object*)this,
        idx,
        texture.ptr()
    );
}

void OptionButton::set_item_id(const int64_t idx, const int64_t id) {
    rebel_icall_void_int_int(
        method_bindings.mb_set_item_id,
        (const Object*)this,
        idx,
        id
    );
}

void OptionButton::set_item_metadata(const int64_t idx, const Variant metadata) {
    rebel_icall_void_int_variant(
        method_bindings.mb_set_item_metadata,
        (const Object*)this,
        idx,
        metadata
    );
}

void OptionButton::set_item_text(const int64_t idx, const String text) {
    rebel_icall_void_int_string(
        method_bindings.mb_set_item_text,
        (const Object*)this,
        idx,
        text
    );
}

OptionButton* OptionButton::create() {
    return (OptionButton*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"OptionButton")()
         );
}

void OptionButton::init_method_bindings() {
    method_bindings.mb__focused =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "_focused"
        );
    method_bindings.mb__get_items =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "_get_items"
        );
    method_bindings.mb__select_int =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "_select_int"
        );
    method_bindings.mb__selected =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "_selected"
        );
    method_bindings.mb__set_items =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "_set_items"
        );
    method_bindings.mb_add_icon_item =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "add_icon_item"
        );
    method_bindings.mb_add_item =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "add_item"
        );
    method_bindings.mb_add_separator =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "add_separator"
        );
    method_bindings.mb_clear =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "clear"
        );
    method_bindings.mb_get_item_count =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_item_count"
        );
    method_bindings.mb_get_item_icon =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_item_icon"
        );
    method_bindings.mb_get_item_id =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_item_id"
        );
    method_bindings.mb_get_item_index =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_item_index"
        );
    method_bindings.mb_get_item_metadata =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_item_metadata"
        );
    method_bindings.mb_get_item_text =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_item_text"
        );
    method_bindings.mb_get_popup =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_popup"
        );
    method_bindings.mb_get_selected =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_selected"
        );
    method_bindings.mb_get_selected_id =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_selected_id"
        );
    method_bindings.mb_get_selected_metadata =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "get_selected_metadata"
        );
    method_bindings.mb_is_item_disabled =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "is_item_disabled"
        );
    method_bindings.mb_remove_item =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "remove_item"
        );
    method_bindings.mb_select =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "select"
        );
    method_bindings.mb_set_item_disabled =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "set_item_disabled"
        );
    method_bindings.mb_set_item_icon =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "set_item_icon"
        );
    method_bindings.mb_set_item_id =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "set_item_id"
        );
    method_bindings.mb_set_item_metadata =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "set_item_metadata"
        );
    method_bindings.mb_set_item_text =
        api->rebel_method_bind_get_method(
            "OptionButton",
            "set_item_text"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "OptionButton");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

OptionButton::MethodBindings OptionButton::method_bindings = {};
void* OptionButton::class_tag = nullptr;
} // namespace Rebel
