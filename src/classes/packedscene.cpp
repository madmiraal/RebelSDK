// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/packedscene.h"

#include "classes/icalls.h"
#include "classes/node.h"
#include "classes/scenestate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Dictionary PackedScene::_get_bundled_scene() const {
    return rebel_icall_dictionary(
        method_bindings.mb__get_bundled_scene,
        (const Object*)this
    );
}

void PackedScene::_set_bundled_scene(const Dictionary arg0) {
    rebel_icall_void_dictionary(
        method_bindings.mb__set_bundled_scene,
        (const Object*)this,
        arg0
    );
}

bool PackedScene::can_instance() const {
    return rebel_icall_bool(
        method_bindings.mb_can_instance,
        (const Object*)this
    );
}

Ref<SceneState> PackedScene::get_state() {
    return Ref<SceneState>::create_ref(rebel_icall_object(
        method_bindings.mb_get_state,
        (const Object*)this
    ));
}

Node* PackedScene::instance(const int64_t edit_state) const {
    return (Node*)rebel_icall_object_int(
        method_bindings.mb_instance,
        (const Object*)this,
        edit_state
    );
}

Error PackedScene::pack(const Node* path) {
    return (Error)rebel_icall_int_object(
        method_bindings.mb_pack,
        (const Object*)this,
        path
    );
}

PackedScene* PackedScene::create() {
    return (PackedScene*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"PackedScene")()
         );
}

void PackedScene::init_method_bindings() {
    method_bindings.mb__get_bundled_scene =
        api->rebel_method_bind_get_method(
            "PackedScene",
            "_get_bundled_scene"
        );
    method_bindings.mb__set_bundled_scene =
        api->rebel_method_bind_get_method(
            "PackedScene",
            "_set_bundled_scene"
        );
    method_bindings.mb_can_instance =
        api->rebel_method_bind_get_method(
            "PackedScene",
            "can_instance"
        );
    method_bindings.mb_get_state =
        api->rebel_method_bind_get_method(
            "PackedScene",
            "get_state"
        );
    method_bindings.mb_instance =
        api->rebel_method_bind_get_method(
            "PackedScene",
            "instance"
        );
    method_bindings.mb_pack =
        api->rebel_method_bind_get_method(
            "PackedScene",
            "pack"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "PackedScene");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

PackedScene::MethodBindings PackedScene::method_bindings = {};
void* PackedScene::class_tag = nullptr;
} // namespace Rebel
