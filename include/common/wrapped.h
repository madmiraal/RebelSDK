// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef WRAPPED_H
#define WRAPPED_H

#include "api/gdnative/gdnative.h"

namespace Rebel {
class Wrapped {
public:
    rebel_object* owner;
    size_t type_tag;
};
} // namespace Rebel

#endif // WRAPPED_H
