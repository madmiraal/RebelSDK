// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MOBILEVRINTERFACE_H
#define REBEL_MOBILEVRINTERFACE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/arvrinterface.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class MobileVRInterface : public ARVRInterface {
public:
    real_t get_display_to_lens() const;
    real_t get_display_width() const;
    real_t get_eye_height() const;
    real_t get_iod() const;
    real_t get_k1() const;
    real_t get_k2() const;
    real_t get_oversample() const;
    void set_display_to_lens(const real_t display_to_lens);
    void set_display_width(const real_t display_width);
    void set_eye_height(const real_t eye_height);
    void set_iod(const real_t iod);
    void set_k1(const real_t k);
    void set_k2(const real_t k);
    void set_oversample(const real_t oversample);

    static MobileVRInterface* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "MobileVRInterface";
    }

    inline static const char* get_rebel_class_name() {
        return "MobileVRInterface";
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
        rebel_method_bind* mb_get_display_to_lens;
        rebel_method_bind* mb_get_display_width;
        rebel_method_bind* mb_get_eye_height;
        rebel_method_bind* mb_get_iod;
        rebel_method_bind* mb_get_k1;
        rebel_method_bind* mb_get_k2;
        rebel_method_bind* mb_get_oversample;
        rebel_method_bind* mb_set_display_to_lens;
        rebel_method_bind* mb_set_display_width;
        rebel_method_bind* mb_set_eye_height;
        rebel_method_bind* mb_set_iod;
        rebel_method_bind* mb_set_k1;
        rebel_method_bind* mb_set_k2;
        rebel_method_bind* mb_set_oversample;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_MOBILEVRINTERFACE_H
