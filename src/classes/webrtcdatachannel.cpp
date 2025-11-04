// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/webrtcdatachannel.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void WebRTCDataChannel::close() {
    rebel_icall_void(
        method_bindings.mb_close,
        (const Object*)this
    );
}

int64_t WebRTCDataChannel::get_buffered_amount() const {
    return rebel_icall_int(
        method_bindings.mb_get_buffered_amount,
        (const Object*)this
    );
}

int64_t WebRTCDataChannel::get_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_id,
        (const Object*)this
    );
}

String WebRTCDataChannel::get_label() const {
    return rebel_icall_string(
        method_bindings.mb_get_label,
        (const Object*)this
    );
}

int64_t WebRTCDataChannel::get_max_packet_life_time() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_packet_life_time,
        (const Object*)this
    );
}

int64_t WebRTCDataChannel::get_max_retransmits() const {
    return rebel_icall_int(
        method_bindings.mb_get_max_retransmits,
        (const Object*)this
    );
}

String WebRTCDataChannel::get_protocol() const {
    return rebel_icall_string(
        method_bindings.mb_get_protocol,
        (const Object*)this
    );
}

WebRTCDataChannel::ChannelState WebRTCDataChannel::get_ready_state() const {
    return (WebRTCDataChannel::ChannelState)rebel_icall_int(
        method_bindings.mb_get_ready_state,
        (const Object*)this
    );
}

WebRTCDataChannel::WriteMode WebRTCDataChannel::get_write_mode() const {
    return (WebRTCDataChannel::WriteMode)rebel_icall_int(
        method_bindings.mb_get_write_mode,
        (const Object*)this
    );
}

bool WebRTCDataChannel::is_negotiated() const {
    return rebel_icall_bool(
        method_bindings.mb_is_negotiated,
        (const Object*)this
    );
}

bool WebRTCDataChannel::is_ordered() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ordered,
        (const Object*)this
    );
}

Error WebRTCDataChannel::poll() {
    return (Error)rebel_icall_int(
        method_bindings.mb_poll,
        (const Object*)this
    );
}

void WebRTCDataChannel::set_write_mode(const int64_t write_mode) {
    rebel_icall_void_int(
        method_bindings.mb_set_write_mode,
        (const Object*)this,
        write_mode
    );
}

bool WebRTCDataChannel::was_string_packet() const {
    return rebel_icall_bool(
        method_bindings.mb_was_string_packet,
        (const Object*)this
    );
}

void WebRTCDataChannel::init_method_bindings() {
    method_bindings.mb_close =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "close"
        );
    method_bindings.mb_get_buffered_amount =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_buffered_amount"
        );
    method_bindings.mb_get_id =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_id"
        );
    method_bindings.mb_get_label =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_label"
        );
    method_bindings.mb_get_max_packet_life_time =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_max_packet_life_time"
        );
    method_bindings.mb_get_max_retransmits =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_max_retransmits"
        );
    method_bindings.mb_get_protocol =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_protocol"
        );
    method_bindings.mb_get_ready_state =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_ready_state"
        );
    method_bindings.mb_get_write_mode =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "get_write_mode"
        );
    method_bindings.mb_is_negotiated =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "is_negotiated"
        );
    method_bindings.mb_is_ordered =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "is_ordered"
        );
    method_bindings.mb_poll =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "poll"
        );
    method_bindings.mb_set_write_mode =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "set_write_mode"
        );
    method_bindings.mb_was_string_packet =
        api->rebel_method_bind_get_method(
            "WebRTCDataChannel",
            "was_string_packet"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebRTCDataChannel");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebRTCDataChannel::MethodBindings WebRTCDataChannel::method_bindings = {};
void* WebRTCDataChannel::class_tag = nullptr;
} // namespace Rebel
