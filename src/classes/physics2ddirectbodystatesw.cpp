// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/physics2ddirectbodystatesw.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void Physics2DDirectBodyStateSW::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Physics2DDirectBodyStateSW");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Physics2DDirectBodyStateSW::MethodBindings Physics2DDirectBodyStateSW::method_bindings = {};
void* Physics2DDirectBodyStateSW::class_tag = nullptr;
} // namespace Rebel
