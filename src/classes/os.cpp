// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#include "classes/os.h"

#include "classes/icalls.h"
#include "classes/image.h"
#include "common/rebel.h"
#include "common/rebelglobal.h"

namespace Rebel {
void OS::alert(const String text, const String title) {
    rebel_icall_void_string_string(
        method_bindings.mb_alert,
        (const Object*)this,
        text,
        title
    );
}

bool OS::can_draw() const {
    return rebel_icall_bool(
        method_bindings.mb_can_draw,
        (const Object*)this
    );
}

bool OS::can_use_threads() const {
    return rebel_icall_bool(
        method_bindings.mb_can_use_threads,
        (const Object*)this
    );
}

void OS::center_window() {
    rebel_icall_void(
        method_bindings.mb_center_window,
        (const Object*)this
    );
}

void OS::close_midi_inputs() {
    rebel_icall_void(
        method_bindings.mb_close_midi_inputs,
        (const Object*)this
    );
}

void OS::delay_msec(const int64_t msec) const {
    rebel_icall_void_int(
        method_bindings.mb_delay_msec,
        (const Object*)this,
        msec
    );
}

void OS::delay_usec(const int64_t usec) const {
    rebel_icall_void_int(
        method_bindings.mb_delay_usec,
        (const Object*)this,
        usec
    );
}

void OS::dump_memory_to_file(const String file) {
    rebel_icall_void_string(
        method_bindings.mb_dump_memory_to_file,
        (const Object*)this,
        file
    );
}

void OS::dump_resources_to_file(const String file) {
    rebel_icall_void_string(
        method_bindings.mb_dump_resources_to_file,
        (const Object*)this,
        file
    );
}

int64_t OS::execute(const String path, const PoolStringArray arguments, const bool blocking, const Array output, const bool read_stderr) {
    return rebel_icall_int_string_poolstringarray_bool_array_bool(
        method_bindings.mb_execute,
        (const Object*)this,
        path,
        arguments,
        blocking,
        output,
        read_stderr
    );
}

int64_t OS::find_scancode_from_string(const String string) const {
    return rebel_icall_int_string(
        method_bindings.mb_find_scancode_from_string,
        (const Object*)this,
        string
    );
}

int64_t OS::get_audio_driver_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_audio_driver_count,
        (const Object*)this
    );
}

String OS::get_audio_driver_name(const int64_t driver) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_audio_driver_name,
        (const Object*)this,
        driver
    );
}

bool OS::get_borderless_window() const {
    return rebel_icall_bool(
        method_bindings.mb_get_borderless_window,
        (const Object*)this
    );
}

String OS::get_cache_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_cache_dir,
        (const Object*)this
    );
}

String OS::get_clipboard() const {
    return rebel_icall_string(
        method_bindings.mb_get_clipboard,
        (const Object*)this
    );
}

PoolStringArray OS::get_cmdline_args() {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_cmdline_args,
        (const Object*)this
    );
}

String OS::get_config_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_config_dir,
        (const Object*)this
    );
}

PoolStringArray OS::get_connected_midi_inputs() {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_connected_midi_inputs,
        (const Object*)this
    );
}

int64_t OS::get_current_screen() const {
    return rebel_icall_int(
        method_bindings.mb_get_current_screen,
        (const Object*)this
    );
}

String OS::get_current_tablet_driver() const {
    return rebel_icall_string(
        method_bindings.mb_get_current_tablet_driver,
        (const Object*)this
    );
}

OS::VideoDriver OS::get_current_video_driver() const {
    return (OS::VideoDriver)rebel_icall_int(
        method_bindings.mb_get_current_video_driver,
        (const Object*)this
    );
}

String OS::get_data_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_data_dir,
        (const Object*)this
    );
}

Dictionary OS::get_date(const bool utc) const {
    return rebel_icall_dictionary_bool(
        method_bindings.mb_get_date,
        (const Object*)this,
        utc
    );
}

Dictionary OS::get_datetime(const bool utc) const {
    return rebel_icall_dictionary_bool(
        method_bindings.mb_get_datetime,
        (const Object*)this,
        utc
    );
}

Dictionary OS::get_datetime_from_unix_time(const int64_t unix_time_val) const {
    return rebel_icall_dictionary_int(
        method_bindings.mb_get_datetime_from_unix_time,
        (const Object*)this,
        unix_time_val
    );
}

int64_t OS::get_dynamic_memory_usage() const {
    return rebel_icall_int(
        method_bindings.mb_get_dynamic_memory_usage,
        (const Object*)this
    );
}

String OS::get_environment(const String variable) const {
    return rebel_icall_string_string(
        method_bindings.mb_get_environment,
        (const Object*)this,
        variable
    );
}

String OS::get_executable_path() const {
    return rebel_icall_string(
        method_bindings.mb_get_executable_path,
        (const Object*)this
    );
}

int64_t OS::get_exit_code() const {
    return rebel_icall_int(
        method_bindings.mb_get_exit_code,
        (const Object*)this
    );
}

PoolStringArray OS::get_granted_permissions() const {
    return rebel_icall_poolstringarray(
        method_bindings.mb_get_granted_permissions,
        (const Object*)this
    );
}

Vector2 OS::get_ime_selection() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_ime_selection,
        (const Object*)this
    );
}

String OS::get_ime_text() const {
    return rebel_icall_string(
        method_bindings.mb_get_ime_text,
        (const Object*)this
    );
}

String OS::get_latin_keyboard_variant() const {
    return rebel_icall_string(
        method_bindings.mb_get_latin_keyboard_variant,
        (const Object*)this
    );
}

String OS::get_locale() const {
    return rebel_icall_string(
        method_bindings.mb_get_locale,
        (const Object*)this
    );
}

String OS::get_locale_language() const {
    return rebel_icall_string(
        method_bindings.mb_get_locale_language,
        (const Object*)this
    );
}

int64_t OS::get_low_processor_usage_mode_sleep_usec() const {
    return rebel_icall_int(
        method_bindings.mb_get_low_processor_usage_mode_sleep_usec,
        (const Object*)this
    );
}

Vector2 OS::get_max_window_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_max_window_size,
        (const Object*)this
    );
}

Vector2 OS::get_min_window_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_min_window_size,
        (const Object*)this
    );
}

String OS::get_model_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_model_name,
        (const Object*)this
    );
}

String OS::get_name() const {
    return rebel_icall_string(
        method_bindings.mb_get_name,
        (const Object*)this
    );
}

int64_t OS::get_native_handle(const int64_t handle_type) {
    return rebel_icall_int_int(
        method_bindings.mb_get_native_handle,
        (const Object*)this,
        handle_type
    );
}

int64_t OS::get_power_percent_left() {
    return rebel_icall_int(
        method_bindings.mb_get_power_percent_left,
        (const Object*)this
    );
}

int64_t OS::get_power_seconds_left() {
    return rebel_icall_int(
        method_bindings.mb_get_power_seconds_left,
        (const Object*)this
    );
}

OS::PowerState OS::get_power_state() {
    return (OS::PowerState)rebel_icall_int(
        method_bindings.mb_get_power_state,
        (const Object*)this
    );
}

int64_t OS::get_process_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_process_id,
        (const Object*)this
    );
}

int64_t OS::get_processor_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_processor_count,
        (const Object*)this
    );
}

Vector2 OS::get_real_window_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_real_window_size,
        (const Object*)this
    );
}

String OS::get_scancode_string(const int64_t code) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_scancode_string,
        (const Object*)this,
        code
    );
}

int64_t OS::get_screen_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_screen_count,
        (const Object*)this
    );
}

int64_t OS::get_screen_dpi(const int64_t screen) const {
    return rebel_icall_int_int(
        method_bindings.mb_get_screen_dpi,
        (const Object*)this,
        screen
    );
}

real_t OS::get_screen_max_scale() const {
    return rebel_icall_float(
        method_bindings.mb_get_screen_max_scale,
        (const Object*)this
    );
}

OS::ScreenOrientation OS::get_screen_orientation() const {
    return (OS::ScreenOrientation)rebel_icall_int(
        method_bindings.mb_get_screen_orientation,
        (const Object*)this
    );
}

Vector2 OS::get_screen_position(const int64_t screen) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_screen_position,
        (const Object*)this,
        screen
    );
}

real_t OS::get_screen_scale(const int64_t screen) const {
    return rebel_icall_float_int(
        method_bindings.mb_get_screen_scale,
        (const Object*)this,
        screen
    );
}

Vector2 OS::get_screen_size(const int64_t screen) const {
    return rebel_icall_vector2_int(
        method_bindings.mb_get_screen_size,
        (const Object*)this,
        screen
    );
}

int64_t OS::get_splash_tick_msec() const {
    return rebel_icall_int(
        method_bindings.mb_get_splash_tick_msec,
        (const Object*)this
    );
}

int64_t OS::get_static_memory_peak_usage() const {
    return rebel_icall_int(
        method_bindings.mb_get_static_memory_peak_usage,
        (const Object*)this
    );
}

int64_t OS::get_static_memory_usage() const {
    return rebel_icall_int(
        method_bindings.mb_get_static_memory_usage,
        (const Object*)this
    );
}

String OS::get_system_dir(const int64_t dir, const bool shared_storage) const {
    return rebel_icall_string_int_bool(
        method_bindings.mb_get_system_dir,
        (const Object*)this,
        dir,
        shared_storage
    );
}

int64_t OS::get_system_time_msecs() const {
    return rebel_icall_int(
        method_bindings.mb_get_system_time_msecs,
        (const Object*)this
    );
}

int64_t OS::get_system_time_secs() const {
    return rebel_icall_int(
        method_bindings.mb_get_system_time_secs,
        (const Object*)this
    );
}

int64_t OS::get_tablet_driver_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_tablet_driver_count,
        (const Object*)this
    );
}

String OS::get_tablet_driver_name(const int64_t idx) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_tablet_driver_name,
        (const Object*)this,
        idx
    );
}

int64_t OS::get_thread_caller_id() const {
    return rebel_icall_int(
        method_bindings.mb_get_thread_caller_id,
        (const Object*)this
    );
}

int64_t OS::get_ticks_msec() const {
    return rebel_icall_int(
        method_bindings.mb_get_ticks_msec,
        (const Object*)this
    );
}

int64_t OS::get_ticks_usec() const {
    return rebel_icall_int(
        method_bindings.mb_get_ticks_usec,
        (const Object*)this
    );
}

Dictionary OS::get_time(const bool utc) const {
    return rebel_icall_dictionary_bool(
        method_bindings.mb_get_time,
        (const Object*)this,
        utc
    );
}

Dictionary OS::get_time_zone_info() const {
    return rebel_icall_dictionary(
        method_bindings.mb_get_time_zone_info,
        (const Object*)this
    );
}

String OS::get_unique_id() const {
    return rebel_icall_string(
        method_bindings.mb_get_unique_id,
        (const Object*)this
    );
}

int64_t OS::get_unix_time() const {
    return rebel_icall_int(
        method_bindings.mb_get_unix_time,
        (const Object*)this
    );
}

int64_t OS::get_unix_time_from_datetime(const Dictionary datetime) const {
    return rebel_icall_int_dictionary(
        method_bindings.mb_get_unix_time_from_datetime,
        (const Object*)this,
        datetime
    );
}

String OS::get_user_data_dir() const {
    return rebel_icall_string(
        method_bindings.mb_get_user_data_dir,
        (const Object*)this
    );
}

int64_t OS::get_video_driver_count() const {
    return rebel_icall_int(
        method_bindings.mb_get_video_driver_count,
        (const Object*)this
    );
}

String OS::get_video_driver_name(const int64_t driver) const {
    return rebel_icall_string_int(
        method_bindings.mb_get_video_driver_name,
        (const Object*)this,
        driver
    );
}

int64_t OS::get_virtual_keyboard_height() {
    return rebel_icall_int(
        method_bindings.mb_get_virtual_keyboard_height,
        (const Object*)this
    );
}

bool OS::get_window_per_pixel_transparency_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_get_window_per_pixel_transparency_enabled,
        (const Object*)this
    );
}

Vector2 OS::get_window_position() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_window_position,
        (const Object*)this
    );
}

Rect2 OS::get_window_safe_area() const {
    return rebel_icall_rect2(
        method_bindings.mb_get_window_safe_area,
        (const Object*)this
    );
}

Vector2 OS::get_window_size() const {
    return rebel_icall_vector2(
        method_bindings.mb_get_window_size,
        (const Object*)this
    );
}

void OS::global_menu_add_item(const String menu, const String label, const Variant id, const Variant meta) {
    rebel_icall_void_string_string_variant_variant(
        method_bindings.mb_global_menu_add_item,
        (const Object*)this,
        menu,
        label,
        id,
        meta
    );
}

void OS::global_menu_add_separator(const String menu) {
    rebel_icall_void_string(
        method_bindings.mb_global_menu_add_separator,
        (const Object*)this,
        menu
    );
}

void OS::global_menu_clear(const String menu) {
    rebel_icall_void_string(
        method_bindings.mb_global_menu_clear,
        (const Object*)this,
        menu
    );
}

void OS::global_menu_remove_item(const String menu, const int64_t idx) {
    rebel_icall_void_string_int(
        method_bindings.mb_global_menu_remove_item,
        (const Object*)this,
        menu,
        idx
    );
}

bool OS::has_environment(const String variable) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_environment,
        (const Object*)this,
        variable
    );
}

bool OS::has_feature(const String tag_name) const {
    return rebel_icall_bool_string(
        method_bindings.mb_has_feature,
        (const Object*)this,
        tag_name
    );
}

bool OS::has_touchscreen_ui_hint() const {
    return rebel_icall_bool(
        method_bindings.mb_has_touchscreen_ui_hint,
        (const Object*)this
    );
}

bool OS::has_virtual_keyboard() const {
    return rebel_icall_bool(
        method_bindings.mb_has_virtual_keyboard,
        (const Object*)this
    );
}

void OS::hide_virtual_keyboard() {
    rebel_icall_void(
        method_bindings.mb_hide_virtual_keyboard,
        (const Object*)this
    );
}

bool OS::is_debug_build() const {
    return rebel_icall_bool(
        method_bindings.mb_is_debug_build,
        (const Object*)this
    );
}

bool OS::is_delta_smoothing_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_delta_smoothing_enabled,
        (const Object*)this
    );
}

bool OS::is_in_low_processor_usage_mode() const {
    return rebel_icall_bool(
        method_bindings.mb_is_in_low_processor_usage_mode,
        (const Object*)this
    );
}

bool OS::is_keep_screen_on() const {
    return rebel_icall_bool(
        method_bindings.mb_is_keep_screen_on,
        (const Object*)this
    );
}

bool OS::is_ok_left_and_cancel_right() const {
    return rebel_icall_bool(
        method_bindings.mb_is_ok_left_and_cancel_right,
        (const Object*)this
    );
}

bool OS::is_scancode_unicode(const int64_t code) const {
    return rebel_icall_bool_int(
        method_bindings.mb_is_scancode_unicode,
        (const Object*)this,
        code
    );
}

bool OS::is_stdout_verbose() const {
    return rebel_icall_bool(
        method_bindings.mb_is_stdout_verbose,
        (const Object*)this
    );
}

bool OS::is_userfs_persistent() const {
    return rebel_icall_bool(
        method_bindings.mb_is_userfs_persistent,
        (const Object*)this
    );
}

bool OS::is_vsync_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_vsync_enabled,
        (const Object*)this
    );
}

bool OS::is_vsync_via_compositor_enabled() const {
    return rebel_icall_bool(
        method_bindings.mb_is_vsync_via_compositor_enabled,
        (const Object*)this
    );
}

bool OS::is_window_always_on_top() const {
    return rebel_icall_bool(
        method_bindings.mb_is_window_always_on_top,
        (const Object*)this
    );
}

bool OS::is_window_focused() const {
    return rebel_icall_bool(
        method_bindings.mb_is_window_focused,
        (const Object*)this
    );
}

bool OS::is_window_fullscreen() const {
    return rebel_icall_bool(
        method_bindings.mb_is_window_fullscreen,
        (const Object*)this
    );
}

bool OS::is_window_maximized() const {
    return rebel_icall_bool(
        method_bindings.mb_is_window_maximized,
        (const Object*)this
    );
}

bool OS::is_window_minimized() const {
    return rebel_icall_bool(
        method_bindings.mb_is_window_minimized,
        (const Object*)this
    );
}

bool OS::is_window_resizable() const {
    return rebel_icall_bool(
        method_bindings.mb_is_window_resizable,
        (const Object*)this
    );
}

int64_t OS::keyboard_get_current_layout() const {
    return rebel_icall_int(
        method_bindings.mb_keyboard_get_current_layout,
        (const Object*)this
    );
}

int64_t OS::keyboard_get_layout_count() const {
    return rebel_icall_int(
        method_bindings.mb_keyboard_get_layout_count,
        (const Object*)this
    );
}

String OS::keyboard_get_layout_language(const int64_t index) const {
    return rebel_icall_string_int(
        method_bindings.mb_keyboard_get_layout_language,
        (const Object*)this,
        index
    );
}

String OS::keyboard_get_layout_name(const int64_t index) const {
    return rebel_icall_string_int(
        method_bindings.mb_keyboard_get_layout_name,
        (const Object*)this,
        index
    );
}

void OS::keyboard_set_current_layout(const int64_t index) {
    rebel_icall_void_int(
        method_bindings.mb_keyboard_set_current_layout,
        (const Object*)this,
        index
    );
}

Error OS::kill(const int64_t pid) {
    return (Error)rebel_icall_int_int(
        method_bindings.mb_kill,
        (const Object*)this,
        pid
    );
}

void OS::move_window_to_foreground() {
    rebel_icall_void(
        method_bindings.mb_move_window_to_foreground,
        (const Object*)this
    );
}

bool OS::native_video_is_playing() {
    return rebel_icall_bool(
        method_bindings.mb_native_video_is_playing,
        (const Object*)this
    );
}

void OS::native_video_pause() {
    rebel_icall_void(
        method_bindings.mb_native_video_pause,
        (const Object*)this
    );
}

Error OS::native_video_play(const String path, const real_t volume, const String audio_track, const String subtitle_track) {
    return (Error)rebel_icall_int_string_float_string_string(
        method_bindings.mb_native_video_play,
        (const Object*)this,
        path,
        volume,
        audio_track,
        subtitle_track
    );
}

void OS::native_video_stop() {
    rebel_icall_void(
        method_bindings.mb_native_video_stop,
        (const Object*)this
    );
}

void OS::native_video_unpause() {
    rebel_icall_void(
        method_bindings.mb_native_video_unpause,
        (const Object*)this
    );
}

void OS::open_midi_inputs() {
    rebel_icall_void(
        method_bindings.mb_open_midi_inputs,
        (const Object*)this
    );
}

void OS::print_all_resources(const String tofile) {
    rebel_icall_void_string(
        method_bindings.mb_print_all_resources,
        (const Object*)this,
        tofile
    );
}

void OS::print_all_textures_by_size() {
    rebel_icall_void(
        method_bindings.mb_print_all_textures_by_size,
        (const Object*)this
    );
}

void OS::print_resources_by_type(const PoolStringArray types) {
    rebel_icall_void_poolstringarray(
        method_bindings.mb_print_resources_by_type,
        (const Object*)this,
        types
    );
}

void OS::print_resources_in_use(const bool _short) {
    rebel_icall_void_bool(
        method_bindings.mb_print_resources_in_use,
        (const Object*)this,
        _short
    );
}

void OS::request_attention() {
    rebel_icall_void(
        method_bindings.mb_request_attention,
        (const Object*)this
    );
}

bool OS::request_permission(const String name) {
    return rebel_icall_bool_string(
        method_bindings.mb_request_permission,
        (const Object*)this,
        name
    );
}

bool OS::request_permissions() {
    return rebel_icall_bool(
        method_bindings.mb_request_permissions,
        (const Object*)this
    );
}

void OS::set_borderless_window(const bool borderless) {
    rebel_icall_void_bool(
        method_bindings.mb_set_borderless_window,
        (const Object*)this,
        borderless
    );
}

void OS::set_clipboard(const String clipboard) {
    rebel_icall_void_string(
        method_bindings.mb_set_clipboard,
        (const Object*)this,
        clipboard
    );
}

void OS::set_current_screen(const int64_t screen) {
    rebel_icall_void_int(
        method_bindings.mb_set_current_screen,
        (const Object*)this,
        screen
    );
}

void OS::set_current_tablet_driver(const String name) {
    rebel_icall_void_string(
        method_bindings.mb_set_current_tablet_driver,
        (const Object*)this,
        name
    );
}

void OS::set_delta_smoothing(const bool delta_smoothing_enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_delta_smoothing,
        (const Object*)this,
        delta_smoothing_enabled
    );
}

bool OS::set_environment(const String variable, const String value) const {
    return rebel_icall_bool_string_string(
        method_bindings.mb_set_environment,
        (const Object*)this,
        variable,
        value
    );
}

void OS::set_exit_code(const int64_t code) {
    rebel_icall_void_int(
        method_bindings.mb_set_exit_code,
        (const Object*)this,
        code
    );
}

void OS::set_icon(const Ref<Image> icon) {
    rebel_icall_void_object(
        method_bindings.mb_set_icon,
        (const Object*)this,
        icon.ptr()
    );
}

void OS::set_ime_active(const bool active) {
    rebel_icall_void_bool(
        method_bindings.mb_set_ime_active,
        (const Object*)this,
        active
    );
}

void OS::set_ime_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_ime_position,
        (const Object*)this,
        position
    );
}

void OS::set_keep_screen_on(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_keep_screen_on,
        (const Object*)this,
        enabled
    );
}

void OS::set_low_processor_usage_mode(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_low_processor_usage_mode,
        (const Object*)this,
        enable
    );
}

void OS::set_low_processor_usage_mode_sleep_usec(const int64_t usec) {
    rebel_icall_void_int(
        method_bindings.mb_set_low_processor_usage_mode_sleep_usec,
        (const Object*)this,
        usec
    );
}

void OS::set_max_window_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_max_window_size,
        (const Object*)this,
        size
    );
}

void OS::set_min_window_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_min_window_size,
        (const Object*)this,
        size
    );
}

void OS::set_native_icon(const String filename) {
    rebel_icall_void_string(
        method_bindings.mb_set_native_icon,
        (const Object*)this,
        filename
    );
}

void OS::set_screen_orientation(const int64_t orientation) {
    rebel_icall_void_int(
        method_bindings.mb_set_screen_orientation,
        (const Object*)this,
        orientation
    );
}

Error OS::set_thread_name(const String name) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_set_thread_name,
        (const Object*)this,
        name
    );
}

void OS::set_use_file_access_save_and_swap(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_file_access_save_and_swap,
        (const Object*)this,
        enabled
    );
}

void OS::set_use_vsync(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_use_vsync,
        (const Object*)this,
        enable
    );
}

void OS::set_vsync_via_compositor(const bool enable) {
    rebel_icall_void_bool(
        method_bindings.mb_set_vsync_via_compositor,
        (const Object*)this,
        enable
    );
}

void OS::set_window_always_on_top(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_window_always_on_top,
        (const Object*)this,
        enabled
    );
}

void OS::set_window_fullscreen(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_window_fullscreen,
        (const Object*)this,
        enabled
    );
}

void OS::set_window_maximized(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_window_maximized,
        (const Object*)this,
        enabled
    );
}

void OS::set_window_minimized(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_window_minimized,
        (const Object*)this,
        enabled
    );
}

void OS::set_window_mouse_passthrough(const PoolVector2Array region) {
    rebel_icall_void_poolvector2array(
        method_bindings.mb_set_window_mouse_passthrough,
        (const Object*)this,
        region
    );
}

void OS::set_window_per_pixel_transparency_enabled(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_window_per_pixel_transparency_enabled,
        (const Object*)this,
        enabled
    );
}

void OS::set_window_position(const Vector2 position) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_window_position,
        (const Object*)this,
        position
    );
}

void OS::set_window_resizable(const bool enabled) {
    rebel_icall_void_bool(
        method_bindings.mb_set_window_resizable,
        (const Object*)this,
        enabled
    );
}

void OS::set_window_size(const Vector2 size) {
    rebel_icall_void_vector2(
        method_bindings.mb_set_window_size,
        (const Object*)this,
        size
    );
}

void OS::set_window_title(const String title) {
    rebel_icall_void_string(
        method_bindings.mb_set_window_title,
        (const Object*)this,
        title
    );
}

Error OS::shell_open(const String uri) {
    return (Error)rebel_icall_int_string(
        method_bindings.mb_shell_open,
        (const Object*)this,
        uri
    );
}

void OS::show_virtual_keyboard(const String existing_text, const bool multiline) {
    rebel_icall_void_string_bool(
        method_bindings.mb_show_virtual_keyboard,
        (const Object*)this,
        existing_text,
        multiline
    );
}

OS* OS::singleton = nullptr;

OS::OS() {
    owner = api->rebel_global_get_singleton((char*) "OS");
}

void OS::init_method_bindings() {
    method_bindings.mb_alert =
        api->rebel_method_bind_get_method(
            "_OS",
            "alert"
        );
    method_bindings.mb_can_draw =
        api->rebel_method_bind_get_method(
            "_OS",
            "can_draw"
        );
    method_bindings.mb_can_use_threads =
        api->rebel_method_bind_get_method(
            "_OS",
            "can_use_threads"
        );
    method_bindings.mb_center_window =
        api->rebel_method_bind_get_method(
            "_OS",
            "center_window"
        );
    method_bindings.mb_close_midi_inputs =
        api->rebel_method_bind_get_method(
            "_OS",
            "close_midi_inputs"
        );
    method_bindings.mb_delay_msec =
        api->rebel_method_bind_get_method(
            "_OS",
            "delay_msec"
        );
    method_bindings.mb_delay_usec =
        api->rebel_method_bind_get_method(
            "_OS",
            "delay_usec"
        );
    method_bindings.mb_dump_memory_to_file =
        api->rebel_method_bind_get_method(
            "_OS",
            "dump_memory_to_file"
        );
    method_bindings.mb_dump_resources_to_file =
        api->rebel_method_bind_get_method(
            "_OS",
            "dump_resources_to_file"
        );
    method_bindings.mb_execute =
        api->rebel_method_bind_get_method(
            "_OS",
            "execute"
        );
    method_bindings.mb_find_scancode_from_string =
        api->rebel_method_bind_get_method(
            "_OS",
            "find_scancode_from_string"
        );
    method_bindings.mb_get_audio_driver_count =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_audio_driver_count"
        );
    method_bindings.mb_get_audio_driver_name =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_audio_driver_name"
        );
    method_bindings.mb_get_borderless_window =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_borderless_window"
        );
    method_bindings.mb_get_cache_dir =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_cache_dir"
        );
    method_bindings.mb_get_clipboard =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_clipboard"
        );
    method_bindings.mb_get_cmdline_args =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_cmdline_args"
        );
    method_bindings.mb_get_config_dir =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_config_dir"
        );
    method_bindings.mb_get_connected_midi_inputs =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_connected_midi_inputs"
        );
    method_bindings.mb_get_current_screen =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_current_screen"
        );
    method_bindings.mb_get_current_tablet_driver =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_current_tablet_driver"
        );
    method_bindings.mb_get_current_video_driver =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_current_video_driver"
        );
    method_bindings.mb_get_data_dir =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_data_dir"
        );
    method_bindings.mb_get_date =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_date"
        );
    method_bindings.mb_get_datetime =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_datetime"
        );
    method_bindings.mb_get_datetime_from_unix_time =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_datetime_from_unix_time"
        );
    method_bindings.mb_get_dynamic_memory_usage =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_dynamic_memory_usage"
        );
    method_bindings.mb_get_environment =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_environment"
        );
    method_bindings.mb_get_executable_path =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_executable_path"
        );
    method_bindings.mb_get_exit_code =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_exit_code"
        );
    method_bindings.mb_get_granted_permissions =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_granted_permissions"
        );
    method_bindings.mb_get_ime_selection =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_ime_selection"
        );
    method_bindings.mb_get_ime_text =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_ime_text"
        );
    method_bindings.mb_get_latin_keyboard_variant =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_latin_keyboard_variant"
        );
    method_bindings.mb_get_locale =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_locale"
        );
    method_bindings.mb_get_locale_language =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_locale_language"
        );
    method_bindings.mb_get_low_processor_usage_mode_sleep_usec =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_low_processor_usage_mode_sleep_usec"
        );
    method_bindings.mb_get_max_window_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_max_window_size"
        );
    method_bindings.mb_get_min_window_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_min_window_size"
        );
    method_bindings.mb_get_model_name =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_model_name"
        );
    method_bindings.mb_get_name =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_name"
        );
    method_bindings.mb_get_native_handle =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_native_handle"
        );
    method_bindings.mb_get_power_percent_left =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_power_percent_left"
        );
    method_bindings.mb_get_power_seconds_left =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_power_seconds_left"
        );
    method_bindings.mb_get_power_state =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_power_state"
        );
    method_bindings.mb_get_process_id =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_process_id"
        );
    method_bindings.mb_get_processor_count =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_processor_count"
        );
    method_bindings.mb_get_real_window_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_real_window_size"
        );
    method_bindings.mb_get_scancode_string =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_scancode_string"
        );
    method_bindings.mb_get_screen_count =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_screen_count"
        );
    method_bindings.mb_get_screen_dpi =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_screen_dpi"
        );
    method_bindings.mb_get_screen_max_scale =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_screen_max_scale"
        );
    method_bindings.mb_get_screen_orientation =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_screen_orientation"
        );
    method_bindings.mb_get_screen_position =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_screen_position"
        );
    method_bindings.mb_get_screen_scale =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_screen_scale"
        );
    method_bindings.mb_get_screen_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_screen_size"
        );
    method_bindings.mb_get_splash_tick_msec =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_splash_tick_msec"
        );
    method_bindings.mb_get_static_memory_peak_usage =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_static_memory_peak_usage"
        );
    method_bindings.mb_get_static_memory_usage =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_static_memory_usage"
        );
    method_bindings.mb_get_system_dir =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_system_dir"
        );
    method_bindings.mb_get_system_time_msecs =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_system_time_msecs"
        );
    method_bindings.mb_get_system_time_secs =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_system_time_secs"
        );
    method_bindings.mb_get_tablet_driver_count =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_tablet_driver_count"
        );
    method_bindings.mb_get_tablet_driver_name =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_tablet_driver_name"
        );
    method_bindings.mb_get_thread_caller_id =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_thread_caller_id"
        );
    method_bindings.mb_get_ticks_msec =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_ticks_msec"
        );
    method_bindings.mb_get_ticks_usec =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_ticks_usec"
        );
    method_bindings.mb_get_time =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_time"
        );
    method_bindings.mb_get_time_zone_info =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_time_zone_info"
        );
    method_bindings.mb_get_unique_id =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_unique_id"
        );
    method_bindings.mb_get_unix_time =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_unix_time"
        );
    method_bindings.mb_get_unix_time_from_datetime =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_unix_time_from_datetime"
        );
    method_bindings.mb_get_user_data_dir =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_user_data_dir"
        );
    method_bindings.mb_get_video_driver_count =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_video_driver_count"
        );
    method_bindings.mb_get_video_driver_name =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_video_driver_name"
        );
    method_bindings.mb_get_virtual_keyboard_height =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_virtual_keyboard_height"
        );
    method_bindings.mb_get_window_per_pixel_transparency_enabled =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_window_per_pixel_transparency_enabled"
        );
    method_bindings.mb_get_window_position =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_window_position"
        );
    method_bindings.mb_get_window_safe_area =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_window_safe_area"
        );
    method_bindings.mb_get_window_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "get_window_size"
        );
    method_bindings.mb_global_menu_add_item =
        api->rebel_method_bind_get_method(
            "_OS",
            "global_menu_add_item"
        );
    method_bindings.mb_global_menu_add_separator =
        api->rebel_method_bind_get_method(
            "_OS",
            "global_menu_add_separator"
        );
    method_bindings.mb_global_menu_clear =
        api->rebel_method_bind_get_method(
            "_OS",
            "global_menu_clear"
        );
    method_bindings.mb_global_menu_remove_item =
        api->rebel_method_bind_get_method(
            "_OS",
            "global_menu_remove_item"
        );
    method_bindings.mb_has_environment =
        api->rebel_method_bind_get_method(
            "_OS",
            "has_environment"
        );
    method_bindings.mb_has_feature =
        api->rebel_method_bind_get_method(
            "_OS",
            "has_feature"
        );
    method_bindings.mb_has_touchscreen_ui_hint =
        api->rebel_method_bind_get_method(
            "_OS",
            "has_touchscreen_ui_hint"
        );
    method_bindings.mb_has_virtual_keyboard =
        api->rebel_method_bind_get_method(
            "_OS",
            "has_virtual_keyboard"
        );
    method_bindings.mb_hide_virtual_keyboard =
        api->rebel_method_bind_get_method(
            "_OS",
            "hide_virtual_keyboard"
        );
    method_bindings.mb_is_debug_build =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_debug_build"
        );
    method_bindings.mb_is_delta_smoothing_enabled =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_delta_smoothing_enabled"
        );
    method_bindings.mb_is_in_low_processor_usage_mode =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_in_low_processor_usage_mode"
        );
    method_bindings.mb_is_keep_screen_on =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_keep_screen_on"
        );
    method_bindings.mb_is_ok_left_and_cancel_right =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_ok_left_and_cancel_right"
        );
    method_bindings.mb_is_scancode_unicode =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_scancode_unicode"
        );
    method_bindings.mb_is_stdout_verbose =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_stdout_verbose"
        );
    method_bindings.mb_is_userfs_persistent =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_userfs_persistent"
        );
    method_bindings.mb_is_vsync_enabled =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_vsync_enabled"
        );
    method_bindings.mb_is_vsync_via_compositor_enabled =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_vsync_via_compositor_enabled"
        );
    method_bindings.mb_is_window_always_on_top =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_window_always_on_top"
        );
    method_bindings.mb_is_window_focused =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_window_focused"
        );
    method_bindings.mb_is_window_fullscreen =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_window_fullscreen"
        );
    method_bindings.mb_is_window_maximized =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_window_maximized"
        );
    method_bindings.mb_is_window_minimized =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_window_minimized"
        );
    method_bindings.mb_is_window_resizable =
        api->rebel_method_bind_get_method(
            "_OS",
            "is_window_resizable"
        );
    method_bindings.mb_keyboard_get_current_layout =
        api->rebel_method_bind_get_method(
            "_OS",
            "keyboard_get_current_layout"
        );
    method_bindings.mb_keyboard_get_layout_count =
        api->rebel_method_bind_get_method(
            "_OS",
            "keyboard_get_layout_count"
        );
    method_bindings.mb_keyboard_get_layout_language =
        api->rebel_method_bind_get_method(
            "_OS",
            "keyboard_get_layout_language"
        );
    method_bindings.mb_keyboard_get_layout_name =
        api->rebel_method_bind_get_method(
            "_OS",
            "keyboard_get_layout_name"
        );
    method_bindings.mb_keyboard_set_current_layout =
        api->rebel_method_bind_get_method(
            "_OS",
            "keyboard_set_current_layout"
        );
    method_bindings.mb_kill =
        api->rebel_method_bind_get_method(
            "_OS",
            "kill"
        );
    method_bindings.mb_move_window_to_foreground =
        api->rebel_method_bind_get_method(
            "_OS",
            "move_window_to_foreground"
        );
    method_bindings.mb_native_video_is_playing =
        api->rebel_method_bind_get_method(
            "_OS",
            "native_video_is_playing"
        );
    method_bindings.mb_native_video_pause =
        api->rebel_method_bind_get_method(
            "_OS",
            "native_video_pause"
        );
    method_bindings.mb_native_video_play =
        api->rebel_method_bind_get_method(
            "_OS",
            "native_video_play"
        );
    method_bindings.mb_native_video_stop =
        api->rebel_method_bind_get_method(
            "_OS",
            "native_video_stop"
        );
    method_bindings.mb_native_video_unpause =
        api->rebel_method_bind_get_method(
            "_OS",
            "native_video_unpause"
        );
    method_bindings.mb_open_midi_inputs =
        api->rebel_method_bind_get_method(
            "_OS",
            "open_midi_inputs"
        );
    method_bindings.mb_print_all_resources =
        api->rebel_method_bind_get_method(
            "_OS",
            "print_all_resources"
        );
    method_bindings.mb_print_all_textures_by_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "print_all_textures_by_size"
        );
    method_bindings.mb_print_resources_by_type =
        api->rebel_method_bind_get_method(
            "_OS",
            "print_resources_by_type"
        );
    method_bindings.mb_print_resources_in_use =
        api->rebel_method_bind_get_method(
            "_OS",
            "print_resources_in_use"
        );
    method_bindings.mb_request_attention =
        api->rebel_method_bind_get_method(
            "_OS",
            "request_attention"
        );
    method_bindings.mb_request_permission =
        api->rebel_method_bind_get_method(
            "_OS",
            "request_permission"
        );
    method_bindings.mb_request_permissions =
        api->rebel_method_bind_get_method(
            "_OS",
            "request_permissions"
        );
    method_bindings.mb_set_borderless_window =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_borderless_window"
        );
    method_bindings.mb_set_clipboard =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_clipboard"
        );
    method_bindings.mb_set_current_screen =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_current_screen"
        );
    method_bindings.mb_set_current_tablet_driver =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_current_tablet_driver"
        );
    method_bindings.mb_set_delta_smoothing =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_delta_smoothing"
        );
    method_bindings.mb_set_environment =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_environment"
        );
    method_bindings.mb_set_exit_code =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_exit_code"
        );
    method_bindings.mb_set_icon =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_icon"
        );
    method_bindings.mb_set_ime_active =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_ime_active"
        );
    method_bindings.mb_set_ime_position =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_ime_position"
        );
    method_bindings.mb_set_keep_screen_on =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_keep_screen_on"
        );
    method_bindings.mb_set_low_processor_usage_mode =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_low_processor_usage_mode"
        );
    method_bindings.mb_set_low_processor_usage_mode_sleep_usec =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_low_processor_usage_mode_sleep_usec"
        );
    method_bindings.mb_set_max_window_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_max_window_size"
        );
    method_bindings.mb_set_min_window_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_min_window_size"
        );
    method_bindings.mb_set_native_icon =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_native_icon"
        );
    method_bindings.mb_set_screen_orientation =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_screen_orientation"
        );
    method_bindings.mb_set_thread_name =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_thread_name"
        );
    method_bindings.mb_set_use_file_access_save_and_swap =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_use_file_access_save_and_swap"
        );
    method_bindings.mb_set_use_vsync =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_use_vsync"
        );
    method_bindings.mb_set_vsync_via_compositor =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_vsync_via_compositor"
        );
    method_bindings.mb_set_window_always_on_top =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_always_on_top"
        );
    method_bindings.mb_set_window_fullscreen =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_fullscreen"
        );
    method_bindings.mb_set_window_maximized =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_maximized"
        );
    method_bindings.mb_set_window_minimized =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_minimized"
        );
    method_bindings.mb_set_window_mouse_passthrough =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_mouse_passthrough"
        );
    method_bindings.mb_set_window_per_pixel_transparency_enabled =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_per_pixel_transparency_enabled"
        );
    method_bindings.mb_set_window_position =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_position"
        );
    method_bindings.mb_set_window_resizable =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_resizable"
        );
    method_bindings.mb_set_window_size =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_size"
        );
    method_bindings.mb_set_window_title =
        api->rebel_method_bind_get_method(
            "_OS",
            "set_window_title"
        );
    method_bindings.mb_shell_open =
        api->rebel_method_bind_get_method(
            "_OS",
            "shell_open"
        );
    method_bindings.mb_show_virtual_keyboard =
        api->rebel_method_bind_get_method(
            "_OS",
            "show_virtual_keyboard"
        );

    rebel_string_name class_name;
    api->rebel_string_name_new_data(&class_name, "_OS");
    class_tag = core_1_2_api->rebel_get_class_tag(&class_name);
    api->rebel_string_name_destroy(&class_name);
}

OS::MethodBindings OS::method_bindings = {};
void* OS::class_tag = nullptr;
} // namespace Rebel
