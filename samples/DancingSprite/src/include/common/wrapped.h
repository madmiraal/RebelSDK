// SPDX-FileCopyrightText: 2023 Rebel Engine contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef WRAPPED_HPP
#define WRAPPED_HPP

#include "api/gdnative/gdnative.h"

namespace Rebel {

// This is an internal base class used by the bindings. You should not need to access its members.
class _Wrapped {
public:
	godot_object *_owner;
	size_t _type_tag;
};

} // namespace Rebel

#endif // WRAPPED_HPP
