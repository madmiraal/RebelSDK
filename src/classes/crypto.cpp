// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/crypto.h"

#include "classes/cryptokey.h"
#include "classes/icalls.h"
#include "classes/x509certificate.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
bool Crypto::constant_time_compare(const PoolByteArray trusted, const PoolByteArray received) {
    return rebel_icall_bool_poolbytearray_poolbytearray(
        method_bindings.mb_constant_time_compare,
        (const Object*)this,
        trusted,
        received
    );
}

PoolByteArray Crypto::decrypt(const Ref<CryptoKey> key, const PoolByteArray ciphertext) {
    return rebel_icall_poolbytearray_object_poolbytearray(
        method_bindings.mb_decrypt,
        (const Object*)this,
        key.ptr(),
        ciphertext
    );
}

PoolByteArray Crypto::encrypt(const Ref<CryptoKey> key, const PoolByteArray plaintext) {
    return rebel_icall_poolbytearray_object_poolbytearray(
        method_bindings.mb_encrypt,
        (const Object*)this,
        key.ptr(),
        plaintext
    );
}

PoolByteArray Crypto::generate_random_bytes(const int64_t size) {
    return rebel_icall_poolbytearray_int(
        method_bindings.mb_generate_random_bytes,
        (const Object*)this,
        size
    );
}

Ref<CryptoKey> Crypto::generate_rsa(const int64_t size) {
    return Ref<CryptoKey>::create_ref(rebel_icall_object_int(
        method_bindings.mb_generate_rsa,
        (const Object*)this,
        size
    ));
}

Ref<X509Certificate> Crypto::generate_self_signed_certificate(const Ref<CryptoKey> key, const String issuer_name, const String not_before, const String not_after) {
    return Ref<X509Certificate>::create_ref(rebel_icall_object_object_string_string_string(
        method_bindings.mb_generate_self_signed_certificate,
        (const Object*)this,
        key.ptr(),
        issuer_name,
        not_before,
        not_after
    ));
}

PoolByteArray Crypto::hmac_digest(const int64_t hash_type, const PoolByteArray key, const PoolByteArray msg) {
    return rebel_icall_poolbytearray_int_poolbytearray_poolbytearray(
        method_bindings.mb_hmac_digest,
        (const Object*)this,
        hash_type,
        key,
        msg
    );
}

PoolByteArray Crypto::sign(const int64_t hash_type, const PoolByteArray hash, const Ref<CryptoKey> key) {
    return rebel_icall_poolbytearray_int_poolbytearray_object(
        method_bindings.mb_sign,
        (const Object*)this,
        hash_type,
        hash,
        key.ptr()
    );
}

bool Crypto::verify(const int64_t hash_type, const PoolByteArray hash, const PoolByteArray signature, const Ref<CryptoKey> key) {
    return rebel_icall_bool_int_poolbytearray_poolbytearray_object(
        method_bindings.mb_verify,
        (const Object*)this,
        hash_type,
        hash,
        signature,
        key.ptr()
    );
}

Crypto* Crypto::create() {
    return (Crypto*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"Crypto")()
         );
}

void Crypto::init_method_bindings() {
    method_bindings.mb_constant_time_compare =
        api->rebel_method_bind_get_method(
            "Crypto",
            "constant_time_compare"
        );
    method_bindings.mb_decrypt =
        api->rebel_method_bind_get_method(
            "Crypto",
            "decrypt"
        );
    method_bindings.mb_encrypt =
        api->rebel_method_bind_get_method(
            "Crypto",
            "encrypt"
        );
    method_bindings.mb_generate_random_bytes =
        api->rebel_method_bind_get_method(
            "Crypto",
            "generate_random_bytes"
        );
    method_bindings.mb_generate_rsa =
        api->rebel_method_bind_get_method(
            "Crypto",
            "generate_rsa"
        );
    method_bindings.mb_generate_self_signed_certificate =
        api->rebel_method_bind_get_method(
            "Crypto",
            "generate_self_signed_certificate"
        );
    method_bindings.mb_hmac_digest =
        api->rebel_method_bind_get_method(
            "Crypto",
            "hmac_digest"
        );
    method_bindings.mb_sign =
        api->rebel_method_bind_get_method(
            "Crypto",
            "sign"
        );
    method_bindings.mb_verify =
        api->rebel_method_bind_get_method(
            "Crypto",
            "verify"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "Crypto");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

Crypto::MethodBindings Crypto::method_bindings = {};
void* Crypto::class_tag = nullptr;
} // namespace Rebel
