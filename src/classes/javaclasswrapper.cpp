// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/javaclasswrapper.h"

#include "classes/icalls.h"
#include "classes/javaclass.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<JavaClass> JavaClassWrapper::wrap(const String name) {
    return Ref<JavaClass>::create_ref(rebel_icall_object_string(
        method_bindings.mb_wrap,
        (const Object*)this,
        name
    ));
}

JavaClassWrapper* JavaClassWrapper::singleton = nullptr;

JavaClassWrapper::JavaClassWrapper() {
    owner = api->rebel_global_get_singleton((char*) "JavaClassWrapper");
}

void JavaClassWrapper::init_method_bindings() {
    method_bindings.mb_wrap =
        api->rebel_method_bind_get_method(
            "JavaClassWrapper",
            "wrap"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "JavaClassWrapper");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

JavaClassWrapper::MethodBindings JavaClassWrapper::method_bindings = {};
void* JavaClassWrapper::class_tag = nullptr;
} // namespace Rebel
