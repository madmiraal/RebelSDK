#include "GLTFSkin.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Skin.hpp"


namespace godot {


GLTFSkin::___method_bindings GLTFSkin::___mb = {};

void *GLTFSkin::_detail_class_tag = nullptr;

void GLTFSkin::___init_method_bindings() {
	___mb.mb_get_godot_skin = godot::api->godot_method_bind_get_method("GLTFSkin", "get_godot_skin");
	___mb.mb_get_inverse_binds = godot::api->godot_method_bind_get_method("GLTFSkin", "get_inverse_binds");
	___mb.mb_get_joint_i_to_bone_i = godot::api->godot_method_bind_get_method("GLTFSkin", "get_joint_i_to_bone_i");
	___mb.mb_get_joint_i_to_name = godot::api->godot_method_bind_get_method("GLTFSkin", "get_joint_i_to_name");
	___mb.mb_get_joints = godot::api->godot_method_bind_get_method("GLTFSkin", "get_joints");
	___mb.mb_get_joints_original = godot::api->godot_method_bind_get_method("GLTFSkin", "get_joints_original");
	___mb.mb_get_non_joints = godot::api->godot_method_bind_get_method("GLTFSkin", "get_non_joints");
	___mb.mb_get_roots = godot::api->godot_method_bind_get_method("GLTFSkin", "get_roots");
	___mb.mb_get_skeleton = godot::api->godot_method_bind_get_method("GLTFSkin", "get_skeleton");
	___mb.mb_get_skin_root = godot::api->godot_method_bind_get_method("GLTFSkin", "get_skin_root");
	___mb.mb_set_godot_skin = godot::api->godot_method_bind_get_method("GLTFSkin", "set_godot_skin");
	___mb.mb_set_inverse_binds = godot::api->godot_method_bind_get_method("GLTFSkin", "set_inverse_binds");
	___mb.mb_set_joint_i_to_bone_i = godot::api->godot_method_bind_get_method("GLTFSkin", "set_joint_i_to_bone_i");
	___mb.mb_set_joint_i_to_name = godot::api->godot_method_bind_get_method("GLTFSkin", "set_joint_i_to_name");
	___mb.mb_set_joints = godot::api->godot_method_bind_get_method("GLTFSkin", "set_joints");
	___mb.mb_set_joints_original = godot::api->godot_method_bind_get_method("GLTFSkin", "set_joints_original");
	___mb.mb_set_non_joints = godot::api->godot_method_bind_get_method("GLTFSkin", "set_non_joints");
	___mb.mb_set_roots = godot::api->godot_method_bind_get_method("GLTFSkin", "set_roots");
	___mb.mb_set_skeleton = godot::api->godot_method_bind_get_method("GLTFSkin", "set_skeleton");
	___mb.mb_set_skin_root = godot::api->godot_method_bind_get_method("GLTFSkin", "set_skin_root");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFSkin");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFSkin *GLTFSkin::_new()
{
	return (GLTFSkin *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFSkin")());
}
Ref<Skin> GLTFSkin::get_godot_skin() {
	return Ref<Skin>::__internal_constructor(___godot_icall_Object(___mb.mb_get_godot_skin, (const Object *) this));
}

Array GLTFSkin::get_inverse_binds() {
	return ___godot_icall_Array(___mb.mb_get_inverse_binds, (const Object *) this);
}

Dictionary GLTFSkin::get_joint_i_to_bone_i() {
	return ___godot_icall_Dictionary(___mb.mb_get_joint_i_to_bone_i, (const Object *) this);
}

Dictionary GLTFSkin::get_joint_i_to_name() {
	return ___godot_icall_Dictionary(___mb.mb_get_joint_i_to_name, (const Object *) this);
}

PoolIntArray GLTFSkin::get_joints() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_joints, (const Object *) this);
}

PoolIntArray GLTFSkin::get_joints_original() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_joints_original, (const Object *) this);
}

PoolIntArray GLTFSkin::get_non_joints() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_non_joints, (const Object *) this);
}

PoolIntArray GLTFSkin::get_roots() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_roots, (const Object *) this);
}

int64_t GLTFSkin::get_skeleton() {
	return ___godot_icall_int(___mb.mb_get_skeleton, (const Object *) this);
}

int64_t GLTFSkin::get_skin_root() {
	return ___godot_icall_int(___mb.mb_get_skin_root, (const Object *) this);
}

void GLTFSkin::set_godot_skin(const Ref<Skin> godot_skin) {
	___godot_icall_void_Object(___mb.mb_set_godot_skin, (const Object *) this, godot_skin.ptr());
}

void GLTFSkin::set_inverse_binds(const Array inverse_binds) {
	___godot_icall_void_Array(___mb.mb_set_inverse_binds, (const Object *) this, inverse_binds);
}

void GLTFSkin::set_joint_i_to_bone_i(const Dictionary joint_i_to_bone_i) {
	___godot_icall_void_Dictionary(___mb.mb_set_joint_i_to_bone_i, (const Object *) this, joint_i_to_bone_i);
}

void GLTFSkin::set_joint_i_to_name(const Dictionary joint_i_to_name) {
	___godot_icall_void_Dictionary(___mb.mb_set_joint_i_to_name, (const Object *) this, joint_i_to_name);
}

void GLTFSkin::set_joints(const PoolIntArray joints) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_joints, (const Object *) this, joints);
}

void GLTFSkin::set_joints_original(const PoolIntArray joints_original) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_joints_original, (const Object *) this, joints_original);
}

void GLTFSkin::set_non_joints(const PoolIntArray non_joints) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_non_joints, (const Object *) this, non_joints);
}

void GLTFSkin::set_roots(const PoolIntArray roots) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_roots, (const Object *) this, roots);
}

void GLTFSkin::set_skeleton(const int64_t skeleton) {
	___godot_icall_void_int(___mb.mb_set_skeleton, (const Object *) this, skeleton);
}

void GLTFSkin::set_skin_root(const int64_t skin_root) {
	___godot_icall_void_int(___mb.mb_set_skin_root, (const Object *) this, skin_root);
}

}