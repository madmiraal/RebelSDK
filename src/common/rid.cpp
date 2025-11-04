// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/rid.h"

#include "common/rebelglobal.h"

namespace Rebel {

RID::RID() {
    api->rebel_rid_new(&_rebel_rid);
}

RID::RID(Object* p) {
    api->rebel_rid_new_with_resource(&_rebel_rid, (const rebel_object*)p);
}

rebel_rid RID::_get_rebel_rid() const {
    return _rebel_rid;
}

int32_t RID::get_id() const {
    return api->rebel_rid_get_id(&_rebel_rid);
}

bool RID::operator==(const RID& p_other) const {
    return api->rebel_rid_operator_equal(&_rebel_rid, &p_other._rebel_rid);
}

bool RID::operator!=(const RID& p_other) const {
    return !(*this == p_other);
}

bool RID::operator<(const RID& p_other) const {
    return api->rebel_rid_operator_less(&_rebel_rid, &p_other._rebel_rid);
}

bool RID::operator>(const RID& p_other) const {
    return !(*this < p_other) && *this != p_other;
}

bool RID::operator<=(const RID& p_other) const {
    return (*this < p_other) || *this == p_other;
}

bool RID::operator>=(const RID& p_other) const {
    return !(*this < p_other);
}

} // namespace Rebel
