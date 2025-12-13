// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/rid.h"

#include "common/rebelglobal.h"

namespace Rebel {
RID::RID() {
    api->rebel_rid_new(&internal_rid);
}

RID::RID(const Object* object) {
    api->rebel_rid_new_with_resource(
        &internal_rid,
        static_cast<const rebel_object*>(object)
    );
}

int32_t RID::get_id() const {
    return api->rebel_rid_get_id(&internal_rid);
}

rebel_rid RID::_get_rebel_rid() const {
    return internal_rid;
}

bool RID::is_valid() const {
    return *this != RID();
}

bool operator==(const RID& left, const RID& right) {
    const rebel_rid left_rebel_rid  = left._get_rebel_rid();
    const rebel_rid right_rebel_rid = right._get_rebel_rid();
    return api->rebel_rid_operator_equal(&left_rebel_rid, &right_rebel_rid);
}

bool operator!=(const RID& left, const RID& right) {
    return !(left == right);
}

bool operator<(const RID& left, const RID& right) {
    const rebel_rid left_rebel_rid  = left._get_rebel_rid();
    const rebel_rid right_rebel_rid = right._get_rebel_rid();
    return api->rebel_rid_operator_less(&left_rebel_rid, &right_rebel_rid);
}

bool operator<=(const RID& left, const RID& right) {
    return left == right || left < right;
}

bool operator>(const RID& left, const RID& right) {
    return !(left <= right);
}

bool operator>=(const RID& left, const RID& right) {
    return !(left < right);
}
} // namespace Rebel
