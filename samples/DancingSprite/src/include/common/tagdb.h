// SPDX-FileCopyrightText: 2023 Rebel Engine contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef TAGDB_H
#define TAGDB_H

#include <stddef.h>

namespace Rebel {
namespace TagDB {

void register_type(size_t type_tag, size_t base_type_tag);
bool is_type_known(size_t type_tag);
void register_global_type(const char *name, size_t type_tag, size_t base_type_tag);
bool is_type_compatible(size_t type_tag, size_t base_type_tag);

} // namespace TagDB
} // namespace Rebel

#endif // TAGDB_H
