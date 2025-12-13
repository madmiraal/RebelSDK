// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef RID_H
#define RID_H

#include "api/gdnative/rid.h"

namespace Rebel {
class Object;

class RID {
public:
    RID();
    RID(const Object* object);

    int32_t get_id() const;
    rebel_rid _get_rebel_rid() const;

    bool is_valid() const;

private:
    rebel_rid internal_rid;
};

bool operator==(const RID& left, const RID& right);
bool operator!=(const RID& left, const RID& right);
bool operator<(const RID& left, const RID& right);
bool operator<=(const RID& left, const RID& right);
bool operator>(const RID& left, const RID& right);
bool operator>=(const RID& left, const RID& right);
} // namespace Rebel

#endif // RID_H
