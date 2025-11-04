// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/richtexteffect.h"

#include "classes/charfxtransform.h"
#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool RichTextEffect::_process_custom_fx(const Ref<CharFXTransform> char_fx) {
    return rebel_icall_bool_object(
        method_bindings.mb__process_custom_fx,
        (const Object*)this,
        char_fx.ptr()
    );
}

RichTextEffect* RichTextEffect::create() {
    return (RichTextEffect*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RichTextEffect")()
         );
}

void RichTextEffect::init_method_bindings() {
    method_bindings.mb__process_custom_fx =
        api->rebel_method_bind_get_method(
            "RichTextEffect",
            "_process_custom_fx"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RichTextEffect");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RichTextEffect::MethodBindings RichTextEffect::method_bindings = {};
void* RichTextEffect::class_tag = nullptr;
} // namespace Rebel
