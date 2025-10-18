#include "GLTFSkeleton.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "BoneAttachment.hpp"
#include "Skeleton.hpp"


namespace godot {


GLTFSkeleton::___method_bindings GLTFSkeleton::___mb = {};

void *GLTFSkeleton::_detail_class_tag = nullptr;

void GLTFSkeleton::___init_method_bindings() {
	___mb.mb_get_bone_attachment = godot::api->godot_method_bind_get_method("GLTFSkeleton", "get_bone_attachment");
	___mb.mb_get_bone_attachment_count = godot::api->godot_method_bind_get_method("GLTFSkeleton", "get_bone_attachment_count");
	___mb.mb_get_godot_bone_node = godot::api->godot_method_bind_get_method("GLTFSkeleton", "get_godot_bone_node");
	___mb.mb_get_godot_skeleton = godot::api->godot_method_bind_get_method("GLTFSkeleton", "get_godot_skeleton");
	___mb.mb_get_joints = godot::api->godot_method_bind_get_method("GLTFSkeleton", "get_joints");
	___mb.mb_get_roots = godot::api->godot_method_bind_get_method("GLTFSkeleton", "get_roots");
	___mb.mb_get_unique_names = godot::api->godot_method_bind_get_method("GLTFSkeleton", "get_unique_names");
	___mb.mb_set_godot_bone_node = godot::api->godot_method_bind_get_method("GLTFSkeleton", "set_godot_bone_node");
	___mb.mb_set_joints = godot::api->godot_method_bind_get_method("GLTFSkeleton", "set_joints");
	___mb.mb_set_roots = godot::api->godot_method_bind_get_method("GLTFSkeleton", "set_roots");
	___mb.mb_set_unique_names = godot::api->godot_method_bind_get_method("GLTFSkeleton", "set_unique_names");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFSkeleton");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFSkeleton *GLTFSkeleton::_new()
{
	return (GLTFSkeleton *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFSkeleton")());
}
BoneAttachment *GLTFSkeleton::get_bone_attachment(const int64_t idx) {
	return (BoneAttachment *) ___godot_icall_Object_int(___mb.mb_get_bone_attachment, (const Object *) this, idx);
}

int64_t GLTFSkeleton::get_bone_attachment_count() {
	return ___godot_icall_int(___mb.mb_get_bone_attachment_count, (const Object *) this);
}

Dictionary GLTFSkeleton::get_godot_bone_node() {
	return ___godot_icall_Dictionary(___mb.mb_get_godot_bone_node, (const Object *) this);
}

Skeleton *GLTFSkeleton::get_godot_skeleton() {
	return (Skeleton *) ___godot_icall_Object(___mb.mb_get_godot_skeleton, (const Object *) this);
}

PoolIntArray GLTFSkeleton::get_joints() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_joints, (const Object *) this);
}

PoolIntArray GLTFSkeleton::get_roots() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_roots, (const Object *) this);
}

Array GLTFSkeleton::get_unique_names() {
	return ___godot_icall_Array(___mb.mb_get_unique_names, (const Object *) this);
}

void GLTFSkeleton::set_godot_bone_node(const Dictionary godot_bone_node) {
	___godot_icall_void_Dictionary(___mb.mb_set_godot_bone_node, (const Object *) this, godot_bone_node);
}

void GLTFSkeleton::set_joints(const PoolIntArray joints) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_joints, (const Object *) this, joints);
}

void GLTFSkeleton::set_roots(const PoolIntArray roots) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_roots, (const Object *) this, roots);
}

void GLTFSkeleton::set_unique_names(const Array unique_names) {
	___godot_icall_void_Array(___mb.mb_set_unique_names, (const Object *) this, unique_names);
}

}