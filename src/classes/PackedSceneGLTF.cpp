#include "PackedSceneGLTF.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Node.hpp"
#include "GLTFState.hpp"


namespace godot {


PackedSceneGLTF::___method_bindings PackedSceneGLTF::___mb = {};

void *PackedSceneGLTF::_detail_class_tag = nullptr;

void PackedSceneGLTF::___init_method_bindings() {
	___mb.mb_export_gltf = godot::api->godot_method_bind_get_method("PackedSceneGLTF", "export_gltf");
	___mb.mb_import_gltf_scene = godot::api->godot_method_bind_get_method("PackedSceneGLTF", "import_gltf_scene");
	___mb.mb_pack_gltf = godot::api->godot_method_bind_get_method("PackedSceneGLTF", "pack_gltf");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "PackedSceneGLTF");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

PackedSceneGLTF *PackedSceneGLTF::_new()
{
	return (PackedSceneGLTF *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PackedSceneGLTF")());
}
Error PackedSceneGLTF::export_gltf(const Node *node, const String path, const int64_t flags, const real_t bake_fps) {
	return (Error) ___godot_icall_int_Object_String_int_float(___mb.mb_export_gltf, (const Object *) this, node, path, flags, bake_fps);
}

Node *PackedSceneGLTF::import_gltf_scene(const String path, const int64_t flags, const real_t bake_fps, const int64_t compress_flags, const Ref<GLTFState> state) {
	return (Node *) ___godot_icall_Object_String_int_float_int_Object(___mb.mb_import_gltf_scene, (const Object *) this, path, flags, bake_fps, compress_flags, state.ptr());
}

void PackedSceneGLTF::pack_gltf(const String path, const int64_t flags, const real_t bake_fps, const int64_t compress_flags, const Ref<GLTFState> state) {
	___godot_icall_void_String_int_float_int_Object(___mb.mb_pack_gltf, (const Object *) this, path, flags, bake_fps, compress_flags, state.ptr());
}

}