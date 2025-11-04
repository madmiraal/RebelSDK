// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CULLINSTANCE_H
#define REBEL_CULLINSTANCE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/spatial.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CullInstance : public Spatial {
public:
    enum PortalMode {
        PORTAL_MODE_STATIC = 0,
        PORTAL_MODE_DYNAMIC = 1,
        PORTAL_MODE_ROAMING = 2,
        PORTAL_MODE_GLOBAL = 3,
        PORTAL_MODE_IGNORE = 4,
    };

    bool get_include_in_bound() const;
    int64_t get_portal_autoplace_priority() const;
    CullInstance::PortalMode get_portal_mode() const;
    void set_include_in_bound(const bool arg0);
    void set_portal_autoplace_priority(const int64_t priority);
    void set_portal_mode(const int64_t mode);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "CullInstance";
    }

    inline static const char* get_rebel_class_name() {
        return "CullInstance";
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
        rebel_method_bind* mb_get_include_in_bound;
        rebel_method_bind* mb_get_portal_autoplace_priority;
        rebel_method_bind* mb_get_portal_mode;
        rebel_method_bind* mb_set_include_in_bound;
        rebel_method_bind* mb_set_portal_autoplace_priority;
        rebel_method_bind* mb_set_portal_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CULLINSTANCE_H
