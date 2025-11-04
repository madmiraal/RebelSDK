// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/navigationpolygoninstance.h"

#include "classes/icalls.h"
#include "classes/navigationpolygon.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void NavigationPolygonInstance::_navpoly_changed() {
    rebel_icall_void(
        method_bindings.mb__navpoly_changed,
        (const Object*)this
    );
}

Ref<NavigationPolygon> NavigationPolygonInstance::get_navigation_polygon() const {
    return Ref<NavigationPolygon>::create_ref(rebel_icall_object(
        method_bindings.mb_get_navigation_polygon,
        (const Object*)this
    ));
}

bool NavigationPolygonInstance::is_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_enabled,
        (const Object*)this
    );
}

void NavigationPolygonInstance::set_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_enabled,
        (const Object*)this,
        enabled
    );
}

void NavigationPolygonInstance::set_navigation_polygon(const Ref<NavigationPolygon> navpoly) {
    rebel_icall_void_object(
        method_bindings.mb_set_navigation_polygon,
        (const Object*)this,
        navpoly.ptr()
    );
}

NavigationPolygonInstance* NavigationPolygonInstance::create() {
    return (NavigationPolygonInstance*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"NavigationPolygonInstance")()
         );
}

void NavigationPolygonInstance::init_method_bindings() {
    method_bindings.mb__navpoly_changed =
        api->rebel_method_bind_get_method(
            "NavigationPolygonInstance",
            "_navpoly_changed"
        );
    method_bindings.mb_get_navigation_polygon =
        api->rebel_method_bind_get_method(
            "NavigationPolygonInstance",
            "get_navigation_polygon"
        );
    method_bindings.mb_is_enabled =
        api->rebel_method_bind_get_method(
            "NavigationPolygonInstance",
            "is_enabled"
        );
    method_bindings.mb_set_enabled =
        api->rebel_method_bind_get_method(
            "NavigationPolygonInstance",
            "set_enabled"
        );
    method_bindings.mb_set_navigation_polygon =
        api->rebel_method_bind_get_method(
            "NavigationPolygonInstance",
            "set_navigation_polygon"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "NavigationPolygonInstance");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

NavigationPolygonInstance::MethodBindings NavigationPolygonInstance::method_bindings = {};
void* NavigationPolygonInstance::class_tag = nullptr;
} // namespace Rebel
