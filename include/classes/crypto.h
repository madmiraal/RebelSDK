// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_CRYPTO_H
#define REBEL_CRYPTO_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/reference.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class CryptoKey;
class X509Certificate;

class Crypto : public Reference {
public:
    bool constant_time_compare(const PoolByteArray trusted, const PoolByteArray received);
    PoolByteArray decrypt(const Ref<CryptoKey> key, const PoolByteArray ciphertext);
    PoolByteArray encrypt(const Ref<CryptoKey> key, const PoolByteArray plaintext);
    PoolByteArray generate_random_bytes(const int64_t size);
    Ref<CryptoKey> generate_rsa(const int64_t size);
    Ref<X509Certificate> generate_self_signed_certificate(const Ref<CryptoKey> key, const String issuer_name = "CN=myserver,O=myorganisation,C=IT", const String not_before = "20140101000000", const String not_after = "20340101000000");
    PoolByteArray hmac_digest(const int64_t hash_type, const PoolByteArray key, const PoolByteArray msg);
    PoolByteArray sign(const int64_t hash_type, const PoolByteArray hash, const Ref<CryptoKey> key);
    bool verify(const int64_t hash_type, const PoolByteArray hash, const PoolByteArray signature, const Ref<CryptoKey> key);

    static Crypto* create();

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "Crypto";
    }

    inline static const char* get_rebel_class_name() {
        return "Crypto";
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
        rebel_method_bind* mb_constant_time_compare;
        rebel_method_bind* mb_decrypt;
        rebel_method_bind* mb_encrypt;
        rebel_method_bind* mb_generate_random_bytes;
        rebel_method_bind* mb_generate_rsa;
        rebel_method_bind* mb_generate_self_signed_certificate;
        rebel_method_bind* mb_hmac_digest;
        rebel_method_bind* mb_sign;
        rebel_method_bind* mb_verify;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_CRYPTO_H
