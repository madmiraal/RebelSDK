// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_SCENETREE_H
#define REBEL_SCENETREE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/mainloop.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class MultiplayerAPI;
class NetworkedMultiplayerPeer;
class Node;
class Object;
class PackedScene;
class SceneTreeTimer;
class Viewport;

class SceneTree : public MainLoop {
public:
    enum StretchAspect {
        STRETCH_ASPECT_IGNORE = 0,
        STRETCH_ASPECT_KEEP = 1,
        STRETCH_ASPECT_KEEP_WIDTH = 2,
        STRETCH_ASPECT_KEEP_HEIGHT = 3,
        STRETCH_ASPECT_EXPAND = 4,
    };

    enum GroupCallFlags {
        GROUP_CALL_DEFAULT = 0,
        GROUP_CALL_REVERSE = 1,
        GROUP_CALL_REALTIME = 2,
        GROUP_CALL_UNIQUE = 4,
    };

    enum StretchMode {
        STRETCH_MODE_DISABLED = 0,
        STRETCH_MODE_2D = 1,
        STRETCH_MODE_VIEWPORT = 2,
    };

    void _change_scene(const Node* arg0);
    void _connected_to_server();
    void _connection_failed();
    void _network_peer_connected(const int64_t arg0);
    void _network_peer_disconnected(const int64_t arg0);
    void _server_disconnected();
    Variant call_group(const String group, const String method, const Array& args = Array());
    Variant call_group_flags(const int64_t flags, const String group, const String method, const Array& args = Array());
    Error change_scene(const String path);
    Error change_scene_to(const Ref<PackedScene> packed_scene);
    Ref<SceneTreeTimer> create_timer(const real_t time_sec, const bool pause_mode_process = true);
    Node* get_current_scene() const;
    Node* get_edited_scene_root() const;
    int64_t get_frame() const;
    Ref<MultiplayerAPI> get_multiplayer() const;
    PoolIntArray get_network_connected_peers() const;
    Ref<NetworkedMultiplayerPeer> get_network_peer() const;
    int64_t get_network_unique_id() const;
    int64_t get_node_count() const;
    Array get_nodes_in_group(const String group);
    Viewport* get_root() const;
    int64_t get_rpc_sender_id() const;
    bool has_group(const String name) const;
    bool has_network_peer() const;
    bool is_debugging_collisions_hint() const;
    bool is_debugging_navigation_hint() const;
    bool is_input_handled();
    bool is_multiplayer_poll_enabled() const;
    bool is_network_server() const;
    bool is_paused() const;
    bool is_refusing_new_network_connections() const;
    bool is_using_font_oversampling() const;
    void notify_group(const String group, const int64_t notification);
    void notify_group_flags(const int64_t call_flags, const String group, const int64_t notification);
    void queue_delete(const Object* obj);
    void quit(const int64_t exit_code = -1);
    Error reload_current_scene();
    void set_auto_accept_quit(const bool enabled);
    void set_current_scene(const Node* child_node);
    void set_debug_collisions_hint(const bool enable);
    void set_debug_navigation_hint(const bool enable);
    void set_edited_scene_root(const Node* scene);
    void set_group(const String group, const String property, const Variant value);
    void set_group_flags(const int64_t call_flags, const String group, const String property, const Variant value);
    void set_input_as_handled();
    void set_multiplayer(const Ref<MultiplayerAPI> multiplayer);
    void set_multiplayer_poll_enabled(const bool enabled);
    void set_network_peer(const Ref<NetworkedMultiplayerPeer> peer);
    void set_pause(const bool enable);
    void set_quit_on_go_back(const bool enabled);
    void set_refuse_new_network_connections(const bool refuse);
    void set_screen_stretch(const int64_t mode, const int64_t aspect, const Vector2 minsize, const real_t scale = 1);
    void set_use_font_oversampling(const bool enable);

    template <class... Args>
    Variant call_group(const String group, const String method, Args... args) {
        return call_group(group, method, Array::make(args...));
    }

    template <class... Args>
    Variant call_group_flags(const int64_t flags, const String group, const String method, Args... args) {
        return call_group_flags(flags, group, method, Array::make(args...));
    }

    static SceneTree* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "SceneTree";
    }

    inline static const char* get_rebel_class_name() {
        return "SceneTree";
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
        rebel_method_bind* mb__change_scene;
        rebel_method_bind* mb__connected_to_server;
        rebel_method_bind* mb__connection_failed;
        rebel_method_bind* mb__network_peer_connected;
        rebel_method_bind* mb__network_peer_disconnected;
        rebel_method_bind* mb__server_disconnected;
        rebel_method_bind* mb_call_group;
        rebel_method_bind* mb_call_group_flags;
        rebel_method_bind* mb_change_scene;
        rebel_method_bind* mb_change_scene_to;
        rebel_method_bind* mb_create_timer;
        rebel_method_bind* mb_get_current_scene;
        rebel_method_bind* mb_get_edited_scene_root;
        rebel_method_bind* mb_get_frame;
        rebel_method_bind* mb_get_multiplayer;
        rebel_method_bind* mb_get_network_connected_peers;
        rebel_method_bind* mb_get_network_peer;
        rebel_method_bind* mb_get_network_unique_id;
        rebel_method_bind* mb_get_node_count;
        rebel_method_bind* mb_get_nodes_in_group;
        rebel_method_bind* mb_get_root;
        rebel_method_bind* mb_get_rpc_sender_id;
        rebel_method_bind* mb_has_group;
        rebel_method_bind* mb_has_network_peer;
        rebel_method_bind* mb_is_debugging_collisions_hint;
        rebel_method_bind* mb_is_debugging_navigation_hint;
        rebel_method_bind* mb_is_input_handled;
        rebel_method_bind* mb_is_multiplayer_poll_enabled;
        rebel_method_bind* mb_is_network_server;
        rebel_method_bind* mb_is_paused;
        rebel_method_bind* mb_is_refusing_new_network_connections;
        rebel_method_bind* mb_is_using_font_oversampling;
        rebel_method_bind* mb_notify_group;
        rebel_method_bind* mb_notify_group_flags;
        rebel_method_bind* mb_queue_delete;
        rebel_method_bind* mb_quit;
        rebel_method_bind* mb_reload_current_scene;
        rebel_method_bind* mb_set_auto_accept_quit;
        rebel_method_bind* mb_set_current_scene;
        rebel_method_bind* mb_set_debug_collisions_hint;
        rebel_method_bind* mb_set_debug_navigation_hint;
        rebel_method_bind* mb_set_edited_scene_root;
        rebel_method_bind* mb_set_group;
        rebel_method_bind* mb_set_group_flags;
        rebel_method_bind* mb_set_input_as_handled;
        rebel_method_bind* mb_set_multiplayer;
        rebel_method_bind* mb_set_multiplayer_poll_enabled;
        rebel_method_bind* mb_set_network_peer;
        rebel_method_bind* mb_set_pause;
        rebel_method_bind* mb_set_quit_on_go_back;
        rebel_method_bind* mb_set_refuse_new_network_connections;
        rebel_method_bind* mb_set_screen_stretch;
        rebel_method_bind* mb_set_use_font_oversampling;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_SCENETREE_H
