// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_EDITORVCSINTERFACE_H
#define REBEL_EDITORVCSINTERFACE_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class EditorVCSInterface : public Object {
public:
    void _commit(const String msg);
    Array _get_file_diff(const String file_path);
    Dictionary _get_modified_files_data();
    String _get_project_name();
    String _get_vcs_name();
    bool _initialize(const String project_root_path);
    bool _is_vcs_initialized();
    bool _shut_down();
    void _stage_file(const String file_path);
    void _unstage_file(const String file_path);
    void commit(const String msg);
    Array get_file_diff(const String file_path);
    Dictionary get_modified_files_data();
    String get_project_name();
    String get_vcs_name();
    bool initialize(const String project_root_path);
    bool is_addon_ready();
    bool is_vcs_initialized();
    bool shut_down();
    void stage_file(const String file_path);
    void unstage_file(const String file_path);

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "EditorVCSInterface";
    }

    inline static const char* get_rebel_class_name() {
        return "EditorVCSInterface";
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
        rebel_method_bind* mb__commit;
        rebel_method_bind* mb__get_file_diff;
        rebel_method_bind* mb__get_modified_files_data;
        rebel_method_bind* mb__get_project_name;
        rebel_method_bind* mb__get_vcs_name;
        rebel_method_bind* mb__initialize;
        rebel_method_bind* mb__is_vcs_initialized;
        rebel_method_bind* mb__shut_down;
        rebel_method_bind* mb__stage_file;
        rebel_method_bind* mb__unstage_file;
        rebel_method_bind* mb_commit;
        rebel_method_bind* mb_get_file_diff;
        rebel_method_bind* mb_get_modified_files_data;
        rebel_method_bind* mb_get_project_name;
        rebel_method_bind* mb_get_vcs_name;
        rebel_method_bind* mb_initialize;
        rebel_method_bind* mb_is_addon_ready;
        rebel_method_bind* mb_is_vcs_initialized;
        rebel_method_bind* mb_shut_down;
        rebel_method_bind* mb_stage_file;
        rebel_method_bind* mb_unstage_file;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_EDITORVCSINTERFACE_H
