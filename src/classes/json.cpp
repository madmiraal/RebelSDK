// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/json.h"

#include "classes/icalls.h"
#include "classes/jsonparseresult.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
Ref<JSONParseResult> JSON::parse(const String json) {
    return Ref<JSONParseResult>::create_ref(rebel_icall_object_string(
        method_bindings.mb_parse,
        (const Object*)this,
        json
    ));
}

String JSON::print(const Variant value, const String indent, const bool sort_keys) {
    return rebel_icall_string_variant_string_bool(
        method_bindings.mb_print,
        (const Object*)this,
        value,
        indent,
        sort_keys
    );
}

JSON* JSON::singleton = nullptr;

JSON::JSON() {
    owner = api->rebel_global_get_singleton((char*) "JSON");
}

void JSON::init_method_bindings() {
    method_bindings.mb_parse =
        api->rebel_method_bind_get_method(
            "_JSON",
            "parse"
        );
    method_bindings.mb_print =
        api->rebel_method_bind_get_method(
            "_JSON",
            "print"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_JSON");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

JSON::MethodBindings JSON::method_bindings = {};
void* JSON::class_tag = nullptr;
} // namespace Rebel
