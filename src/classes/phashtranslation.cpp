// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/phashtranslation.h"

#include "classes/icalls.h"
#include "classes/translation.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void PHashTranslation::generate(const Ref<Translation> from) {
    rebel_icall_void_object(
        method_bindings.mb_generate,
        (const Object*)this,
        from.ptr()
    );
}

PHashTranslation* PHashTranslation::create() {
    return (PHashTranslation*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PHashTranslation")()
         );
}

void PHashTranslation::init_method_bindings() {
    method_bindings.mb_generate =
        api->rebel_method_bind_get_method(
            "PHashTranslation",
            "generate"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PHashTranslation");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PHashTranslation::MethodBindings PHashTranslation::method_bindings = {};
void* PHashTranslation::class_tag = nullptr;
} // namespace Rebel
