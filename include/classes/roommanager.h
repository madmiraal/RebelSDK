// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ROOMMANAGER_H
#define REBEL_ROOMMANAGER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class RoomManager : public Spatial {
public:
    enum PVSMode {
        PVS_MODE_DISABLED = 0,
        PVS_MODE_PARTIAL = 1,
        PVS_MODE_FULL = 2,
    };

    bool get_debug_sprawl() const;
    real_t get_default_portal_margin() const;
    bool get_gameplay_monitor_enabled() const;
    bool get_merge_meshes() const;
    int64_t get_overlap_warning_threshold() const;
    int64_t get_portal_depth_limit() const;
    NodePath get_preview_camera_path() const;
    RoomManager::PVSMode get_pvs_mode() const;
    real_t get_roaming_expansion_margin() const;
    real_t get_room_simplify() const;
    NodePath get_roomlist_path() const;
    bool get_show_margins() const;
    bool get_use_secondary_pvs() const;
    void rooms_clear();
    void rooms_convert();
    bool rooms_get_active() const;
    void rooms_set_active(const bool active);
    void set_debug_sprawl(const bool debug_sprawl);
    void set_default_portal_margin(const real_t default_portal_margin);
    void set_gameplay_monitor_enabled(const bool gameplay_monitor);
    void set_merge_meshes(const bool merge_meshes);
    void set_overlap_warning_threshold(const int64_t overlap_warning_threshold);
    void set_portal_depth_limit(const int64_t portal_depth_limit);
    void set_preview_camera_path(const NodePath preview_camera);
    void set_pvs_mode(const int64_t pvs_mode);
    void set_roaming_expansion_margin(const real_t roaming_expansion_margin);
    void set_room_simplify(const real_t room_simplify);
    void set_roomlist_path(const NodePath p_path);
    void set_show_margins(const bool show_margins);
    void set_use_secondary_pvs(const bool use_secondary_pvs);

    static RoomManager* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RoomManager";
    }

    inline static const char* get_rebel_class_name() {
        return "RoomManager";
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
        rebel_method_bind* mb_get_debug_sprawl;
        rebel_method_bind* mb_get_default_portal_margin;
        rebel_method_bind* mb_get_gameplay_monitor_enabled;
        rebel_method_bind* mb_get_merge_meshes;
        rebel_method_bind* mb_get_overlap_warning_threshold;
        rebel_method_bind* mb_get_portal_depth_limit;
        rebel_method_bind* mb_get_preview_camera_path;
        rebel_method_bind* mb_get_pvs_mode;
        rebel_method_bind* mb_get_roaming_expansion_margin;
        rebel_method_bind* mb_get_room_simplify;
        rebel_method_bind* mb_get_roomlist_path;
        rebel_method_bind* mb_get_show_margins;
        rebel_method_bind* mb_get_use_secondary_pvs;
        rebel_method_bind* mb_rooms_clear;
        rebel_method_bind* mb_rooms_convert;
        rebel_method_bind* mb_rooms_get_active;
        rebel_method_bind* mb_rooms_set_active;
        rebel_method_bind* mb_set_debug_sprawl;
        rebel_method_bind* mb_set_default_portal_margin;
        rebel_method_bind* mb_set_gameplay_monitor_enabled;
        rebel_method_bind* mb_set_merge_meshes;
        rebel_method_bind* mb_set_overlap_warning_threshold;
        rebel_method_bind* mb_set_portal_depth_limit;
        rebel_method_bind* mb_set_preview_camera_path;
        rebel_method_bind* mb_set_pvs_mode;
        rebel_method_bind* mb_set_roaming_expansion_margin;
        rebel_method_bind* mb_set_room_simplify;
        rebel_method_bind* mb_set_roomlist_path;
        rebel_method_bind* mb_set_show_margins;
        rebel_method_bind* mb_set_use_secondary_pvs;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ROOMMANAGER_H
