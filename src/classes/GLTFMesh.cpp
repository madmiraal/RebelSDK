#include "GLTFMesh.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "ArrayMesh.hpp"


namespace godot {


GLTFMesh::___method_bindings GLTFMesh::___mb = {};

void *GLTFMesh::_detail_class_tag = nullptr;

void GLTFMesh::___init_method_bindings() {
	___mb.mb_get_blend_weights = godot::api->godot_method_bind_get_method("GLTFMesh", "get_blend_weights");
	___mb.mb_get_instance_materials = godot::api->godot_method_bind_get_method("GLTFMesh", "get_instance_materials");
	___mb.mb_get_mesh = godot::api->godot_method_bind_get_method("GLTFMesh", "get_mesh");
	___mb.mb_set_blend_weights = godot::api->godot_method_bind_get_method("GLTFMesh", "set_blend_weights");
	___mb.mb_set_instance_materials = godot::api->godot_method_bind_get_method("GLTFMesh", "set_instance_materials");
	___mb.mb_set_mesh = godot::api->godot_method_bind_get_method("GLTFMesh", "set_mesh");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "GLTFMesh");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PoolRealArray GLTFMesh::get_blend_weights() {
	return ___godot_icall_PoolRealArray(___mb.mb_get_blend_weights, (const Object *) this);
}

Array GLTFMesh::get_instance_materials() {
	return ___godot_icall_Array(___mb.mb_get_instance_materials, (const Object *) this);
}

Ref<ArrayMesh> GLTFMesh::get_mesh() {
	return Ref<ArrayMesh>::__internal_constructor(___godot_icall_Object(___mb.mb_get_mesh, (const Object *) this));
}

void GLTFMesh::set_blend_weights(const PoolRealArray blend_weights) {
	___godot_icall_void_PoolRealArray(___mb.mb_set_blend_weights, (const Object *) this, blend_weights);
}

void GLTFMesh::set_instance_materials(const Array instance_materials) {
	___godot_icall_void_Array(___mb.mb_set_instance_materials, (const Object *) this, instance_materials);
}

void GLTFMesh::set_mesh(const Ref<ArrayMesh> mesh) {
	___godot_icall_void_Object(___mb.mb_set_mesh, (const Object *) this, mesh.ptr());
}

}