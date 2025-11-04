// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/scenetree.h"

#include "classes/icalls.h"
#include "classes/multiplayerapi.h"
#include "classes/networkedmultiplayerpeer.h"
#include "classes/node.h"
#include "classes/object.h"
#include "classes/packedscene.h"
#include "classes/scenetreetimer.h"
#include "classes/viewport.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void SceneTree::_change_scene(const Node* arg0) {
    rebel_icall_void_object(
        method_bindings.mb__change_scene,
        (const Object*)this,
        arg0
    );
}

void SceneTree::_connected_to_server() {
    rebel_icall_void(
        method_bindings.mb__connected_to_server,
        (const Object*)this
    );
}

void SceneTree::_connection_failed() {
    rebel_icall_void(
        method_bindings.mb__connection_failed,
        (const Object*)this
    );
}

void SceneTree::_network_peer_connected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__network_peer_connected,
        (const Object*)this,
        arg0
    );
}

void SceneTree::_network_peer_disconnected(const int64_t arg0) {
    rebel_icall_void_int(
        method_bindings.mb__network_peer_disconnected,
        (const Object*)this,
        arg0
    );
}

void SceneTree::_server_disconnected() {
    rebel_icall_void(
        method_bindings.mb__server_disconnected,
        (const Object*)this
    );
}

Variant SceneTree::call_group(const String group, const String method, const Array& args) {
    size_t arg_count = 2 + args.size();
    Variant arg_values[2];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = group;
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[1]);
    arg_values[1] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    var_args[1] = (rebel_variant*) &arg_values[1];
    for (int i = 0; i < args.size(); i++) {
        var_args[2 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_call_group,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    api->rebel_variant_destroy((rebel_variant *) &var_args[1]);
    return result;
}

Variant SceneTree::call_group_flags(const int64_t flags, const String group, const String method, const Array& args) {
    size_t arg_count = 3 + args.size();
    Variant arg_values[3];
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[0]);
    arg_values[0] = flags;
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[1]);
    arg_values[1] = group;
    api->rebel_variant_new_nil((rebel_variant*) &arg_values[2]);
    arg_values[2] = method;

    rebel_variant** var_args =
        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);
    var_args[0] = (rebel_variant*) &arg_values[0];
    var_args[1] = (rebel_variant*) &arg_values[1];
    var_args[2] = (rebel_variant*) &arg_values[2];
    for (int i = 0; i < args.size(); i++) {
        var_args[3 + i] = (rebel_variant*) &((Array&) args)[i];
    }

    Variant result;
    *(rebel_variant*) &result = api->rebel_method_bind_call(
        method_bindings.mb_call_group_flags,
        ((const Object *)this)->owner,
        (const rebel_variant**) var_args,
        arg_count,
        nullptr
    );

    api->rebel_variant_destroy((rebel_variant *) &var_args[0]);
    api->rebel_variant_destroy((rebel_variant *) &var_args[1]);
    api->rebel_variant_destroy((rebel_variant *) &var_args[2]);
    return result;
}

Error SceneTree::change_scene(const String path) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_change_scene,
        (const Object*)this,
        path
    );
}

Error SceneTree::change_scene_to(const Ref<PackedScene> packed_scene) {
    return (Error)rebel_icall_int_object(
        method_bindings.mb_change_scene_to,
        (const Object*)this,
        packed_scene.ptr()
    );
}

Ref<SceneTreeTimer> SceneTree::create_timer(const real_t time_sec, const bool pause_mode_process) {
    return Ref<SceneTreeTimer>::create_ref(rebel_icall_object_float_bool(
        method_bindings.mb_create_timer,
        (const Object*)this,
        time_sec,
        pause_mode_process
    ));
}

Node* SceneTree::get_current_scene() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_current_scene,
        (const Object*)this
    );
}

Node* SceneTree::get_edited_scene_root() const {
    return (Node*)rebel_icall_object(
        method_bindings.mb_get_edited_scene_root,
        (const Object*)this
    );
}

int64_t SceneTree::get_frame() const {
    return rebel_icall_int(
        method_bindings.mb_get_frame,
        (const Object*)this
    );
}

Ref<MultiplayerAPI> SceneTree::get_multiplayer() const {
    return Ref<MultiplayerAPI>::create_ref(rebel_icall_object(
        method_bindings.mb_get_multiplayer,
        (const Object*)this
    ));
}

PoolIntArray SceneTree::get_network_connected_peers() const {
    return rebel_icall_poolintarray(
        method_bindings.mb_get_network_connected_peers,
        (const Object*)this
    );
}

Ref<NetworkedMultiplayerPeer> SceneTree::get_network_peer() const {
    return Ref<NetworkedMultiplayerPeer>::create_ref(rebel_icall_object(
        method_bindings.mb_get_network_peer,
        (const Object*)this
    ));
}

int64_t SceneTree::get_network_unique_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_network_unique_id,
        (const Object*)this
    );
}

int64_t SceneTree::get_node_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_node_count,
        (const Object*)this
    );
}

Array SceneTree::get_nodes_in_group(const String group) {
    return rebel_icall_array_string(
        method_bindings.mb_get_nodes_in_group,
        (const Object*)this,
        group
    );
}

Viewport* SceneTree::get_root() const {
    return (Viewport*)rebel_icall_object(
        method_bindings.mb_get_root,
        (const Object*)this
    );
}

int64_t SceneTree::get_rpc_sender_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_rpc_sender_id,
        (const Object*)this
    );
}

bool SceneTree::has_group(const String name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_group,
        (const Object*)this,
        name
    );
}

bool SceneTree::has_network_peer() const {
    return rebel_icall_bool(
        method_bindings.mb_has_network_peer,
        (const Object*)this
    );
}

bool SceneTree::is_debugging_collisions_hint() const {
    return rebel_icall_bool(
        method_bindings.mb_is_debugging_collisions_hint,
        (const Object*)this
    );
}

bool SceneTree::is_debugging_navigation_hint() const {
    return rebel_icall_bool(
        method_bindings.mb_is_debugging_navigation_hint,
        (const Object*)this
    );
}

bool SceneTree::is_input_handled() {
    return rebel_icall_bool(
        method_bindings.mb_is_input_handled,
        (const Object*)this
    );
}

bool SceneTree::is_multiplayer_poll_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_multiplayer_poll_enabled,
        (const Object*)this
    );
}

bool SceneTree::is_network_server() const {
    return rebel_icall_bool(
        method_bindings.mb_is_network_server,
        (const Object*)this
    );
}

bool SceneTree::is_paused() const {
    return rebel_icall_bool(
        method_bindings.mb_is_paused,
        (const Object*)this
    );
}

bool SceneTree::is_refusing_new_network_connections() const {
    return rebel_icall_bool(
        method_bindings.mb_is_refusing_new_network_connections,
        (const Object*)this
    );
}

bool SceneTree::is_using_font_oversampling() const {
    return rebel_icall_bool(
        method_bindings.mb_is_using_font_oversampling,
        (const Object*)this
    );
}

void SceneTree::notify_group(const String group, const int64_t notification) {
    rebel_icall_void_string_int(
        method_bindings.mb_notify_group,
        (const Object*)this,
        group,
        notification
    );
}

void SceneTree::notify_group_flags(const int64_t call_flags, const String group, const int64_t notification) {
    rebel_icall_void_int_string_int(
        method_bindings.mb_notify_group_flags,
        (const Object*)this,
        call_flags,
        group,
        notification
    );
}

void SceneTree::queue_delete(const Object* obj) {
    rebel_icall_void_object(
        method_bindings.mb_queue_delete,
        (const Object*)this,
        obj
    );
}

void SceneTree::quit(const int64_t exit_code) {
    rebel_icall_void_int(
        method_bindings.mb_quit,
        (const Object*)this,
        exit_code
    );
}

Error SceneTree::reload_current_scene() {
    return (Error)rebel_icall_int(
        method_bindings.mb_reload_current_scene,
        (const Object*)this
    );
}

void SceneTree::set_auto_accept_quit(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_auto_accept_quit,
        (const Object*)this,
        enabled
    );
}

void SceneTree::set_current_scene(const Node* child_node) {
    rebel_icall_void_object(
        method_bindings.mb_set_current_scene,
        (const Object*)this,
        child_node
    );
}

void SceneTree::set_debug_collisions_hint(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_debug_collisions_hint,
        (const Object*)this,
        enable
    );
}

void SceneTree::set_debug_navigation_hint(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_debug_navigation_hint,
        (const Object*)this,
        enable
    );
}

void SceneTree::set_edited_scene_root(const Node* scene) {
    rebel_icall_void_object(
        method_bindings.mb_set_edited_scene_root,
        (const Object*)this,
        scene
    );
}

void SceneTree::set_group(const String group, const String property, const Variant value) {
    rebel_icall_void_string_string_variant(
        method_bindings.mb_set_group,
        (const Object*)this,
        group,
        property,
        value
    );
}

void SceneTree::set_group_flags(const int64_t call_flags, const String group, const String property, const Variant value) {
    rebel_icall_void_int_string_string_variant(
        method_bindings.mb_set_group_flags,
        (const Object*)this,
        call_flags,
        group,
        property,
        value
    );
}

void SceneTree::set_input_as_handled() {
    rebel_icall_void(
        method_bindings.mb_set_input_as_handled,
        (const Object*)this
    );
}

void SceneTree::set_multiplayer(const Ref<MultiplayerAPI> multiplayer) {
    rebel_icall_void_object(
        method_bindings.mb_set_multiplayer,
        (const Object*)this,
        multiplayer.ptr()
    );
}

void SceneTree::set_multiplayer_poll_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_multiplayer_poll_enabled,
        (const Object*)this,
        enabled
    );
}

void SceneTree::set_network_peer(const Ref<NetworkedMultiplayerPeer> peer) {
    rebel_icall_void_object(
        method_bindings.mb_set_network_peer,
        (const Object*)this,
        peer.ptr()
    );
}

void SceneTree::set_pause(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_pause,
        (const Object*)this,
        enable
    );
}

void SceneTree::set_quit_on_go_back(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_quit_on_go_back,
        (const Object*)this,
        enabled
    );
}

void SceneTree::set_refuse_new_network_connections(const bool refuse) {
    rebel_icall_void_bool(
        method_bindings.mb_set_refuse_new_network_connections,
        (const Object*)this,
        refuse
    );
}

void SceneTree::set_screen_stretch(const int64_t mode, const int64_t aspect, const Vector2 minsize, const real_t scale) {
    rebel_icall_void_int_int_vector2_float(
        method_bindings.mb_set_screen_stretch,
        (const Object*)this,
        mode,
        aspect,
        minsize,
        scale
    );
}

void SceneTree::set_use_font_oversampling(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_font_oversampling,
        (const Object*)this,
        enable
    );
}

SceneTree* SceneTree::create() {
    return (SceneTree*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"SceneTree")()
         );
}

void SceneTree::init_method_bindings() {
    method_bindings.mb__change_scene =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "_change_scene"
        );
    method_bindings.mb__connected_to_server =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "_connected_to_server"
        );
    method_bindings.mb__connection_failed =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "_connection_failed"
        );
    method_bindings.mb__network_peer_connected =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "_network_peer_connected"
        );
    method_bindings.mb__network_peer_disconnected =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "_network_peer_disconnected"
        );
    method_bindings.mb__server_disconnected =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "_server_disconnected"
        );
    method_bindings.mb_call_group =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "call_group"
        );
    method_bindings.mb_call_group_flags =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "call_group_flags"
        );
    method_bindings.mb_change_scene =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "change_scene"
        );
    method_bindings.mb_change_scene_to =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "change_scene_to"
        );
    method_bindings.mb_create_timer =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "create_timer"
        );
    method_bindings.mb_get_current_scene =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_current_scene"
        );
    method_bindings.mb_get_edited_scene_root =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_edited_scene_root"
        );
    method_bindings.mb_get_frame =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_frame"
        );
    method_bindings.mb_get_multiplayer =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_multiplayer"
        );
    method_bindings.mb_get_network_connected_peers =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_network_connected_peers"
        );
    method_bindings.mb_get_network_peer =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_network_peer"
        );
    method_bindings.mb_get_network_unique_id =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_network_unique_id"
        );
    method_bindings.mb_get_node_count =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_node_count"
        );
    method_bindings.mb_get_nodes_in_group =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_nodes_in_group"
        );
    method_bindings.mb_get_root =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_root"
        );
    method_bindings.mb_get_rpc_sender_id =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "get_rpc_sender_id"
        );
    method_bindings.mb_has_group =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "has_group"
        );
    method_bindings.mb_has_network_peer =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "has_network_peer"
        );
    method_bindings.mb_is_debugging_collisions_hint =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_debugging_collisions_hint"
        );
    method_bindings.mb_is_debugging_navigation_hint =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_debugging_navigation_hint"
        );
    method_bindings.mb_is_input_handled =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_input_handled"
        );
    method_bindings.mb_is_multiplayer_poll_enabled =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_multiplayer_poll_enabled"
        );
    method_bindings.mb_is_network_server =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_network_server"
        );
    method_bindings.mb_is_paused =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_paused"
        );
    method_bindings.mb_is_refusing_new_network_connections =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_refusing_new_network_connections"
        );
    method_bindings.mb_is_using_font_oversampling =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "is_using_font_oversampling"
        );
    method_bindings.mb_notify_group =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "notify_group"
        );
    method_bindings.mb_notify_group_flags =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "notify_group_flags"
        );
    method_bindings.mb_queue_delete =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "queue_delete"
        );
    method_bindings.mb_quit =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "quit"
        );
    method_bindings.mb_reload_current_scene =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "reload_current_scene"
        );
    method_bindings.mb_set_auto_accept_quit =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_auto_accept_quit"
        );
    method_bindings.mb_set_current_scene =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_current_scene"
        );
    method_bindings.mb_set_debug_collisions_hint =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_debug_collisions_hint"
        );
    method_bindings.mb_set_debug_navigation_hint =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_debug_navigation_hint"
        );
    method_bindings.mb_set_edited_scene_root =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_edited_scene_root"
        );
    method_bindings.mb_set_group =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_group"
        );
    method_bindings.mb_set_group_flags =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_group_flags"
        );
    method_bindings.mb_set_input_as_handled =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_input_as_handled"
        );
    method_bindings.mb_set_multiplayer =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_multiplayer"
        );
    method_bindings.mb_set_multiplayer_poll_enabled =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_multiplayer_poll_enabled"
        );
    method_bindings.mb_set_network_peer =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_network_peer"
        );
    method_bindings.mb_set_pause =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_pause"
        );
    method_bindings.mb_set_quit_on_go_back =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_quit_on_go_back"
        );
    method_bindings.mb_set_refuse_new_network_connections =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_refuse_new_network_connections"
        );
    method_bindings.mb_set_screen_stretch =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_screen_stretch"
        );
    method_bindings.mb_set_use_font_oversampling =
        api->rebel_method_bind_get_method(
            "SceneTree",
            "set_use_font_oversampling"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "SceneTree");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

SceneTree::MethodBindings SceneTree::method_bindings = {};
void* SceneTree::class_tag = nullptr;
} // namespace Rebel
