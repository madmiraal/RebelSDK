// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/nativescript.h"

#include "classes/gdnativelibrary.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
String NativeScript::get_class_documentation() const {
    return rebel_icall_string(
        method_bindings.mb_get_class_documentation,
        (const Object*)this
    );
}

String NativeScript::get_class_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_class_name,
        (const Object*)this
    );
}

Ref<GDNativeLibrary> NativeScript::get_library() const {
    return Ref<GDNativeLibrary>::create_ref(rebel_icall_object(
        method_bindings.mb_get_library,
        (const Object*)this
    ));
}

String NativeScript::get_method_documentation(const String method) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_method_documentation,
        (const Object*)this,
        method
    );
}

String NativeScript::get_property_documentation(const String path) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_property_documentation,
        (const Object*)this,
        path
    );
}

String NativeScript::get_script_class_icon_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_script_class_icon_path,
        (const Object*)this
    );
}

String NativeScript::get_script_class_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_script_class_name,
        (const Object*)this
    );
}

String NativeScript::get_signal_documentation(const String signal_name) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_signal_documentation,
        (const Object*)this,
        signal_name
    );
}

Variant NativeScript::new_(const Array& args) {
    size_t arg_count = args.size();

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    for (int i = 0; i < args.size(); i++) {
        var_args[i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_new,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );
    return result;
}

void NativeScript::set_class_name(const String class_name) {
    rebel_icall_void_string(
        method_bindings.mb_set_class_name,
        (const Object*)this,
        class_name
    );
}

void NativeScript::set_library(const Ref<GDNativeLibrary> library) {
    rebel_icall_void_object(
        method_bindings.mb_set_library,
        (const Object*)this,
        library.ptr()
    );
}

void NativeScript::set_script_class_icon_path(const String icon_path) {
    rebel_icall_void_string(
        method_bindings.mb_set_script_class_icon_path,
        (const Object*)this,
        icon_path
    );
}

void NativeScript::set_script_class_name(const String class_name) {
    rebel_icall_void_string(
        method_bindings.mb_set_script_class_name,
        (const Object*)this,
        class_name
    );
}

NativeScript* NativeScript::create() {
    return (NativeScript*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NativeScript")()
         );
}

void NativeScript::init_method_bindings() {
    method_bindings.mb_get_class_documentation =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_class_documentation"
        );
    method_bindings.mb_get_class_name =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_class_name"
        );
    method_bindings.mb_get_library =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_library"
        );
    method_bindings.mb_get_method_documentation =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_method_documentation"
        );
    method_bindings.mb_get_property_documentation =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_property_documentation"
        );
    method_bindings.mb_get_script_class_icon_path =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_script_class_icon_path"
        );
    method_bindings.mb_get_script_class_name =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_script_class_name"
        );
    method_bindings.mb_get_signal_documentation =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "get_signal_documentation"
        );
    method_bindings.mb_new =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "new"
        );
    method_bindings.mb_set_class_name =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "set_class_name"
        );
    method_bindings.mb_set_library =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "set_library"
        );
    method_bindings.mb_set_script_class_icon_path =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "set_script_class_icon_path"
        );
    method_bindings.mb_set_script_class_name =
        api->rebel_method_bind_get_method(
            "NativeScript",
            "set_script_class_name"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NativeScript");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NativeScript::MethodBindings NativeScript::method_bindings = {};
void* NativeScript::class_tag = nullptr;
} // namespace Rebel
