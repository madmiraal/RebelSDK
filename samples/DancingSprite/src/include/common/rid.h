// SPDX-FileCopyrightText: 2023 Rebel Engine contributors
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
	godot_rid _godot_rid;

public:
	RID();

	RID(Object *p);

	godot_rid _get_godot_rid() const;

	int32_t get_id() const;

	inline bool is_valid() const {
		// is_valid() is not available in the C API...
		return *this != RID();
	}

	bool operator==(const RID &p_other) const;
	bool operator!=(const RID &p_other) const;
	bool operator<(const RID &p_other) const;
	bool operator>(const RID &p_other) const;
	bool operator<=(const RID &p_other) const;
	bool operator>=(const RID &p_other) const;
};

} // namespace Rebel

#endif // RID_H
