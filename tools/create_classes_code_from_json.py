#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2025 Rebel SDK contributors
# SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
# SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
#
# SPDX-License-Identifier: MIT

import argparse
import json
import os
import shutil
from pathlib import Path

classes = []
cleaned_names = []


def create_classes_code_from_json(filename, use_get_node_template, root_dir="."):
    check_for_json(filename)
    global classes
    with open(filename) as json_file:
        classes = json.load(json_file)
    classes = clean(classes)

    # Recreate classes folders.
    include_folder = Path(root_dir) / "include" / "classes"
    if os.path.exists(include_folder):
        shutil.rmtree(include_folder)
    os.makedirs(include_folder)
    source_folder = Path(root_dir) / "src" / "classes"
    if os.path.exists(source_folder):
        shutil.rmtree(source_folder)
    os.makedirs(source_folder)

    icall_tuples = set()
    for clas in classes:
        class_name = clas["name"]
        class_methods = clas["methods"]
        class_filename = class_name.lower()
        referenced_classes = get_referenced_classes(class_methods)
        if use_get_node_template and class_name == "Node":
            use_get_node_internal(class_methods)

        # Create class header file.
        header = create_class_header(clas, referenced_classes, use_get_node_template)
        header_filename = include_folder / (class_filename + ".h")
        with header_filename.open("w+") as header_file:
            header_file.write(header)

        # Create class source file.
        source = create_class_source(
            clas, referenced_classes, use_get_node_template, icall_tuples
        )
        source_filename = source_folder / (class_filename + ".cpp")
        with source_filename.open("w+") as source_file:
            source_file.write(source)

    # Create icalls header file.
    icall_tuples = sorted(icall_tuples)
    icalls_header = create_icalls_header(icall_tuples)
    icalls_header_filename = include_folder / "icalls.h"
    with icalls_header_filename.open("w+") as icall_header_file:
        icall_header_file.write(icalls_header)

    # Create register types source file.
    register_types_source = create_register_types_source(classes)
    register_types_source_filename = source_folder / "register_types.cpp"
    with register_types_source_filename.open("w+") as register_types_source_file:
        register_types_source_file.write(register_types_source)

    # Create initialise method bindings source file.
    init_method_bindings_source = create_init_method_bindings_source(classes)
    init_method_bindings_source_filename = source_folder / "init_method_bindings.cpp"
    with init_method_bindings_source_filename.open(
        "w+"
    ) as init_method_bindings_source_file:
        init_method_bindings_source_file.write(init_method_bindings_source)


def get_referenced_classes(methods):
    referenced_classes = set()
    for method in methods:
        return_type = method["return_type"]
        if is_class_type(return_type):
            referenced_classes.add(return_type)
        for argument in method["arguments"]:
            argument_type = argument["type"]
            if is_class_type(argument_type):
                referenced_classes.add(argument_type)
    return sorted(list(referenced_classes))


def create_class_header(clas, referenced_classes, use_get_node_template):
    class_name = clas["name"]
    base_class = clas["base_class"]
    class_methods = clas["methods"]
    use_ref = class_name != "Object" and class_name != "Reference"
    lines = []
    add_spdx_header(lines)
    add_header_header(lines, class_name, base_class, referenced_classes)
    add_foward_declarations(lines, class_name, base_class, referenced_classes)
    add_class_declaration(lines, class_name, base_class)
    enum_value_names = add_enums(lines, clas["enums"])
    add_constants(lines, clas["constants"], enum_value_names)
    add_methods(lines, class_methods, use_ref)
    add_vararg_templates(lines, class_methods, use_ref)
    if use_get_node_template and class_name == "Node":
        add_get_node_template(lines)
    if clas["singleton"]:
        add_get_singleton_method(lines, class_name)
    if clas["instanciable"]:
        add_creator(lines, class_name)
    add_public_static_members(lines)
    add_get_class_methods(lines, class_name)
    add_from_variant_method(lines)
    if class_name == "Object":
        add_cast_template_method(lines)
    lines.append("private:")
    if clas["singleton"]:
        add_private_singleton_members(lines, class_name)
    add_method_bindings_struct(lines, class_methods)
    add_private_static_members(lines)
    lines.append("};")
    if use_get_node_template and class_name == "Node":
        add_node_get_node_template(lines)
    add_header_footer(lines, class_name)
    return "\n".join(lines)


def create_class_source(clas, referenced_classes, use_get_node_template, icall_tuples):
    class_name = clas["name"]
    class_methods = clas["methods"]
    lines = []
    add_spdx_header(lines)
    add_source_header(lines, class_name)
    add_source_class_includes(lines, referenced_classes)
    add_source_common_includes(lines)
    add_source_rebel_namespace(lines)
    add_source_method_definitions(lines, class_name, class_methods, icall_tuples)
    if clas["singleton"]:
        add_singleton_definition(lines, class_name)
    if clas["instanciable"]:
        add_create_definition(lines, class_name)
    add_init_method_bindings_definition(
        lines, class_name, class_methods, use_get_node_template
    )
    add_static_variable_definitions(lines, class_name)
    add_source_footer(lines)
    return "\n".join(lines)


def create_icalls_header(icall_tuples):
    lines = []
    add_spdx_header(lines)
    add_icalls_header_header(lines)
    for index, icall_tuple in enumerate(icall_tuples):
        icall_types = list(icall_tuple)
        return_type = icall_types[0]
        method_name = get_icall_method_name(icall_types)
        arguments = ["rebel_method_bind* method_bind", "const Object* object"]
        append_icall_arguments(arguments, icall_types)
        add_icall_method_signature(lines, return_type, method_name, arguments)
        if return_type != "void":
            add_icall_result_variable(lines, return_type)
        add_icall_arguments_variable(lines, icall_types)
        add_icall_call_ptrcall_method(lines, return_type)
        if return_type != "void":
            add_icall_return(lines, return_type)
        lines.append("}")
        if index != len(icall_tuples) - 1:
            lines.append("")
    add_header_footer(lines, "icalls")
    return "\n".join(lines)


def create_register_types_source(classes):
    lines = []
    add_spdx_header(lines)
    add_register_types_header(lines, classes)
    add_register_types_method(lines, classes)
    add_source_footer(lines)
    return "\n".join(lines)


def create_init_method_bindings_source(classes):
    lines = []
    add_spdx_header(lines)
    add_init_method_bindings_header(lines, classes)
    add_init_method_bindings_method(lines, classes)
    add_source_footer(lines)
    return "\n".join(lines)


def add_spdx_header(lines):
    lines.append("// SPDX-FileCopyrightText: 2025 Rebel SDK contributors")
    lines.append("//")
    lines.append("// SPDX-License-Identifier: MIT")
    lines.append("")


def add_header_footer(lines, class_name):
    lines.append("} // namespace Rebel")
    lines.append("")
    lines.append("#endif // REBEL_" + class_name.upper() + "_H")
    lines.append("")


def add_source_footer(lines):
    lines.append("} // namespace Rebel")
    lines.append("")


def add_header_header(lines, class_name, base_class, referenced_classes):
    lines.append("#ifndef REBEL_" + class_name.upper() + "_H")
    lines.append("#define REBEL_" + class_name.upper() + "_H")
    lines.append("")
    lines.append('#include "api/gdnative_api_struct.gen.h"')
    add_class_includes(lines, class_name, base_class, referenced_classes)
    lines.append('#include "common/commontypes.h"')
    if class_name == "Object" or class_name == "Reference":
        lines.append('#include "common/tagdb.h"')
    else:
        lines.append('#include "common/ref.h"')
    lines.append("")
    lines.append("#include <cstdint>")
    lines.append("")
    lines.append("namespace Rebel {")


def add_class_includes(lines, class_name, base_class, referenced_classes):
    base_filename = base_class.lower() + ".h"
    base_class_included = False
    for referenced_class in referenced_classes:
        if is_common_type(referenced_class):
            continue
        if not is_enum_type(referenced_class) and not is_nested_type(referenced_class):
            continue
        parent_name = get_parent_name(referenced_class)
        parent_name = remove_enum(parent_name)
        if parent_name == class_name or is_common_type(parent_name):
            continue
        filename = clean_name(parent_name).lower() + ".h"
        if base_class and not base_class_included and filename >= base_filename:
            lines.append('#include "classes/' + base_filename + '"')
            base_class_included = True
        lines.append('#include "classes/' + filename + '"')
    if base_class and not base_class_included:
        lines.append('#include "classes/' + base_filename + '"')


def add_foward_declarations(lines, class_name, base_class, referenced_classes):
    has_forward_declarations = False
    for referenced_class in referenced_classes:
        if (
            referenced_class == class_name
            or referenced_class == base_class
            or is_common_type(referenced_class)
            or is_enum_type(referenced_class)
            or is_nested_type(referenced_class)
        ):
            continue
        lines.append("class " + referenced_class + ";")
        has_forward_declarations = True
    if has_forward_declarations:
        lines.append("")


def add_class_declaration(lines, class_name, base_class):
    if base_class:
        lines.append("class " + class_name + " : public " + base_class + " {")
        lines.append("public:")
    else:
        lines.append("class " + class_name + " : public Wrapped {")
        lines.append("public:")
        lines.append("    enum { CLASS_IS_SCRIPT = 0, };")
        lines.append("")


def add_methods(lines, methods, use_ref):
    for method in methods:
        method_declaration = get_method_declaration(method, use_ref)
        lines.append("    " + method_declaration + ";")
    if methods:
        lines.append("")


def add_vararg_templates(lines, methods, use_ref):
    for method in methods:
        if not method["has_varargs"]:
            continue
        add_vararg_template(lines, method, use_ref)
        lines.append("")


def add_vararg_template(lines, method, use_ref):
    method_definition = get_template_method_definition(method, use_ref)
    call_method = get_call_method(method)
    lines.append("    template <class... Args>")
    lines.append("    " + method_definition + " {")
    lines.append("        return " + call_method + ";")
    lines.append("    }")


def add_get_node_template(lines):
    lines.append("    template <class T = Node>")
    lines.append("    T* get_node(const NodePath path) const {")
    lines.append("        return Object::cast_to<T>(get_node_internal(path));")
    lines.append("    }")
    lines.append("")


def add_node_get_node_template(lines):
    lines.append("")
    lines.append("// Specialized template version: avoids cast.")
    lines.append("template <>")
    lines.append("inline Node* Node::get_node<Node>(const NodePath path) const {")
    lines.append("    return get_node_internal(path);")
    lines.append("}")


def add_get_singleton_method(lines, class_name):
    singleton = class_name + "::singleton"
    lines.append("    static inline " + class_name + "* get_singleton() {")
    lines.append("        if (!" + singleton + ") {")
    lines.append("            " + singleton + " = new " + class_name + ";")
    lines.append("        }")
    lines.append("        return " + singleton + ";")
    lines.append("    }")
    lines.append("")


def add_public_static_members(lines):
    lines.append("    static void init_method_bindings();")
    lines.append("")
    lines.append("    inline static size_t get_class_tag() {")
    lines.append("        return (size_t)class_tag;")
    lines.append("    }")
    lines.append("")


def add_get_class_methods(lines, class_name):
    lines.append("    inline static const char* _get_class_name() {")
    lines.append('        return "' + class_name + '";')
    lines.append("    }")
    lines.append("")
    lines.append("    inline static const char* get_rebel_class_name() {")
    lines.append('        return "' + class_name + '";')
    lines.append("    }")
    lines.append("")


def add_from_variant_method(lines):
    lines.append("    inline static Object* from_variant(Variant variant) {")
    lines.append("        rebel_object* object = (rebel_object*)variant;")
    lines.append("        if (!object) {")
    lines.append("            return nullptr;")
    lines.append("        }")
    lines.append("        return (Object*)nativescript_1_1_api->")
    lines.append("            rebel_nativescript_get_instance_binding_data(")
    lines.append("                RegisterState::language_index,")
    lines.append("                object")
    lines.append("            );")
    lines.append("    }")
    lines.append("")


def add_enums(lines, enums):
    enum_value_names = []
    for enum in enums:
        enum_name = enum["name"]
        lines.append("    enum " + enum_name + " {")
        for value_name, value in enum["values"].items():
            value_name = remove_parent_name(value_name)
            enum_value_names.append(value_name)
            lines.append("        " + value_name + " = " + str(value) + ",")
        lines.append("    };")
        lines.append("")
    return enum_value_names


def add_constants(lines, constants, enum_value_names):
    if not constants:
        return
    has_constants = False
    for name, value in constants.items():
        if name in enum_value_names:
            continue
        lines.append("    static const int " + name + " = " + str(value) + ";")
        has_constants = True
    if has_constants:
        lines.append("")


def add_creator(lines, class_name):
    lines.append("    static " + class_name + "* create();")
    lines.append("")


def add_cast_template_method(lines):
    lines.append("#ifndef NO_OBJECT_CAST")
    lines.append("    template<class T>")
    lines.append("    static T *cast_to(const Object *object);")
    lines.append("#endif // NO_OBJECT_CAST")
    lines.append("")


def add_private_singleton_members(lines, class_name):
    singleton = class_name + "::singleton"
    lines.append("    " + class_name + "();")
    lines.append("    static " + class_name + "* singleton;")
    lines.append("")


def add_method_bindings_struct(lines, methods):
    lines.append("    struct MethodBindings {")
    for method in methods:
        method_name = method["name"]
        lines.append("        rebel_method_bind* mb_" + method_name + ";")
    lines.append("    };")
    lines.append("")


def add_private_static_members(lines):
    lines.append("    static MethodBindings method_bindings;")
    lines.append("    static void* class_tag;")


def get_type(type_name, use_ref):
    if is_enum_type(type_name):
        return clean_name(remove_enum(type_name))
    type_name = clean_name(type_name)
    if is_class_type(type_name):
        if is_common_type(type_name):
            return type_name
        if use_ref and is_reference_type(type_name):
            return "Ref<" + type_name + ">"
        else:
            return type_name + "*"
    if type_name == "int":
        return "int64_t"
    if type_name == "float" or type_name == "real":
        return "real_t"
    return type_name


def get_default(type_name, default_value):
    if type_name == "Color":
        return "Color(" + default_value + ")"
    elif type_name == "bool" or type_name == "int":
        return default_value.lower()
    elif type_name in [
        "Array",
        "PoolVector2Array",
        "PoolStringArray",
        "PoolVector3Array",
        "PoolColorArray",
        "PoolIntArray",
        "PoolRealArray",
        "PoolByteArray",
        "RID",
        "Transform",
        "Transform2D",
    ]:
        return type_name + "()"
    elif type_name in [
        "Rect2",
        "Vector2",
        "Vector3",
    ]:
        return type_name + default_value
    elif type_name == "Variant":
        if default_value == "Null":
            return "Variant()"
        else:
            return default_value
    elif type_name in [
        "String",
        "NodePath",
    ]:
        return '"' + default_value + '"'
    elif default_value == "Null" or default_value == "[Object:null]":
        return "nullptr"
    return default_value


def get_parameter_list(arguments, include_defaults, use_ref):
    parameter_list = []
    for argument in arguments:
        type_name = argument["type"]
        parameter_string = "const "
        parameter_string += get_type(type_name, use_ref)
        parameter_string += " " + get_argument_name(argument["name"])
        if include_defaults and argument["has_default_value"]:
            parameter_string += " = " + get_default(
                type_name, argument["default_value"]
            )
        parameter_list.append(parameter_string)
    return parameter_list


def get_method_declaration(method, use_ref):
    return_type = get_type(method["return_type"], use_ref)
    method_name = get_method_name(method["name"])
    method_parameters = get_parameter_list(method["arguments"], True, use_ref)
    if method["has_varargs"]:
        method_parameters.append("const Array& args = Array()")
    method_declaration = (
        return_type + " " + method_name + "(" + ", ".join(method_parameters) + ")"
    )
    if method["is_const"]:
        method_declaration += " const"
    return method_declaration


def get_template_method_definition(method, use_ref):
    return_type = get_type(method["return_type"], use_ref)
    method_name = get_method_name(method["name"])
    method_parameters = get_parameter_list(method["arguments"], False, use_ref)
    method_parameters.append("Args... args")
    method_definition = (
        return_type + " " + method_name + "(" + ", ".join(method_parameters) + ")"
    )
    if method["is_const"]:
        method_definition += " const"
    return method_definition


def get_method_definition(method, use_ref, class_name):
    return_type = get_type(method["return_type"], use_ref)
    method_name = get_method_name(method["name"])
    method_parameters = get_parameter_list(method["arguments"], False, use_ref)
    if method["has_varargs"]:
        method_parameters.append("const Array& args")
    method_definition = (
        return_type
        + " "
        + class_name
        + "::"
        + method_name
        + "("
        + ", ".join(method_parameters)
        + ")"
    )
    if method["is_const"]:
        method_definition += " const"
    return method_definition


def get_call_method(method):
    method_name = get_method_name(method["name"])
    method_arguments = []
    for argument in method["arguments"]:
        method_arguments.append(argument["name"])
    if method["has_varargs"]:
        method_arguments.append("Array::make(args...)")
    return method_name + "(" + ", ".join(method_arguments) + ")"


def add_source_header(lines, class_name):
    lines.append('#include "classes/' + class_name.lower() + '.h"')
    lines.append("")


def add_source_class_includes(lines, referenced_classes):
    icalls_included = False
    for class_name in referenced_classes:
        if is_enum_type(class_name) or is_common_type(class_name):
            continue
        class_name = class_name.lower()
        if not icalls_included and class_name > "icalls":
            lines.append('#include "classes/icalls.h"')
            icalls_included = True
        lines.append('#include "classes/' + class_name + '.h"')
    if not icalls_included:
        lines.append('#include "classes/icalls.h"')


def add_source_common_includes(lines):
    lines.append('#include "common/rebel.h"')
    lines.append('#include "common/rebelglobal.h"')


def add_source_rebel_namespace(lines):
    lines.append("")
    lines.append("namespace Rebel {")


def add_singleton_definition(lines, class_name):
    lines.append(class_name + "* " + class_name + "::singleton = nullptr;")
    lines.append("")
    lines.append(class_name + "::" + class_name + "() {")
    lines.append(
        '    owner = api->rebel_global_get_singleton((char*) "' + class_name + '");'
    )
    lines.append("}")
    lines.append("")


def add_create_definition(lines, class_name):
    engine_name = get_engine_name(class_name)
    lines.append(class_name + "* " + class_name + "::create() {")
    lines.append("    return (" + class_name + "*)nativescript_1_1_api->")
    lines.append("        rebel_nativescript_get_instance_binding_data(")
    lines.append("            RegisterState::language_index,")
    lines.append(
        '            api->rebel_get_class_constructor((char *)"' + engine_name + '")()'
    )
    lines.append("         );")
    lines.append("}")
    lines.append("")


def add_init_method_bindings_definition(
    lines, class_name, methods, use_get_node_template
):
    engine_name = get_engine_name(class_name)
    if class_name in cleaned_names:
        internal_name = "_" + class_name
    lines.append("void " + class_name + "::init_method_bindings() {")
    for method in methods:
        method_name = method["name"]
        lines.append("    method_bindings.mb_" + method_name + " =")
        lines.append("        api->rebel_method_bind_get_method(")
        lines.append('            "' + engine_name + '",')
        if use_get_node_template and method_name == "get_node_internal":
            lines.append('            "get_node"')
        else:
            lines.append('            "' + method_name + '"')
        lines.append("        );")
    lines.append("")
    lines.append("    rebel_string_name class_name;")
    lines.append(
        '    api->rebel_string_name_new_data(&class_name, "' + engine_name + '");'
    )
    lines.append("    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);")
    lines.append("    api->rebel_string_name_destroy(&class_name);")
    lines.append("}")


def add_static_variable_definitions(lines, class_name):
    lines.append("")
    lines.append(
        class_name + "::MethodBindings " + class_name + "::method_bindings = {};"
    )
    lines.append("void* " + class_name + "::class_tag = nullptr;")


def add_source_method_definitions(lines, class_name, methods, icall_tuples):
    use_ref = class_name != "Object" and class_name != "Reference"
    for method in methods:
        method_definition = get_method_definition(method, use_ref, class_name)
        lines.append(method_definition + " {")
        if method["name"] == "free":
            add_method_free_definition(lines)
        elif method["has_varargs"]:
            add_call_vararg_method(lines, method)
        else:
            add_call_icall_method(lines, method, use_ref, icall_tuples)
        lines.append("}")
        lines.append("")


def add_method_free_definition(lines):
    lines.append("    api->rebel_object_destroy(owner);")


def add_call_vararg_method(lines, method):
    arguments = method["arguments"]
    return_type = method["return_type"]
    add_create_argument_count_variable(lines, arguments)
    add_create_argument_array(lines, arguments)
    add_create_variant_argument_array(lines, arguments)
    add_add_argument_values_to_array(lines, arguments)
    add_add_variant_argument_values_to_array(lines, arguments)
    add_call_method(lines, method["name"])
    if is_class_type(return_type) and not is_common_type(return_type):
        add_retrieve_result(lines)
    add_destroy_variant_argument_array(lines, arguments)
    if return_type != "void":
        add_return_result(lines, return_type)


def add_create_argument_count_variable(lines, arguments):
    modify_count = ""
    if arguments:
        argument_count = len(arguments)
        modify_count = str(argument_count) + " + "
    lines.append("    size_t arg_count = " + modify_count + "args.size();")


def add_create_argument_array(lines, arguments):
    if not arguments:
        return
    argument_count = len(arguments)
    lines.append("    Variant arg_values[" + str(argument_count) + "];")
    for index, argument in enumerate(arguments):
        name = get_argument_name(argument["name"])
        lines.append(
            "    api->rebel_variant_new_nil((rebel_variant*) &arg_values["
            + str(index)
            + "]);"
        )
        lines.append("    arg_values[" + str(index) + "] = " + name + ";")


def add_create_variant_argument_array(lines, arguments):
    lines.append("")
    argument_count = len(arguments)
    lines.append("    rebel_variant** var_args =")
    lines.append("        (rebel_variant**)alloca(sizeof(rebel_variant*) * arg_count);")


def add_add_argument_values_to_array(lines, arguments):
    for index, argument in enumerate(arguments):
        lines.append(
            "    var_args["
            + str(index)
            + "] = (rebel_variant*) &arg_values["
            + str(index)
            + "];"
        )


def add_add_variant_argument_values_to_array(lines, arguments):
    modify_count = ""
    if arguments:
        argument_count = len(arguments)
        modify_count = str(argument_count) + " + "
    lines.append("    for (int i = 0; i < args.size(); i++) {")
    lines.append(
        "        var_args["
        + modify_count
        + "i] = (rebel_variant*) &((Array&) args)[i];"
    )
    lines.append("    }")


def add_call_method(lines, method_name):
    lines.append("")
    lines.append("    Variant result;")
    lines.append("    *(rebel_variant*) &result = api->rebel_method_bind_call(")
    lines.append("        method_bindings.mb_" + method_name + ",")
    lines.append("        ((const Object *)this)->owner,")
    lines.append("        (const rebel_variant**) var_args,")
    lines.append("        arg_count,")
    lines.append("        nullptr")
    lines.append("    );")


def add_retrieve_result(lines):
    lines.append("")
    lines.append("    Object* object = Object::from_variant(result);")
    lines.append('    if (object->has_method("reference")) {')
    lines.append('        object->callv("reference", Array());')
    lines.append("    }")
    lines.append("")


def add_destroy_variant_argument_array(lines, arguments):
    if not arguments:
        return
    lines.append("")
    for index, argument in enumerate(arguments):
        lines.append(
            "    api->rebel_variant_destroy((rebel_variant *) &var_args["
            + str(index)
            + "]);"
        )


def add_return_result(lines, return_type):
    type = clean_name(return_type)
    if is_class_type(return_type) and is_reference_type(return_type):
        lines.append("    return Ref<" + type + ">::create_ref(result);")
    elif is_class_type(return_type) and not is_common_type(return_type):
        lines.append("    return (" + type + "*)" + type + "::from_variant(result);")
    else:
        lines.append("    return result;")


def add_call_icall_method(lines, method, use_ref, icall_tuples):
    return_statement = get_icall_return_statement(method["return_type"], use_ref)
    icall_types = get_icall_types(method)
    icall_tuples.add(tuple(icall_types))
    icall_method_name = get_icall_method_name(icall_types)
    icall_arguments = get_icall_arguments(method, use_ref)
    lines.append("    " + return_statement + icall_method_name + "(")
    for index, icall_argument in enumerate(icall_arguments):
        comma = ","
        if index == len(icall_arguments) - 1:
            comma = ""
        lines.append("        " + icall_argument + comma)
    if is_reference_type(method["return_type"]) and use_ref:
        lines.append("    ));")
    else:
        lines.append("    );")


def add_icalls_header_header(lines):
    lines.append("#ifndef REBEL_ICALLS_H")
    lines.append("#define REBEL_ICALLS_H")
    lines.append("")
    lines.append('#include "api/gdnative_api_struct.gen.h"')
    lines.append('#include "classes/object.h"')
    lines.append('#include "common/commontypes.h"')
    lines.append('#include "common/rebelglobal.h"')
    lines.append("")
    lines.append("#include <stdint.h>")
    lines.append("")
    lines.append("namespace Rebel {")


def add_icall_method_signature(lines, return_type, method_name, arguments):
    modifiers = "inline static"
    icall_return_type = get_icall_return_type(return_type)
    lines.append(modifiers + " " + icall_return_type + " " + method_name + "(")
    for index, argument in enumerate(arguments):
        comma = ","
        if index == len(arguments) - 1:
            comma = ""
        lines.append("    " + argument + comma)
    lines.append(") {")


def add_icall_result_variable(lines, return_type):
    if is_class_type(return_type) and not is_common_type(return_type):
        lines.append("    rebel_object* result = nullptr;")
    else:
        icall_return_type = get_icall_return_type(return_type)
        lines.append("    " + icall_return_type + " result;")


def add_icall_arguments_variable(lines, icall_types):
    argument_count = len(icall_types) - 1
    if argument_count == 0:
        lines.append("    const void* args[1] {};")
        return
    lines.append("    const void* args[" + str(argument_count) + "] = {")
    for index, icall_type in enumerate(icall_types):
        # Ignore return type.
        if index == 0:
            continue
        comma = ","
        if index == len(icall_types) - 1:
            comma = ""
        arg_name = "arg" + str(index - 1)
        if is_class_type(icall_type) and not is_common_type(icall_type):
            argument = "(void*)(" + arg_name + ") ? " + arg_name + "->owner : nullptr"
        else:
            argument = "(void*)&" + arg_name
        lines.append("        " + argument + comma)
    lines.append("    };")


def add_icall_call_ptrcall_method(lines, return_type):
    method_name = "api->rebel_method_bind_ptrcall"
    if return_type == "void":
        result_argument = "nullptr"
    else:
        result_argument = "&result"
    arguments = ["method_bind", "object->owner", "args", result_argument]
    lines.append("    " + method_name + "(" + ", ".join(arguments) + ");")


def add_icall_return(lines, return_type):
    if is_class_type(return_type) and not is_common_type(return_type):
        add_icall_create_return_object(lines)
    else:
        lines.append("    return result;")


def add_icall_create_return_object(lines):
    lines.append("    if (result) {")
    lines.append("        return (Object*)nativescript_1_1_api->")
    lines.append("            rebel_nativescript_get_instance_binding_data(")
    lines.append("                RegisterState::language_index,")
    lines.append("                result")
    lines.append("            );")
    lines.append("    }")
    lines.append("    return (Object*)result;")


def get_icall_return_statement(return_type, use_ref):
    type_name = clean_name(return_type)
    if return_type == "void":
        return ""
    if is_reference_type(return_type) and use_ref:
        return "return Ref<" + type_name + ">::create_ref("
    if is_enum_type(return_type):
        return "return (" + clean_name(remove_enum(type_name)) + ")"
    if is_class_type(return_type) and not is_common_type(return_type):
        return "return (" + type_name + "*)"
    return "return "


def get_icall_types(method):
    icall_types = []
    icall_types.append(get_icall_type(method["return_type"]))
    for argument in method["arguments"]:
        icall_types.append(get_icall_type(argument["type"]))
    return icall_types


def get_icall_arguments(method, use_ref):
    method_name = method["name"]
    arguments = method["arguments"]
    icall_arguments = []
    icall_arguments.append("method_bindings.mb_" + method_name)
    icall_arguments.append("(const Object*)this")
    for argument in arguments:
        icall_argument = get_argument_name(argument["name"])
        if is_reference_type(argument["type"]) and use_ref:
            icall_argument += ".ptr()"
        icall_arguments.append(icall_argument)
    return icall_arguments


def append_icall_arguments(arguments, icall_types):
    for index, icall_type in enumerate(icall_types):
        # Ignore return type
        if index == 0:
            continue
        argument_name = "arg" + str(index - 1)
        if is_common_type(icall_type):
            arguments.append("const " + icall_type + "& " + argument_name)
        elif icall_type == "int":
            arguments.append("int64_t " + argument_name)
        elif icall_type == "float":
            arguments.append("double " + argument_name)
        elif not is_class_type(icall_type):
            arguments.append(icall_type + " " + argument_name)
        else:
            arguments.append("const Object* " + argument_name)


def add_register_types_header(lines, classes):
    for clas in classes:
        class_name = clas["name"].lower()
        lines.append('#include "classes/' + class_name + '.h"')
    lines.append('#include "common/tagdb.h"')
    lines.append("")
    lines.append("#include <typeinfo>")
    lines.append("")
    lines.append("namespace Rebel {")


def add_register_types_method(lines, classes):
    lines.append("void register_types() {")
    for index, clas in enumerate(classes):
        class_name = clas["name"]
        base_class = clas["base_class"]
        class_typeid_hash = "typeid(" + class_name + ").hash_code()"
        if base_class:
            base_typeid_hash = "typeid(" + base_class + ").hash_code()"
        else:
            base_typeid_hash = "0"
        lines.append("    TagDB::register_global_type(")
        lines.append('        "' + class_name + '",')
        lines.append("        " + class_typeid_hash + ",")
        lines.append("        " + base_typeid_hash)
        lines.append("    );")
        if index != len(classes) - 1:
            lines.append("")
    lines.append("}")


def add_init_method_bindings_header(lines, classes):
    for clas in classes:
        class_name = clas["name"].lower()
        lines.append('#include "classes/' + class_name + '.h"')
    lines.append("")
    lines.append("namespace Rebel {")


def add_init_method_bindings_method(lines, classes):
    lines.append("void init_method_bindings() {")
    for clas in classes:
        class_name = clas["name"]
        lines.append("    " + class_name + "::init_method_bindings();")
    lines.append("}")


def get_icall_type(type_name):
    if is_enum_type(type_name):
        return "int"
    if is_class_type(type_name) and not is_common_type(type_name):
        return "Object"
    return type_name


def get_icall_return_type(type_name):
    if is_class_type(type_name) and not is_common_type(type_name):
        return "Object*"
    if type_name == "int":
        return "int64_t"
    if type_name == "float" or type == "real":
        return "double"
    return type_name


def get_icall_method_name(icall_types):
    method_name = "rebel_icall"
    for icall_type in icall_types:
        method_name += "_" + icall_type.lower()
    return method_name


def use_get_node_internal(methods):
    for method in methods:
        if method["name"] == "get_node":
            method["name"] = "get_node_internal"


def clean(classes):
    for clas in classes:
        clas["name"] = clean_name(clas["name"])
        clas["base_class"] = clean_name(clas["base_class"])
    return sorted(classes, key=lambda clas: clas["name"])


def clean_name(name):
    global cleaned_names
    if name.startswith("_"):
        name = name[1:]
        cleaned_names.append(name)
    return name


def get_engine_name(class_name):
    global cleaned_names
    if class_name in cleaned_names:
        return "_" + class_name
    return class_name


def get_parent_name(name):
    index = name.find("::")
    if index == -1:
        return name
    parent_name = name[:index]
    return parent_name


def remove_parent_name(name):
    index = name.find("::")
    if index == -1:
        return name
    child_name = name[index + 2 :]
    return clean_name(child_name)


def is_class_type(type_name):
    primitive_types = ["int", "bool", "real", "float", "void"]
    return type_name not in primitive_types


def is_common_type(type_name):
    common_types = [
        "AABB",
        "Array",
        "Basis",
        "Color",
        "Dictionary",
        "Error",
        "enum.Error",
        "NodePath",
        "Plane",
        "PoolByteArray",
        "PoolIntArray",
        "PoolRealArray",
        "PoolStringArray",
        "PoolVector2Array",
        "PoolVector3Array",
        "PoolColorArray",
        "PoolIntArray",
        "PoolRealArray",
        "Quat",
        "Rect2",
        "RID",
        "String",
        "Transform",
        "Transform2D",
        "Variant",
        "Vector2",
        "Vector3",
    ]
    return type_name in common_types


def is_reference_type(type_name):
    for clas in classes:
        if clas["name"] == type_name:
            return clas["is_reference"]
    return False


def is_enum_type(type_name):
    return type_name.startswith("enum.")


def remove_enum(type_name):
    if type_name.startswith("enum."):
        return type_name[5:]
    return type_name


def is_nested_type(type_name):
    return type_name.find("::") > 0


def get_method_name(method_name):
    changes = {
        "new": "new_",
    }
    if method_name in changes:
        return changes[method_name]
    return method_name


def get_argument_name(argument_name):
    changes = {
        "class": "_class",
        "enum": "_enum",
        "char": "_char",
        "short": "_short",
        "bool": "_bool",
        "int": "_int",
        "default": "_default",
        "case": "_case",
        "switch": "_switch",
        "export": "_export",
        "template": "_template",
        "operator": "_operator",
        "typename": "_typename",
    }
    if argument_name in changes:
        return changes[argument_name]
    return argument_name


def check_for_json(filename):
    if os.path.exists(filename):
        return
    print("ERROR: Cannot find:", filename)
    print("The classes code is based on the current Rebel Engine code.")
    print("To generate the required api.json file, from Rebel Engine,")
    print("please run:")
    print("rebel --gdnative-generate-json-api api.json")
    exit(1)


def main():
    parser = argparse.ArgumentParser(
        description="Automatically creates the classes/*.h and classes/*.cpp files from the json file created using Rebel's --gdnative-generate-json-api option",
    )
    parser.add_argument("filename", nargs="?", default="api.json")
    parser.add_argument("-t", "--template", default=True)
    parser.add_argument("-r", "--root_dir", default=".")
    args = parser.parse_args()
    create_classes_code_from_json(args.filename, args.template, args.root_dir)


if __name__ == "__main__":
    main()
