// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/bulletphysicsdirectbodystate.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void BulletPhysicsDirectBodyState::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "BulletPhysicsDirectBodyState");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

BulletPhysicsDirectBodyState::MethodBindings BulletPhysicsDirectBodyState::method_bindings = {};
void* BulletPhysicsDirectBodyState::class_tag = nullptr;
} // namespace Rebel
