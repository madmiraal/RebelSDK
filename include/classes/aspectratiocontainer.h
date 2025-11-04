// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_ASPECTRATIOCONTAINER_H
#define REBEL_ASPECTRATIOCONTAINER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/container.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class AspectRatioContainer : public Container {
public:
    enum AlignMode {
        ALIGN_BEGIN = 0,
        ALIGN_CENTER = 1,
        ALIGN_END = 2,
    };

    enum StretchMode {
        STRETCH_WIDTH_CONTROLS_HEIGHT = 0,
        STRETCH_HEIGHT_CONTROLS_WIDTH = 1,
        STRETCH_FIT = 2,
        STRETCH_COVER = 3,
    };

    AspectRatioContainer::AlignMode get_alignment_horizontal() const;
    AspectRatioContainer::AlignMode get_alignment_vertical() const;
    real_t get_ratio() const;
    AspectRatioContainer::StretchMode get_stretch_mode() const;
    void set_alignment_horizontal(const int64_t alignment_horizontal);
    void set_alignment_vertical(const int64_t alignment_vertical);
    void set_ratio(const real_t ratio);
    void set_stretch_mode(const int64_t stretch_mode);

    static AspectRatioContainer* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "AspectRatioContainer";
    }

    inline static const char* get_rebel_class_name() {
        return "AspectRatioContainer";
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
        rebel_method_bind* mb_get_alignment_horizontal;
        rebel_method_bind* mb_get_alignment_vertical;
        rebel_method_bind* mb_get_ratio;
        rebel_method_bind* mb_get_stretch_mode;
        rebel_method_bind* mb_set_alignment_horizontal;
        rebel_method_bind* mb_set_alignment_vertical;
        rebel_method_bind* mb_set_ratio;
        rebel_method_bind* mb_set_stretch_mode;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_ASPECTRATIOCONTAINER_H
