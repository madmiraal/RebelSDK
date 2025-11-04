// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_RANDOMNUMBERGENERATOR_H
#define REBEL_RANDOMNUMBERGENERATOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class RandomNumberGenerator : public Reference {
public:
    int64_t get_seed();
    int64_t get_state() const;
    real_t randf();
    real_t randf_range(const real_t from, const real_t to);
    real_t randfn(const real_t mean = 0, const real_t deviation = 1);
    int64_t randi();
    int64_t randi_range(const int64_t from, const int64_t to);
    void randomize();
    void set_seed(const int64_t seed);
    void set_state(const int64_t state);

    static RandomNumberGenerator* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "RandomNumberGenerator";
    }

    inline static const char* get_rebel_class_name() {
        return "RandomNumberGenerator";
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
        rebel_method_bind* mb_get_seed;
        rebel_method_bind* mb_get_state;
        rebel_method_bind* mb_randf;
        rebel_method_bind* mb_randf_range;
        rebel_method_bind* mb_randfn;
        rebel_method_bind* mb_randi;
        rebel_method_bind* mb_randi_range;
        rebel_method_bind* mb_randomize;
        rebel_method_bind* mb_set_seed;
        rebel_method_bind* mb_set_state;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_RANDOMNUMBERGENERATOR_H
