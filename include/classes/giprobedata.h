// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_GIPROBEDATA_H
#define REBEL_GIPROBEDATA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GIProbeData : public Resource {
public:
    real_t get_bias() const;
    AABB get_bounds() const;
    real_t get_cell_size() const;
    PoolIntArray get_dynamic_data() const;
    int64_t get_dynamic_range() const;
    real_t get_energy() const;
    real_t get_normal_bias() const;
    real_t get_propagation() const;
    Transform get_to_cell_xform() const;
    bool is_compressed() const;
    bool is_interior() const;
    void set_bias(const real_t bias);
    void set_bounds(const AABB bounds);
    void set_cell_size(const real_t cell_size);
    void set_compress(const bool compress);
    void set_dynamic_data(const PoolIntArray dynamic_data);
    void set_dynamic_range(const int64_t dynamic_range);
    void set_energy(const real_t energy);
    void set_interior(const bool interior);
    void set_normal_bias(const real_t bias);
    void set_propagation(const real_t propagation);
    void set_to_cell_xform(const Transform to_cell_xform);

    static GIProbeData* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "GIProbeData";
    }

    inline static const char* get_rebel_class_name() {
        return "GIProbeData";
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
        rebel_method_bind* mb_get_bias;
        rebel_method_bind* mb_get_bounds;
        rebel_method_bind* mb_get_cell_size;
        rebel_method_bind* mb_get_dynamic_data;
        rebel_method_bind* mb_get_dynamic_range;
        rebel_method_bind* mb_get_energy;
        rebel_method_bind* mb_get_normal_bias;
        rebel_method_bind* mb_get_propagation;
        rebel_method_bind* mb_get_to_cell_xform;
        rebel_method_bind* mb_is_compressed;
        rebel_method_bind* mb_is_interior;
        rebel_method_bind* mb_set_bias;
        rebel_method_bind* mb_set_bounds;
        rebel_method_bind* mb_set_cell_size;
        rebel_method_bind* mb_set_compress;
        rebel_method_bind* mb_set_dynamic_data;
        rebel_method_bind* mb_set_dynamic_range;
        rebel_method_bind* mb_set_energy;
        rebel_method_bind* mb_set_interior;
        rebel_method_bind* mb_set_normal_bias;
        rebel_method_bind* mb_set_propagation;
        rebel_method_bind* mb_set_to_cell_xform;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_GIPROBEDATA_H
