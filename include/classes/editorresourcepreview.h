// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORRESOURCEPREVIEW_H
#define REBEL_EDITORRESOURCEPREVIEW_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/node.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorResourcePreviewGenerator;
class Object;
class Resource;
class Texture;

class EditorResourcePreview : public Node {
public:
    void _preview_ready(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const int64_t arg3, const String arg4, const Variant arg5);
    void add_preview_generator(const Ref<EditorResourcePreviewGenerator> generator);
    void check_for_invalidation(const String path);
    void queue_edited_resource_preview(const Ref<Resource> resource, const Object* receiver, const String receiver_func, const Variant userdata);
    void queue_resource_preview(const String path, const Object* receiver, const String receiver_func, const Variant userdata);
    void remove_preview_generator(const Ref<EditorResourcePreviewGenerator> generator);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorResourcePreview";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorResourcePreview";
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
        rebel_method_bind* mb__preview_ready;
        rebel_method_bind* mb_add_preview_generator;
        rebel_method_bind* mb_check_for_invalidation;
        rebel_method_bind* mb_queue_edited_resource_preview;
        rebel_method_bind* mb_queue_resource_preview;
        rebel_method_bind* mb_remove_preview_generator;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORRESOURCEPREVIEW_H
