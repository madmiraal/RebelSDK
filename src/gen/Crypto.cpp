#include "Crypto.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "CryptoKey.hpp"
#include "X509Certificate.hpp"


namespace godot {


Crypto::___method_bindings Crypto::___mb = {};

void *Crypto::_detail_class_tag = nullptr;

void Crypto::___init_method_bindings() {
	___mb.mb_constant_time_compare = godot::api->godot_method_bind_get_method("Crypto", "constant_time_compare");
	___mb.mb_decrypt = godot::api->godot_method_bind_get_method("Crypto", "decrypt");
	___mb.mb_encrypt = godot::api->godot_method_bind_get_method("Crypto", "encrypt");
	___mb.mb_generate_random_bytes = godot::api->godot_method_bind_get_method("Crypto", "generate_random_bytes");
	___mb.mb_generate_rsa = godot::api->godot_method_bind_get_method("Crypto", "generate_rsa");
	___mb.mb_generate_self_signed_certificate = godot::api->godot_method_bind_get_method("Crypto", "generate_self_signed_certificate");
	___mb.mb_hmac_digest = godot::api->godot_method_bind_get_method("Crypto", "hmac_digest");
	___mb.mb_sign = godot::api->godot_method_bind_get_method("Crypto", "sign");
	___mb.mb_verify = godot::api->godot_method_bind_get_method("Crypto", "verify");
	godot_string_name class_name;
	godot::api->godot_string_name_new_data(&class_name, "Crypto");
	_detail_class_tag = godot::core_1_2_api->godot_get_class_tag(&class_name);
	godot::api->godot_string_name_destroy(&class_name);
}

Crypto *Crypto::_new()
{
	return (Crypto *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Crypto")());
}
bool Crypto::constant_time_compare(const PoolByteArray trusted, const PoolByteArray received) {
	return ___godot_icall_bool_PoolByteArray_PoolByteArray(___mb.mb_constant_time_compare, (const Object *) this, trusted, received);
}

PoolByteArray Crypto::decrypt(const Ref<CryptoKey> key, const PoolByteArray ciphertext) {
	return ___godot_icall_PoolByteArray_Object_PoolByteArray(___mb.mb_decrypt, (const Object *) this, key.ptr(), ciphertext);
}

PoolByteArray Crypto::encrypt(const Ref<CryptoKey> key, const PoolByteArray plaintext) {
	return ___godot_icall_PoolByteArray_Object_PoolByteArray(___mb.mb_encrypt, (const Object *) this, key.ptr(), plaintext);
}

PoolByteArray Crypto::generate_random_bytes(const int64_t size) {
	return ___godot_icall_PoolByteArray_int(___mb.mb_generate_random_bytes, (const Object *) this, size);
}

Ref<CryptoKey> Crypto::generate_rsa(const int64_t size) {
	return Ref<CryptoKey>::__internal_constructor(___godot_icall_Object_int(___mb.mb_generate_rsa, (const Object *) this, size));
}

Ref<X509Certificate> Crypto::generate_self_signed_certificate(const Ref<CryptoKey> key, const String issuer_name, const String not_before, const String not_after) {
	return Ref<X509Certificate>::__internal_constructor(___godot_icall_Object_Object_String_String_String(___mb.mb_generate_self_signed_certificate, (const Object *) this, key.ptr(), issuer_name, not_before, not_after));
}

PoolByteArray Crypto::hmac_digest(const int64_t hash_type, const PoolByteArray key, const PoolByteArray msg) {
	return ___godot_icall_PoolByteArray_int_PoolByteArray_PoolByteArray(___mb.mb_hmac_digest, (const Object *) this, hash_type, key, msg);
}

PoolByteArray Crypto::sign(const int64_t hash_type, const PoolByteArray hash, const Ref<CryptoKey> key) {
	return ___godot_icall_PoolByteArray_int_PoolByteArray_Object(___mb.mb_sign, (const Object *) this, hash_type, hash, key.ptr());
}

bool Crypto::verify(const int64_t hash_type, const PoolByteArray hash, const PoolByteArray signature, const Ref<CryptoKey> key) {
	return ___godot_icall_bool_int_PoolByteArray_PoolByteArray_Object(___mb.mb_verify, (const Object *) this, hash_type, hash, signature, key.ptr());
}

}