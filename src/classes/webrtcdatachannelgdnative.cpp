// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/webrtcdatachannelgdnative.h"

#include "classes/icalls.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
WebRTCDataChannelGDNative* WebRTCDataChannelGDNative::create() {
    return (WebRTCDataChannelGDNative*)nativescript_1_1_api->
        rebel_nativescript_get_instance_binding_data(
            RegisterState::language_index,
            api->rebel_get_class_constructor((char *)"WebRTCDataChannelGDNative")()
         );
}

void WebRTCDataChannelGDNative::init_method_bindings() {

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "WebRTCDataChannelGDNative");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

WebRTCDataChannelGDNative::MethodBindings WebRTCDataChannelGDNative::method_bindings = {};
void* WebRTCDataChannelGDNative::class_tag = nullptr;
} // namespace Rebel
