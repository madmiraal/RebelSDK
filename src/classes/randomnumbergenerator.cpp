// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/randomnumbergenerator.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
int64_t RandomNumberGenerator::get_seed() {
    return rebel_icall_int(
        method_bindings.mb_get_seed,
        (const Object*)this
    );
}

int64_t RandomNumberGenerator::get_state() const {
    return rebel_icall_int(
        method_bindings.mb_get_state,
        (const Object*)this
    );
}

real_t RandomNumberGenerator::randf() {
    return rebel_icall_float(
        method_bindings.mb_randf,
        (const Object*)this
    );
}

real_t RandomNumberGenerator::randf_range(const real_t from, const real_t to) {
    return rebel_icall_float_float_float(
        method_bindings.mb_randf_range,
        (const Object*)this,
        from,
        to
    );
}

real_t RandomNumberGenerator::randfn(const real_t mean, const real_t deviation) {
    return rebel_icall_float_float_float(
        method_bindings.mb_randfn,
        (const Object*)this,
        mean,
        deviation
    );
}

int64_t RandomNumberGenerator::randi() {
    return rebel_icall_int(
        method_bindings.mb_randi,
        (const Object*)this
    );
}

int64_t RandomNumberGenerator::randi_range(const int64_t from, const int64_t to) {
    return rebel_icall_int_int_int(
        method_bindings.mb_randi_range,
        (const Object*)this,
        from,
        to
    );
}

void RandomNumberGenerator::randomize() {
    rebel_icall_void(
        method_bindings.mb_randomize,
        (const Object*)this
    );
}

void RandomNumberGenerator::set_seed(const int64_t seed) {
    rebel_icall_void_int(
        method_bindings.mb_set_seed,
        (const Object*)this,
        seed
    );
}

void RandomNumberGenerator::set_state(const int64_t state) {
    rebel_icall_void_int(
        method_bindings.mb_set_state,
        (const Object*)this,
        state
    );
}

RandomNumberGenerator* RandomNumberGenerator::create() {
    return (RandomNumberGenerator*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"RandomNumberGenerator")()
         );
}

void RandomNumberGenerator::init_method_bindings() {
    method_bindings.mb_get_seed =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "get_seed"
        );
    method_bindings.mb_get_state =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "get_state"
        );
    method_bindings.mb_randf =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "randf"
        );
    method_bindings.mb_randf_range =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "randf_range"
        );
    method_bindings.mb_randfn =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "randfn"
        );
    method_bindings.mb_randi =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "randi"
        );
    method_bindings.mb_randi_range =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "randi_range"
        );
    method_bindings.mb_randomize =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "randomize"
        );
    method_bindings.mb_set_seed =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "set_seed"
        );
    method_bindings.mb_set_state =
        api->rebel_method_bind_get_method(
            "RandomNumberGenerator",
            "set_state"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "RandomNumberGenerator");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

RandomNumberGenerator::MethodBindings RandomNumberGenerator::method_bindings = {};
void* RandomNumberGenerator::class_tag = nullptr;
} // namespace Rebel
