// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_DYNAMICFONTDATA_H
#define REBEL_DYNAMICFONTDATA_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class DynamicFontData : public Resource {
public:
    enum Hinting {
        HINTING_NONE = 0,
        HINTING_LIGHT = 1,
        HINTING_NORMAL = 2,
    };

    String get_font_path() const;
    DynamicFontData::Hinting get_hinting() const;
    bool is_antialiased() const;
    void set_antialiased(const bool antialiased);
    void set_font_path(const String path);
    void set_hinting(const int64_t mode);

    static DynamicFontData* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "DynamicFontData";
    }

    inline static const char* get_rebel_class_name() {
        return "DynamicFontData";
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
        rebel_method_bind* mb_get_font_path;
        rebel_method_bind* mb_get_hinting;
        rebel_method_bind* mb_is_antialiased;
        rebel_method_bind* mb_set_antialiased;
        rebel_method_bind* mb_set_font_path;
        rebel_method_bind* mb_set_hinting;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_DYNAMICFONTDATA_H
