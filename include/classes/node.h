// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NODE_H
#define REBEL_NODE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class InputEvent;
class InputEventKey;
class MultiplayerAPI;
class SceneTree;
class Viewport;

class Node : public Object {
public:
    enum PauseMode {
        PAUSE_MODE_INHERIT = 0,
        PAUSE_MODE_STOP = 1,
        PAUSE_MODE_PROCESS = 2,
    };

    enum DuplicateFlags {
        DUPLICATE_SIGNALS = 1,
        DUPLICATE_GROUPS = 2,
        DUPLICATE_SCRIPTS = 4,
        DUPLICATE_USE_INSTANCING = 8,
    };

    static const int NOTIFICATION_APP_PAUSED = 1015;
    static const int NOTIFICATION_APP_RESUMED = 1014;
    static const int NOTIFICATION_CRASH = 1012;
    static const int NOTIFICATION_DRAG_BEGIN = 21;
    static const int NOTIFICATION_DRAG_END = 22;
    static const int NOTIFICATION_ENTER_TREE = 10;
    static const int NOTIFICATION_EXIT_TREE = 11;
    static const int NOTIFICATION_INSTANCED = 20;
    static const int NOTIFICATION_INTERNAL_PHYSICS_PROCESS = 26;
    static const int NOTIFICATION_INTERNAL_PROCESS = 25;
    static const int NOTIFICATION_MOVED_IN_PARENT = 12;
    static const int NOTIFICATION_OS_IME_UPDATE = 1013;
    static const int NOTIFICATION_OS_MEMORY_WARNING = 1009;
    static const int NOTIFICATION_PARENTED = 18;
    static const int NOTIFICATION_PATH_CHANGED = 23;
    static const int NOTIFICATION_PAUSED = 14;
    static const int NOTIFICATION_PHYSICS_PROCESS = 16;
    static const int NOTIFICATION_POST_ENTER_TREE = 27;
    static const int NOTIFICATION_PROCESS = 17;
    static const int NOTIFICATION_READY = 13;
    static const int NOTIFICATION_TRANSLATION_CHANGED = 1010;
    static const int NOTIFICATION_UNPARENTED = 19;
    static const int NOTIFICATION_UNPAUSED = 15;
    static const int NOTIFICATION_WM_ABOUT = 1011;
    static const int NOTIFICATION_WM_FOCUS_IN = 1004;
    static const int NOTIFICATION_WM_FOCUS_OUT = 1005;
    static const int NOTIFICATION_WM_GO_BACK_REQUEST = 1007;
    static const int NOTIFICATION_WM_MOUSE_ENTER = 1002;
    static const int NOTIFICATION_WM_MOUSE_EXIT = 1003;
    static const int NOTIFICATION_WM_QUIT_REQUEST = 1006;
    static const int NOTIFICATION_WM_UNFOCUS_REQUEST = 1008;

    void _enter_tree();
    void _exit_tree();
    String _get_configuration_warning();
    String _get_editor_description() const;
    NodePath _get_import_path() const;
    void _input(const Ref<InputEvent> event);
    void _physics_process(const real_t delta);
    void _process(const real_t delta);
    void _ready();
    void _set_editor_description(const String editor_description);
    void _set_import_path(const NodePath import_path);
    void _unhandled_input(const Ref<InputEvent> event);
    void _unhandled_key_input(const Ref<InputEventKey> event);
    void add_child(const Node* node, const bool legible_unique_name = false);
    void add_child_below_node(const Node* node, const Node* child_node, const bool legible_unique_name = false);
    void add_to_group(const String group, const bool persistent = false);
    bool can_process() const;
    Node* duplicate(const int64_t flags = 15) const;
    Node* find_node(const String mask, const bool recursive = true, const bool owned = true) const;
    Node* find_parent(const String mask) const;
    Node* get_child(const int64_t idx) const;
    int64_t get_child_count() const;
    Array get_children() const;
    Ref<MultiplayerAPI> get_custom_multiplayer() const;
    String get_filename() const;
    Array get_groups() const;
    int64_t get_index() const;
    Ref<MultiplayerAPI> get_multiplayer() const;
    String get_name() const;
    int64_t get_network_master() const;
    Node* get_node_internal(const NodePath path) const;
    Array get_node_and_resource(const NodePath path);
    Node* get_node_or_null(const NodePath path) const;
    Node* get_owner() const;
    Node* get_parent() const;
    NodePath get_path() const;
    NodePath get_path_to(const Node* node) const;
    Node::PauseMode get_pause_mode() const;
    real_t get_physics_process_delta_time() const;
    int64_t get_position_in_parent() const;
    real_t get_process_delta_time() const;
    int64_t get_process_priority() const;
    bool get_scene_instance_load_placeholder() const;
    SceneTree* get_tree() const;
    Viewport* get_viewport() const;
    bool has_node(const NodePath path) const;
    bool has_node_and_resource(const NodePath path) const;
    bool is_a_parent_of(const Node* node) const;
    bool is_displayed_folded() const;
    bool is_greater_than(const Node* node) const;
    bool is_in_group(const String group) const;
    bool is_inside_tree() const;
    bool is_network_master() const;
    bool is_physics_processing() const;
    bool is_physics_processing_internal() const;
    bool is_processing() const;
    bool is_processing_input() const;
    bool is_processing_internal() const;
    bool is_processing_unhandled_input() const;
    bool is_processing_unhandled_key_input() const;
    void move_child(const Node* child_node, const int64_t to_position);
    void print_stray_nodes();
    void print_tree();
    void print_tree_pretty();
    void propagate_call(const String method, const Array args = Array(), const bool parent_first = false);
    void propagate_notification(const int64_t what);
    void queue_free();
    void raise();
    void remove_and_skip();
    void remove_child(const Node* node);
    void remove_from_group(const String group);
    void replace_by(const Node* node, const bool keep_data = false);
    void request_ready();
    Variant rpc(const String method, const Array& args = Array());
    void rpc_config(const String method, const int64_t mode);
    Variant rpc_id(const int64_t peer_id, const String method, const Array& args = Array());
    Variant rpc_unreliable(const String method, const Array& args = Array());
    Variant rpc_unreliable_id(const int64_t peer_id, const String method, const Array& args = Array());
    void rset(const String property, const Variant value);
    void rset_config(const String property, const int64_t mode);
    void rset_id(const int64_t peer_id, const String property, const Variant value);
    void rset_unreliable(const String property, const Variant value);
    void rset_unreliable_id(const int64_t peer_id, const String property, const Variant value);
    void set_custom_multiplayer(const Ref<MultiplayerAPI> api);
    void set_display_folded(const bool fold);
    void set_filename(const String filename);
    void set_name(const String name);
    void set_network_master(const int64_t id, const bool recursive = true);
    void set_owner(const Node* owner);
    void set_pause_mode(const int64_t mode);
    void set_physics_process(const bool enable);
    void set_physics_process_internal(const bool enable);
    void set_process(const bool enable);
    void set_process_input(const bool enable);
    void set_process_internal(const bool enable);
    void set_process_priority(const int64_t priority);
    void set_process_unhandled_input(const bool enable);
    void set_process_unhandled_key_input(const bool enable);
    void set_scene_instance_load_placeholder(const bool load_placeholder);
    void update_configuration_warning();

    template <class... Args>
    Variant rpc(const String method, Args... args) {
        return rpc(method, Array::make(args...));
    }

    template <class... Args>
    Variant rpc_id(const int64_t peer_id, const String method, Args... args) {
        return rpc_id(peer_id, method, Array::make(args...));
    }

    template <class... Args>
    Variant rpc_unreliable(const String method, Args... args) {
        return rpc_unreliable(method, Array::make(args...));
    }

    template <class... Args>
    Variant rpc_unreliable_id(const int64_t peer_id, const String method, Args... args) {
        return rpc_unreliable_id(peer_id, method, Array::make(args...));
    }

    template <class T = Node>
    T* get_node(const NodePath path) const {
        return Object::cast_to<T>(get_node_internal(path));
    }

    static Node* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Node";
    }

    inline static const char* get_rebel_class_name() {
        return "Node";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    struct MethodBindings {
        rebel_method_bind* mb__enter_tree;
        rebel_method_bind* mb__exit_tree;
        rebel_method_bind* mb__get_configuration_warning;
        rebel_method_bind* mb__get_editor_description;
        rebel_method_bind* mb__get_import_path;
        rebel_method_bind* mb__input;
        rebel_method_bind* mb__physics_process;
        rebel_method_bind* mb__process;
        rebel_method_bind* mb__ready;
        rebel_method_bind* mb__set_editor_description;
        rebel_method_bind* mb__set_import_path;
        rebel_method_bind* mb__unhandled_input;
        rebel_method_bind* mb__unhandled_key_input;
        rebel_method_bind* mb_add_child;
        rebel_method_bind* mb_add_child_below_node;
        rebel_method_bind* mb_add_to_group;
        rebel_method_bind* mb_can_process;
        rebel_method_bind* mb_duplicate;
        rebel_method_bind* mb_find_node;
        rebel_method_bind* mb_find_parent;
        rebel_method_bind* mb_get_child;
        rebel_method_bind* mb_get_child_count;
        rebel_method_bind* mb_get_children;
        rebel_method_bind* mb_get_custom_multiplayer;
        rebel_method_bind* mb_get_filename;
        rebel_method_bind* mb_get_groups;
        rebel_method_bind* mb_get_index;
        rebel_method_bind* mb_get_multiplayer;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_network_master;
        rebel_method_bind* mb_get_node_internal;
        rebel_method_bind* mb_get_node_and_resource;
        rebel_method_bind* mb_get_node_or_null;
        rebel_method_bind* mb_get_owner;
        rebel_method_bind* mb_get_parent;
        rebel_method_bind* mb_get_path;
        rebel_method_bind* mb_get_path_to;
        rebel_method_bind* mb_get_pause_mode;
        rebel_method_bind* mb_get_physics_process_delta_time;
        rebel_method_bind* mb_get_position_in_parent;
        rebel_method_bind* mb_get_process_delta_time;
        rebel_method_bind* mb_get_process_priority;
        rebel_method_bind* mb_get_scene_instance_load_placeholder;
        rebel_method_bind* mb_get_tree;
        rebel_method_bind* mb_get_viewport;
        rebel_method_bind* mb_has_node;
        rebel_method_bind* mb_has_node_and_resource;
        rebel_method_bind* mb_is_a_parent_of;
        rebel_method_bind* mb_is_displayed_folded;
        rebel_method_bind* mb_is_greater_than;
        rebel_method_bind* mb_is_in_group;
        rebel_method_bind* mb_is_inside_tree;
        rebel_method_bind* mb_is_network_master;
        rebel_method_bind* mb_is_physics_processing;
        rebel_method_bind* mb_is_physics_processing_internal;
        rebel_method_bind* mb_is_processing;
        rebel_method_bind* mb_is_processing_input;
        rebel_method_bind* mb_is_processing_internal;
        rebel_method_bind* mb_is_processing_unhandled_input;
        rebel_method_bind* mb_is_processing_unhandled_key_input;
        rebel_method_bind* mb_move_child;
        rebel_method_bind* mb_print_stray_nodes;
        rebel_method_bind* mb_print_tree;
        rebel_method_bind* mb_print_tree_pretty;
        rebel_method_bind* mb_propagate_call;
        rebel_method_bind* mb_propagate_notification;
        rebel_method_bind* mb_queue_free;
        rebel_method_bind* mb_raise;
        rebel_method_bind* mb_remove_and_skip;
        rebel_method_bind* mb_remove_child;
        rebel_method_bind* mb_remove_from_group;
        rebel_method_bind* mb_replace_by;
        rebel_method_bind* mb_request_ready;
        rebel_method_bind* mb_rpc;
        rebel_method_bind* mb_rpc_config;
        rebel_method_bind* mb_rpc_id;
        rebel_method_bind* mb_rpc_unreliable;
        rebel_method_bind* mb_rpc_unreliable_id;
        rebel_method_bind* mb_rset;
        rebel_method_bind* mb_rset_config;
        rebel_method_bind* mb_rset_id;
        rebel_method_bind* mb_rset_unreliable;
        rebel_method_bind* mb_rset_unreliable_id;
        rebel_method_bind* mb_set_custom_multiplayer;
        rebel_method_bind* mb_set_display_folded;
        rebel_method_bind* mb_set_filename;
        rebel_method_bind* mb_set_name;
        rebel_method_bind* mb_set_network_master;
        rebel_method_bind* mb_set_owner;
        rebel_method_bind* mb_set_pause_mode;
        rebel_method_bind* mb_set_physics_process;
        rebel_method_bind* mb_set_physics_process_internal;
        rebel_method_bind* mb_set_process;
        rebel_method_bind* mb_set_process_input;
        rebel_method_bind* mb_set_process_internal;
        rebel_method_bind* mb_set_process_priority;
        rebel_method_bind* mb_set_process_unhandled_input;
        rebel_method_bind* mb_set_process_unhandled_key_input;
        rebel_method_bind* mb_set_scene_instance_load_placeholder;
        rebel_method_bind* mb_update_configuration_warning;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};

// Specialized template version: avoids cast.
template <>
inline Node* Node::get_node<Node>(const NodePath path) const {
    return get_node_internal(path);
}
} // namespace Rebel

#endif // REBEL_NODE_H
