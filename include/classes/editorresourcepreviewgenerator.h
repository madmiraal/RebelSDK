// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORRESOURCEPREVIEWGENERATOR_H
#define REBEL_EDITORRESOURCEPREVIEWGENERATOR_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Resource;
class Texture;

class EditorResourcePreviewGenerator : public Reference {
public:
    bool can_generate_small_preview();
    Ref<Texture> generate(const Ref<Resource> from, const Vector2 size);
    Ref<Texture> generate_from_path(const String path, const Vector2 size);
    bool generate_small_preview_automatically();
    bool handles(const String type);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorResourcePreviewGenerator";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorResourcePreviewGenerator";
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
        rebel_method_bind* mb_can_generate_small_preview;
        rebel_method_bind* mb_generate;
        rebel_method_bind* mb_generate_from_path;
        rebel_method_bind* mb_generate_small_preview_automatically;
        rebel_method_bind* mb_handles;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORRESOURCEPREVIEWGENERATOR_H
