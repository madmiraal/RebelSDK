// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/proxytexture.h"

#include "classes/icalls.h"
#include "classes/texture.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Texture> ProxyTexture::get_base() const {
    return Ref<Texture>::create_ref(rebel_icall_object(
        method_bindings.mb_get_base,
        (const Object*)this
    ));
}

void ProxyTexture::set_base(const Ref<Texture> base) {
    rebel_icall_void_object(
        method_bindings.mb_set_base,
        (const Object*)this,
        base.ptr()
    );
}

ProxyTexture* ProxyTexture::create() {
    return (ProxyTexture*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"ProxyTexture")()
         );
}

void ProxyTexture::init_method_bindings() {
    method_bindings.mb_get_base =
        api->rebel_method_bind_get_method(
            "ProxyTexture",
            "get_base"
        );
    method_bindings.mb_set_base =
        api->rebel_method_bind_get_method(
            "ProxyTexture",
            "set_base"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "ProxyTexture");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

ProxyTexture::MethodBindings ProxyTexture::method_bindings = {};
void* ProxyTexture::class_tag = nullptr;
} // namespace Rebel
