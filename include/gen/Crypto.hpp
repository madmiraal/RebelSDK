#ifndef GODOT_CPP_CRYPTO_HPP
#define GODOT_CPP_CRYPTO_HPP


#include <gdnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class CryptoKey;
class X509Certificate;

class Crypto : public Reference {
	struct ___method_bindings {
		godot_method_bind *mb_constant_time_compare;
		godot_method_bind *mb_decrypt;
		godot_method_bind *mb_encrypt;
		godot_method_bind *mb_generate_random_bytes;
		godot_method_bind *mb_generate_rsa;
		godot_method_bind *mb_generate_self_signed_certificate;
		godot_method_bind *mb_hmac_digest;
		godot_method_bind *mb_sign;
		godot_method_bind *mb_verify;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "Crypto"; }
	static inline const char *___get_godot_class_name() { return (const char *) "Crypto"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Crypto *_new();

	// methods
	bool constant_time_compare(const PoolByteArray trusted, const PoolByteArray received);
	PoolByteArray decrypt(const Ref<CryptoKey> key, const PoolByteArray ciphertext);
	PoolByteArray encrypt(const Ref<CryptoKey> key, const PoolByteArray plaintext);
	PoolByteArray generate_random_bytes(const int64_t size);
	Ref<CryptoKey> generate_rsa(const int64_t size);
	Ref<X509Certificate> generate_self_signed_certificate(const Ref<CryptoKey> key, const String issuer_name = "CN=myserver,O=myorganisation,C=IT", const String not_before = "20140101000000", const String not_after = "20340101000000");
	PoolByteArray hmac_digest(const int64_t hash_type, const PoolByteArray key, const PoolByteArray msg);
	PoolByteArray sign(const int64_t hash_type, const PoolByteArray hash, const Ref<CryptoKey> key);
	bool verify(const int64_t hash_type, const PoolByteArray hash, const PoolByteArray signature, const Ref<CryptoKey> key);

};

}

#endif