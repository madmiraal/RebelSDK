// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GIPROBE_H
#define REBEL_GIPROBE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/visualinstance.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GIProbeData;
class Node;

class GIProbe : public VisualInstance {
public:
    enum Subdiv {
        SUBDIV_64 = 0,
        SUBDIV_128 = 1,
        SUBDIV_256 = 2,
        SUBDIV_512 = 3,
        SUBDIV_MAX = 4,
    };

    void bake(const Node* from_node = nullptr, const bool create_visual_debug = false);
    void debug_bake();
    real_t get_bias() const;
    int64_t get_dynamic_range() const;
    real_t get_energy() const;
    Vector3 get_extents() const;
    real_t get_normal_bias() const;
    Ref<GIProbeData> get_probe_data() const;
    real_t get_propagation() const;
    GIProbe::Subdiv get_subdiv() const;
    bool is_compressed() const;
    bool is_interior() const;
    void set_bias(const real_t max);
    void set_compress(const bool enable);
    void set_dynamic_range(const int64_t max);
    void set_energy(const real_t max);
    void set_extents(const Vector3 extents);
    void set_interior(const bool enable);
    void set_normal_bias(const real_t max);
    void set_probe_data(const Ref<GIProbeData> data);
    void set_propagation(const real_t max);
    void set_subdiv(const int64_t subdiv);

    static GIProbe* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GIProbe";
    }

    inline static const char* get_rebel_class_name() {
        return "GIProbe";
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
        rebel_method_bind* mb_bake;
        rebel_method_bind* mb_debug_bake;
        rebel_method_bind* mb_get_bias;
        rebel_method_bind* mb_get_dynamic_range;
        rebel_method_bind* mb_get_energy;
        rebel_method_bind* mb_get_extents;
        rebel_method_bind* mb_get_normal_bias;
        rebel_method_bind* mb_get_probe_data;
        rebel_method_bind* mb_get_propagation;
        rebel_method_bind* mb_get_subdiv;
        rebel_method_bind* mb_is_compressed;
        rebel_method_bind* mb_is_interior;
        rebel_method_bind* mb_set_bias;
        rebel_method_bind* mb_set_compress;
        rebel_method_bind* mb_set_dynamic_range;
        rebel_method_bind* mb_set_energy;
        rebel_method_bind* mb_set_extents;
        rebel_method_bind* mb_set_interior;
        rebel_method_bind* mb_set_normal_bias;
        rebel_method_bind* mb_set_probe_data;
        rebel_method_bind* mb_set_propagation;
        rebel_method_bind* mb_set_subdiv;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GIPROBE_H
