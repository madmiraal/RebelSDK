// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_NATIVESCRIPT_H
#define REBEL_NATIVESCRIPT_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/script.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class GDNativeLibrary;

class NativeScript : public Script {
public:
    String get_class_documentation() const;
    String get_class_name() const;
    Ref<GDNativeLibrary> get_library() const;
    String get_method_documentation(const String method) const;
    String get_property_documentation(const String path) const;
    String get_script_class_icon_path() const;
    String get_script_class_name() const;
    String get_signal_documentation(const String signal_name) const;
    Variant new_(const Array& args = Array());
    void set_class_name(const String class_name);
    void set_library(const Ref<GDNativeLibrary> library);
    void set_script_class_icon_path(const String icon_path);
    void set_script_class_name(const String class_name);

    template <class... Args>
    Variant new_(Args... args) {
        return new_(Array::make(args...));
    }

    static NativeScript* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "NativeScript";
    }

    inline static const char* get_rebel_class_name() {
        return "NativeScript";
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
        rebel_method_bind* mb_get_class_documentation;
        rebel_method_bind* mb_get_class_name;
        rebel_method_bind* mb_get_library;
        rebel_method_bind* mb_get_method_documentation;
        rebel_method_bind* mb_get_property_documentation;
        rebel_method_bind* mb_get_script_class_icon_path;
        rebel_method_bind* mb_get_script_class_name;
        rebel_method_bind* mb_get_signal_documentation;
        rebel_method_bind* mb_new;
        rebel_method_bind* mb_set_class_name;
        rebel_method_bind* mb_set_library;
        rebel_method_bind* mb_set_script_class_icon_path;
        rebel_method_bind* mb_set_script_class_name;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_NATIVESCRIPT_H
