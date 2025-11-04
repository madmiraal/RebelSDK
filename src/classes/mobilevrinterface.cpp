// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/mobilevrinterface.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
real_t MobileVRInterface::get_display_to_lens() const {
    return rebel_icall_float(
        method_bindings.mb_get_display_to_lens,
        (const Object*)this
    );
}

real_t MobileVRInterface::get_display_width() const {
    return rebel_icall_float(
        method_bindings.mb_get_display_width,
        (const Object*)this
    );
}

real_t MobileVRInterface::get_eye_height() const {
    return rebel_icall_float(
        method_bindings.mb_get_eye_height,
        (const Object*)this
    );
}

real_t MobileVRInterface::get_iod() const {
    return rebel_icall_float(
        method_bindings.mb_get_iod,
        (const Object*)this
    );
}

real_t MobileVRInterface::get_k1() const {
    return rebel_icall_float(
        method_bindings.mb_get_k1,
        (const Object*)this
    );
}

real_t MobileVRInterface::get_k2() const {
    return rebel_icall_float(
        method_bindings.mb_get_k2,
        (const Object*)this
    );
}

real_t MobileVRInterface::get_oversample() const {
    return rebel_icall_float(
        method_bindings.mb_get_oversample,
        (const Object*)this
    );
}

void MobileVRInterface::set_display_to_lens(const real_t display_to_lens) {
    rebel_icall_void_float(
        method_bindings.mb_set_display_to_lens,
        (const Object*)this,
        display_to_lens
    );
}

void MobileVRInterface::set_display_width(const real_t display_width) {
    rebel_icall_void_float(
        method_bindings.mb_set_display_width,
        (const Object*)this,
        display_width
    );
}

void MobileVRInterface::set_eye_height(const real_t eye_height) {
    rebel_icall_void_float(
        method_bindings.mb_set_eye_height,
        (const Object*)this,
        eye_height
    );
}

void MobileVRInterface::set_iod(const real_t iod) {
    rebel_icall_void_float(
        method_bindings.mb_set_iod,
        (const Object*)this,
        iod
    );
}

void MobileVRInterface::set_k1(const real_t k) {
    rebel_icall_void_float(
        method_bindings.mb_set_k1,
        (const Object*)this,
        k
    );
}

void MobileVRInterface::set_k2(const real_t k) {
    rebel_icall_void_float(
        method_bindings.mb_set_k2,
        (const Object*)this,
        k
    );
}

void MobileVRInterface::set_oversample(const real_t oversample) {
    rebel_icall_void_float(
        method_bindings.mb_set_oversample,
        (const Object*)this,
        oversample
    );
}

MobileVRInterface* MobileVRInterface::create() {
    return (MobileVRInterface*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"MobileVRInterface")()
         );
}

void MobileVRInterface::init_method_bindings() {
    method_bindings.mb_get_display_to_lens =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "get_display_to_lens"
        );
    method_bindings.mb_get_display_width =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "get_display_width"
        );
    method_bindings.mb_get_eye_height =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "get_eye_height"
        );
    method_bindings.mb_get_iod =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "get_iod"
        );
    method_bindings.mb_get_k1 =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "get_k1"
        );
    method_bindings.mb_get_k2 =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "get_k2"
        );
    method_bindings.mb_get_oversample =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "get_oversample"
        );
    method_bindings.mb_set_display_to_lens =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "set_display_to_lens"
        );
    method_bindings.mb_set_display_width =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "set_display_width"
        );
    method_bindings.mb_set_eye_height =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "set_eye_height"
        );
    method_bindings.mb_set_iod =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "set_iod"
        );
    method_bindings.mb_set_k1 =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "set_k1"
        );
    method_bindings.mb_set_k2 =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "set_k2"
        );
    method_bindings.mb_set_oversample =
        api->rebel_method_bind_get_method(
            "MobileVRInterface",
            "set_oversample"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "MobileVRInterface");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

MobileVRInterface::MethodBindings MobileVRInterface::method_bindings = {};
void* MobileVRInterface::class_tag = nullptr;
} // namespace Rebel
