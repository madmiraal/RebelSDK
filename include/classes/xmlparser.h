// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_XMLPARSER_H
#define REBEL_XMLPARSER_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class XMLParser : public Reference {
public:
    enum NodeType {
        NODE_NONE = 0,
        NODE_ELEMENT = 1,
        NODE_ELEMENT_END = 2,
        NODE_TEXT = 3,
        NODE_COMMENT = 4,
        NODE_CDATA = 5,
        NODE_UNKNOWN = 6,
    };

    int64_t get_attribute_count() const;
    String get_attribute_name(const int64_t idx) const;
    String get_attribute_value(const int64_t idx) const;
    int64_t get_current_line() const;
    String get_named_attribute_value(const String name) const;
    String get_named_attribute_value_safe(const String name) const;
    String get_node_data() const;
    String get_node_name() const;
    int64_t get_node_offset() const;
    XMLParser::NodeType get_node_type();
    bool has_attribute(const String name) const;
    bool is_empty() const;
    Error open(const String file);
    Error open_buffer(const PoolByteArray buffer);
    Error read();
    Error seek(const int64_t position);
    void skip_section();

    static XMLParser* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "XMLParser";
    }

    inline static const char* get_rebel_class_name() {
        return "XMLParser";
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
        rebel_method_bind* mb_get_attribute_count;
        rebel_method_bind* mb_get_attribute_name;
        rebel_method_bind* mb_get_attribute_value;
        rebel_method_bind* mb_get_current_line;
        rebel_method_bind* mb_get_named_attribute_value;
        rebel_method_bind* mb_get_named_attribute_value_safe;
        rebel_method_bind* mb_get_node_data;
        rebel_method_bind* mb_get_node_name;
        rebel_method_bind* mb_get_node_offset;
        rebel_method_bind* mb_get_node_type;
        rebel_method_bind* mb_has_attribute;
        rebel_method_bind* mb_is_empty;
        rebel_method_bind* mb_open;
        rebel_method_bind* mb_open_buffer;
        rebel_method_bind* mb_read;
        rebel_method_bind* mb_seek;
        rebel_method_bind* mb_skip_section;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_XMLPARSER_H
