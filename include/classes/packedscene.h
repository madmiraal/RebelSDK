// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_PACKEDSCENE_H
#define REBEL_PACKEDSCENE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/resource.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Node;
class SceneState;

class PackedScene : public Resource {
public:
    enum GenEditState {
        GEN_EDIT_STATE_DISABLED = 0,
        GEN_EDIT_STATE_INSTANCE = 1,
        GEN_EDIT_STATE_MAIN = 2,
    };

    Dictionary _get_bundled_scene() const;
    void _set_bundled_scene(const Dictionary arg0);
    bool can_instance() const;
    Ref<SceneState> get_state();
    Node* instance(const int64_t edit_state = 0) const;
    Error pack(const Node* path);

    static PackedScene* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "PackedScene";
    }

    inline static const char* get_rebel_class_name() {
        return "PackedScene";
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
        rebel_method_bind* mb__get_bundled_scene;
        rebel_method_bind* mb__set_bundled_scene;
        rebel_method_bind* mb_can_instance;
        rebel_method_bind* mb_get_state;
        rebel_method_bind* mb_instance;
        rebel_method_bind* mb_pack;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_PACKEDSCENE_H
