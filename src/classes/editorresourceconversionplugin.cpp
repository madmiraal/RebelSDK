// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/editorresourceconversionplugin.h"

#include "classes/icalls.h"
#include "classes/resource.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<Resource> EditorResourceConversionPlugin::_convert(const Ref<Resource> resource) {
    return Ref<Resource>::create_ref(rebel_icall_object_object(
        method_bindings.mb__convert,
        (const Object*)this,
        resource.ptr()
    ));
}

String EditorResourceConversionPlugin::_converts_to() {
    return rebel_icall_string(
        method_bindings.mb__converts_to,
        (const Object*)this
    );
}

void EditorResourceConversionPlugin::init_method_bindings() {
    method_bindings.mb__convert =
        api->rebel_method_bind_get_method(
            "EditorResourceConversionPlugin",
            "_convert"
        );
    method_bindings.mb__converts_to =
        api->rebel_method_bind_get_method(
            "EditorResourceConversionPlugin",
            "_converts_to"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "EditorResourceConversionPlugin");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

EditorResourceConversionPlugin::MethodBindings EditorResourceConversionPlugin::method_bindings = {};
void* EditorResourceConversionPlugin::class_tag = nullptr;
} // namespace Rebel
