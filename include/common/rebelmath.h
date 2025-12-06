// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_MATH_H
#define REBEL_MATH_H

#include "common/defs.h"

namespace Rebel {
namespace Math {
template <typename T>
T min(T value1, T value2) {
    return value1 < value2 ? value1 : value2;
}

template <typename T>
T max(T value1, T value2) {
    return value1 > value2 ? value1 : value2;
}

template <typename T>
T sign(T value) {
    return static_cast<T>(value < 0 ? -1 : 1);
}

template <typename T>
T clamp(T value, T minimum, T maximum) {
    if (value < minimum) {
        return minimum;
    }
    if (value > maximum) {
        return maximum;
    }
    return value;
}

bool is_equal_approx(real_t left, real_t right);
bool is_equal_approx(real_t left, real_t right, real_t tolerance);
bool is_zero_approx(real_t value);

int64_t wrapi(int64_t value, int64_t minimum, int64_t maximum);
float wrapf(real_t value, real_t minimum, real_t maximum);

unsigned int next_power_of_2(unsigned int x);

double deg2rad(double degrees);
float deg2rad(float degrees);
double rad2deg(double radians);
float rad2deg(float radians);

double move_toward(double from, double to, double step);
float move_toward(float from, float to, float step);
double lerp(double from, double to, double factor);
float lerp(float from, float to, float factor);
double inverse_lerp(double from, double to, double value);
float inverse_lerp(float from, float to, float value);
double lerangle(double from, double to, double factor);
float lerangle(float from, float to, float factor);
double range_lerp(
    double value,
    double range_start,
    double range_stop,
    double from,
    double to
);
float range_lerp(
    float value,
    float range_start,
    float range_stop,
    float from,
    float to
);

double smoothstep(double from, double to, double factor);
float smoothstep(float from, float to, float factor);

double stepify(double value, double step);
float stepify(float value, float step);

double linear2db(double linear);
float linear2db(float linear);
double db2linear(double db);
float db2linear(float db);
} // namespace Math
} // namespace Rebel

#endif // REBEL_MATH_H
