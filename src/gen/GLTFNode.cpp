#include "GLTFNode.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


GLTFNode::___method_bindings GLTFNode::___mb = {};

void *GLTFNode::_detail_class_tag = nullptr;

void GLTFNode::___init_method_bindings() {
	___mb.mb_get_camera = godot::api->godot_method_bind_get_method("GLTFNode", "get_camera");
	___mb.mb_get_children = godot::api->godot_method_bind_get_method("GLTFNode", "get_children");
	___mb.mb_get_height = godot::api->godot_method_bind_get_method("GLTFNode", "get_height");
	___mb.mb_get_joint = godot::api->godot_method_bind_get_method("GLTFNode", "get_joint");
	___mb.mb_get_light = godot::api->godot_method_bind_get_method("GLTFNode", "get_light");
	___mb.mb_get_mesh = godot::api->godot_method_bind_get_method("GLTFNode", "get_mesh");
	___mb.mb_get_parent = godot::api->godot_method_bind_get_method("GLTFNode", "get_parent");
	___mb.mb_get_rotation = godot::api->godot_method_bind_get_method("GLTFNode", "get_rotation");
	___mb.mb_get_scale = godot::api->godot_method_bind_get_method("GLTFNode", "get_scale");
	___mb.mb_get_skeleton = godot::api->godot_method_bind_get_method("GLTFNode", "get_skeleton");
	___mb.mb_get_skin = godot::api->godot_method_bind_get_method("GLTFNode", "get_skin");
	___mb.mb_get_translation = godot::api->godot_method_bind_get_method("GLTFNode", "get_translation");
	___mb.mb_get_xform = godot::api->godot_method_bind_get_method("GLTFNode", "get_xform");
	___mb.mb_set_camera = godot::api->godot_method_bind_get_method("GLTFNode", "set_camera");
	___mb.mb_set_children = godot::api->godot_method_bind_get_method("GLTFNode", "set_children");
	___mb.mb_set_height = godot::api->godot_method_bind_get_method("GLTFNode", "set_height");
	___mb.mb_set_joint = godot::api->godot_method_bind_get_method("GLTFNode", "set_joint");
	___mb.mb_set_light = godot::api->godot_method_bind_get_method("GLTFNode", "set_light");
	___mb.mb_set_mesh = godot::api->godot_method_bind_get_method("GLTFNode", "set_mesh");
	___mb.mb_set_parent = godot::api->godot_method_bind_get_method("GLTFNode", "set_parent");
	___mb.mb_set_rotation = godot::api->godot_method_bind_get_method("GLTFNode", "set_rotation");
	___mb.mb_set_scale = godot::api->godot_method_bind_get_method("GLTFNode", "set_scale");
	___mb.mb_set_skeleton = godot::api->godot_method_bind_get_method("GLTFNode", "set_skeleton");
	___mb.mb_set_skin = godot::api->godot_method_bind_get_method("GLTFNode", "set_skin");
	___mb.mb_set_translation = godot::api->godot_method_bind_get_method("GLTFNode", "set_translation");
	___mb.mb_set_xform = godot::api->godot_method_bind_get_method("GLTFNode", "set_xform");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFNode");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

GLTFNode *GLTFNode::_new()
{
	return (GLTFNode *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"GLTFNode")());
}
int64_t GLTFNode::get_camera() {
	return ___godot_icall_int(___mb.mb_get_camera, (const Object *) this);
}

PoolIntArray GLTFNode::get_children() {
	return ___godot_icall_PoolIntArray(___mb.mb_get_children, (const Object *) this);
}

int64_t GLTFNode::get_height() {
	return ___godot_icall_int(___mb.mb_get_height, (const Object *) this);
}

bool GLTFNode::get_joint() {
	return ___godot_icall_bool(___mb.mb_get_joint, (const Object *) this);
}

int64_t GLTFNode::get_light() {
	return ___godot_icall_int(___mb.mb_get_light, (const Object *) this);
}

int64_t GLTFNode::get_mesh() {
	return ___godot_icall_int(___mb.mb_get_mesh, (const Object *) this);
}

int64_t GLTFNode::get_parent() {
	return ___godot_icall_int(___mb.mb_get_parent, (const Object *) this);
}

Quat GLTFNode::get_rotation() {
	return ___godot_icall_Quat(___mb.mb_get_rotation, (const Object *) this);
}

Vector3 GLTFNode::get_scale() {
	return ___godot_icall_Vector3(___mb.mb_get_scale, (const Object *) this);
}

int64_t GLTFNode::get_skeleton() {
	return ___godot_icall_int(___mb.mb_get_skeleton, (const Object *) this);
}

int64_t GLTFNode::get_skin() {
	return ___godot_icall_int(___mb.mb_get_skin, (const Object *) this);
}

Vector3 GLTFNode::get_translation() {
	return ___godot_icall_Vector3(___mb.mb_get_translation, (const Object *) this);
}

Transform GLTFNode::get_xform() {
	return ___godot_icall_Transform(___mb.mb_get_xform, (const Object *) this);
}

void GLTFNode::set_camera(const int64_t camera) {
	___godot_icall_void_int(___mb.mb_set_camera, (const Object *) this, camera);
}

void GLTFNode::set_children(const PoolIntArray children) {
	___godot_icall_void_PoolIntArray(___mb.mb_set_children, (const Object *) this, children);
}

void GLTFNode::set_height(const int64_t height) {
	___godot_icall_void_int(___mb.mb_set_height, (const Object *) this, height);
}

void GLTFNode::set_joint(const bool joint) {
	___godot_icall_void_bool(___mb.mb_set_joint, (const Object *) this, joint);
}

void GLTFNode::set_light(const int64_t light) {
	___godot_icall_void_int(___mb.mb_set_light, (const Object *) this, light);
}

void GLTFNode::set_mesh(const int64_t mesh) {
	___godot_icall_void_int(___mb.mb_set_mesh, (const Object *) this, mesh);
}

void GLTFNode::set_parent(const int64_t parent) {
	___godot_icall_void_int(___mb.mb_set_parent, (const Object *) this, parent);
}

void GLTFNode::set_rotation(const Quat rotation) {
	___godot_icall_void_Quat(___mb.mb_set_rotation, (const Object *) this, rotation);
}

void GLTFNode::set_scale(const Vector3 scale) {
	___godot_icall_void_Vector3(___mb.mb_set_scale, (const Object *) this, scale);
}

void GLTFNode::set_skeleton(const int64_t skeleton) {
	___godot_icall_void_int(___mb.mb_set_skeleton, (const Object *) this, skeleton);
}

void GLTFNode::set_skin(const int64_t skin) {
	___godot_icall_void_int(___mb.mb_set_skin, (const Object *) this, skin);
}

void GLTFNode::set_translation(const Vector3 translation) {
	___godot_icall_void_Vector3(___mb.mb_set_translation, (const Object *) this, translation);
}

void GLTFNode::set_xform(const Transform xform) {
	___godot_icall_void_Transform(___mb.mb_set_xform, (const Object *) this, xform);
}

}