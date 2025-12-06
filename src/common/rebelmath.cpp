// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
// SPDX-FileCopyrightText: 2014-2022 Godot Engine contributors
// SPDX-FileCopyrightText: 2007-2014 Juan Linietsky, Ariel Manzur
//
// SPDX-License-Identifier: MIT

#include "common/rebelmath.h"

#include <cmath>

namespace Rebel {
namespace Math {
bool is_equal_approx(const real_t left, const real_t right) {
    // Check for exact equality first, required to handle "infinity" values.
    if (left == right) {
        return true;
    }
    // Then check for approximate equality.
    real_t tolerance = CMP_EPSILON * std::abs(left);
    if (tolerance < CMP_EPSILON) {
        tolerance = CMP_EPSILON;
    }
    return std::abs(left - right) < tolerance;
}

bool is_equal_approx(
    const real_t left,
    const real_t right,
    const real_t tolerance
) {
    // Check for exact equality first, required to handle "infinity" values.
    if (left == right) {
        return true;
    }
    // Then check for approximate equality.
    return std::abs(left - right) < tolerance;
}

bool is_zero_approx(const real_t value) {
    return std::abs(value) < CMP_EPSILON;
}

int64_t wrapi(
    const int64_t value,
    const int64_t minimum,
    const int64_t maximum
) {
    const int64_t range = maximum - minimum;
    if (range == 0) {
        return minimum;
    }
    return minimum + ((value - minimum) % range + range) % range;
}

float wrapf(const real_t value, const real_t minimum, const real_t maximum) {
    const real_t range = maximum - minimum;
    if (is_zero_approx(range)) {
        return minimum;
    }
    return value - range * std::floor((value - minimum) / range);
}

unsigned int next_power_of_2(const unsigned int x) {
    if (x == 0) {
        return 0;
    }
    unsigned int result  = x - 1;
    result              |= result >> 1;
    result              |= result >> 2;
    result              |= result >> 4;
    result              |= result >> 8;
    result              |= result >> 16;
    return result + 1;
}

double deg2rad(const double degrees) {
    return degrees * Math_PI / 180;
}

float deg2rad(const float degrees) {
    return degrees * static_cast<float>(Math_PI) / 180;
}

double rad2deg(const double radians) {
    return radians * 180 / Math_PI;
}

float rad2deg(const float radians) {
    return radians * 180 / static_cast<float>(Math_PI);
}

double move_toward(const double from, const double to, const double step) {
    if (std::abs(to - from) <= step) {
        return to;
    }
    return from + sign(to - from) * step;
}

float move_toward(const float from, const float to, const float step) {
    if (std::abs(to - from) <= step) {
        return to;
    }
    return from + sign(to - from) * step;
}

double lerp(const double from, const double to, const double factor) {
    return from + factor * (to - from);
}

float lerp(const float from, const float to, const float factor) {
    return from + factor * (to - from);
}

double inverse_lerp(const double from, const double to, const double value) {
    return (value - from) / (to - from);
}

float inverse_lerp(const float from, const float to, const float value) {
    return (value - from) / (to - from);
}

double lerangle(const double from, const double to, const double factor) {
    const double difference = std::fmod(to - from, Math_TAU);
    const double distance = std::fmod(2.0 * difference, Math_TAU) - difference;
    return from + distance * factor;
}

float lerangle(const float from, const float to, const float factor) {
    const float difference = std::fmod(to - from, static_cast<float>(Math_TAU));
    const float distance =
        std::fmod(2 * difference, static_cast<float>(Math_TAU)) - difference;
    return from + distance * factor;
}

double range_lerp(
    const double value,
    const double range_start,
    const double range_stop,
    const double from,
    const double to
) {
    return lerp(from, to, inverse_lerp(range_start, range_stop, value));
}

float range_lerp(
    const float value,
    const float range_start,
    const float range_stop,
    const float from,
    const float to
) {
    return lerp(from, to, inverse_lerp(range_start, range_stop, value));
}

double smoothstep(const double from, const double to, const double factor) {
    if (is_equal_approx(from, to)) {
        return from;
    }
    const double x = clamp((factor - from) / (to - from), 0.0, 1.0);
    return x * x * (3 - 2 * x);
}

float smoothstep(const float from, const float to, const float factor) {
    if (is_equal_approx(from, to)) {
        return from;
    }
    const float x = clamp((factor - from) / (to - from), 0.f, 1.f);
    return x * x * (3 - 2 * x);
}

double stepify(const double value, const double step) {
    if (step == 0) {
        return value;
    }
    return std::floor(value / step + 0.5) * step;
}

float stepify(const float value, const float step) {
    if (step == 0) {
        return value;
    }
    return std::floor(value / step + 0.5f) * step;
}

double linear2db(const double linear) {
    return std::log(linear) * 8.6858896380650365530225783783321;
}

float linear2db(const float linear) {
    return std::log(linear) * 8.6858896380650365530225783783321f;
}

double db2linear(const double db) {
    return std::exp(db * 0.11512925464970228420089957273422);
}

float db2linear(const float db) {
    return std::exp(db * 0.11512925464970228420089957273422f);
}
} // namespace Math
} // namespace Rebel
