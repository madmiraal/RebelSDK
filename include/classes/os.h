// SPDX-FileCopyrightText: 2025 Rebel SDK contributors
//
// SPDX-License-Identifier: MIT

#ifndef REBEL_OS_H
#define REBEL_OS_H

#include "api/gdnative_api_struct.gen.h"
#include "classes/object.h"
#include "classes/os.h"
#include "classes/os.h"
#include "classes/os.h"
#include "common/commontypes.h"
#include "common/ref.h"

#include <cstdint>

namespace Rebel {
class Image;

class OS : public Object {
public:
    enum VideoDriver {
        VIDEO_DRIVER_GLES3 = 0,
        VIDEO_DRIVER_GLES2 = 1,
    };

    enum SystemDir {
        SYSTEM_DIR_DESKTOP = 0,
        SYSTEM_DIR_DCIM = 1,
        SYSTEM_DIR_DOCUMENTS = 2,
        SYSTEM_DIR_DOWNLOADS = 3,
        SYSTEM_DIR_MOVIES = 4,
        SYSTEM_DIR_MUSIC = 5,
        SYSTEM_DIR_PICTURES = 6,
        SYSTEM_DIR_RINGTONES = 7,
    };

    enum ScreenOrientation {
        SCREEN_ORIENTATION_LANDSCAPE = 0,
        SCREEN_ORIENTATION_PORTRAIT = 1,
        SCREEN_ORIENTATION_REVERSE_LANDSCAPE = 2,
        SCREEN_ORIENTATION_REVERSE_PORTRAIT = 3,
        SCREEN_ORIENTATION_SENSOR_LANDSCAPE = 4,
        SCREEN_ORIENTATION_SENSOR_PORTRAIT = 5,
        SCREEN_ORIENTATION_SENSOR = 6,
    };

    enum PowerState {
        POWERSTATE_UNKNOWN = 0,
        POWERSTATE_ON_BATTERY = 1,
        POWERSTATE_NO_BATTERY = 2,
        POWERSTATE_CHARGING = 3,
        POWERSTATE_CHARGED = 4,
    };

    enum HandleType {
        APPLICATION_HANDLE = 0,
        DISPLAY_HANDLE = 1,
        WINDOW_HANDLE = 2,
        WINDOW_VIEW = 3,
        OPENGL_CONTEXT = 4,
    };

    enum Month {
        MONTH_JANUARY = 1,
        MONTH_FEBRUARY = 2,
        MONTH_MARCH = 3,
        MONTH_APRIL = 4,
        MONTH_MAY = 5,
        MONTH_JUNE = 6,
        MONTH_JULY = 7,
        MONTH_AUGUST = 8,
        MONTH_SEPTEMBER = 9,
        MONTH_OCTOBER = 10,
        MONTH_NOVEMBER = 11,
        MONTH_DECEMBER = 12,
    };

    enum Weekday {
        DAY_SUNDAY = 0,
        DAY_MONDAY = 1,
        DAY_TUESDAY = 2,
        DAY_WEDNESDAY = 3,
        DAY_THURSDAY = 4,
        DAY_FRIDAY = 5,
        DAY_SATURDAY = 6,
    };

    void alert(const String text, const String title = "Alert!");
    bool can_draw() const;
    bool can_use_threads() const;
    void center_window();
    void close_midi_inputs();
    void delay_msec(const int64_t msec) const;
    void delay_usec(const int64_t usec) const;
    void dump_memory_to_file(const String file);
    void dump_resources_to_file(const String file);
    int64_t execute(const String path, const PoolStringArray arguments, const bool blocking = true, const Array output = Array(), const bool read_stderr = false);
    int64_t find_scancode_from_string(const String string) const;
    int64_t get_audio_driver_count() const;
    String get_audio_driver_name(const int64_t driver) const;
    bool get_borderless_window() const;
    String get_cache_dir() const;
    String get_clipboard() const;
    PoolStringArray get_cmdline_args();
    String get_config_dir() const;
    PoolStringArray get_connected_midi_inputs();
    int64_t get_current_screen() const;
    String get_current_tablet_driver() const;
    OS::VideoDriver get_current_video_driver() const;
    String get_data_dir() const;
    Dictionary get_date(const bool utc = false) const;
    Dictionary get_datetime(const bool utc = false) const;
    Dictionary get_datetime_from_unix_time(const int64_t unix_time_val) const;
    int64_t get_dynamic_memory_usage() const;
    String get_environment(const String variable) const;
    String get_executable_path() const;
    int64_t get_exit_code() const;
    PoolStringArray get_granted_permissions() const;
    Vector2 get_ime_selection() const;
    String get_ime_text() const;
    String get_latin_keyboard_variant() const;
    String get_locale() const;
    String get_locale_language() const;
    int64_t get_low_processor_usage_mode_sleep_usec() const;
    Vector2 get_max_window_size() const;
    Vector2 get_min_window_size() const;
    String get_model_name() const;
    String get_name() const;
    int64_t get_native_handle(const int64_t handle_type);
    int64_t get_power_percent_left();
    int64_t get_power_seconds_left();
    OS::PowerState get_power_state();
    int64_t get_process_id() const;
    int64_t get_processor_count() const;
    Vector2 get_real_window_size() const;
    String get_scancode_string(const int64_t code) const;
    int64_t get_screen_count() const;
    int64_t get_screen_dpi(const int64_t screen = -1) const;
    real_t get_screen_max_scale() const;
    OS::ScreenOrientation get_screen_orientation() const;
    Vector2 get_screen_position(const int64_t screen = -1) const;
    real_t get_screen_scale(const int64_t screen = -1) const;
    Vector2 get_screen_size(const int64_t screen = -1) const;
    int64_t get_splash_tick_msec() const;
    int64_t get_static_memory_peak_usage() const;
    int64_t get_static_memory_usage() const;
    String get_system_dir(const int64_t dir, const bool shared_storage = true) const;
    int64_t get_system_time_msecs() const;
    int64_t get_system_time_secs() const;
    int64_t get_tablet_driver_count() const;
    String get_tablet_driver_name(const int64_t idx) const;
    int64_t get_thread_caller_id() const;
    int64_t get_ticks_msec() const;
    int64_t get_ticks_usec() const;
    Dictionary get_time(const bool utc = false) const;
    Dictionary get_time_zone_info() const;
    String get_unique_id() const;
    int64_t get_unix_time() const;
    int64_t get_unix_time_from_datetime(const Dictionary datetime) const;
    String get_user_data_dir() const;
    int64_t get_video_driver_count() const;
    String get_video_driver_name(const int64_t driver) const;
    int64_t get_virtual_keyboard_height();
    bool get_window_per_pixel_transparency_enabled() const;
    Vector2 get_window_position() const;
    Rect2 get_window_safe_area() const;
    Vector2 get_window_size() const;
    void global_menu_add_item(const String menu, const String label, const Variant id, const Variant meta);
    void global_menu_add_separator(const String menu);
    void global_menu_clear(const String menu);
    void global_menu_remove_item(const String menu, const int64_t idx);
    bool has_environment(const String variable) const;
    bool has_feature(const String tag_name) const;
    bool has_touchscreen_ui_hint() const;
    bool has_virtual_keyboard() const;
    void hide_virtual_keyboard();
    bool is_debug_build() const;
    bool is_delta_smoothing_enabled() const;
    bool is_in_low_processor_usage_mode() const;
    bool is_keep_screen_on() const;
    bool is_ok_left_and_cancel_right() const;
    bool is_scancode_unicode(const int64_t code) const;
    bool is_stdout_verbose() const;
    bool is_userfs_persistent() const;
    bool is_vsync_enabled() const;
    bool is_vsync_via_compositor_enabled() const;
    bool is_window_always_on_top() const;
    bool is_window_focused() const;
    bool is_window_fullscreen() const;
    bool is_window_maximized() const;
    bool is_window_minimized() const;
    bool is_window_resizable() const;
    int64_t keyboard_get_current_layout() const;
    int64_t keyboard_get_layout_count() const;
    String keyboard_get_layout_language(const int64_t index) const;
    String keyboard_get_layout_name(const int64_t index) const;
    void keyboard_set_current_layout(const int64_t index);
    Error kill(const int64_t pid);
    void move_window_to_foreground();
    bool native_video_is_playing();
    void native_video_pause();
    Error native_video_play(const String path, const real_t volume, const String audio_track, const String subtitle_track);
    void native_video_stop();
    void native_video_unpause();
    void open_midi_inputs();
    void print_all_resources(const String tofile = "");
    void print_all_textures_by_size();
    void print_resources_by_type(const PoolStringArray types);
    void print_resources_in_use(const bool _short = false);
    void request_attention();
    bool request_permission(const String name);
    bool request_permissions();
    void set_borderless_window(const bool borderless);
    void set_clipboard(const String clipboard);
    void set_current_screen(const int64_t screen);
    void set_current_tablet_driver(const String name);
    void set_delta_smoothing(const bool delta_smoothing_enabled);
    bool set_environment(const String variable, const String value) const;
    void set_exit_code(const int64_t code);
    void set_icon(const Ref<Image> icon);
    void set_ime_active(const bool active);
    void set_ime_position(const Vector2 position);
    void set_keep_screen_on(const bool enabled);
    void set_low_processor_usage_mode(const bool enable);
    void set_low_processor_usage_mode_sleep_usec(const int64_t usec);
    void set_max_window_size(const Vector2 size);
    void set_min_window_size(const Vector2 size);
    void set_native_icon(const String filename);
    void set_screen_orientation(const int64_t orientation);
    Error set_thread_name(const String name);
    void set_use_file_access_save_and_swap(const bool enabled);
    void set_use_vsync(const bool enable);
    void set_vsync_via_compositor(const bool enable);
    void set_window_always_on_top(const bool enabled);
    void set_window_fullscreen(const bool enabled);
    void set_window_maximized(const bool enabled);
    void set_window_minimized(const bool enabled);
    void set_window_mouse_passthrough(const PoolVector2Array region);
    void set_window_per_pixel_transparency_enabled(const bool enabled);
    void set_window_position(const Vector2 position);
    void set_window_resizable(const bool enabled);
    void set_window_size(const Vector2 size);
    void set_window_title(const String title);
    Error shell_open(const String uri);
    void show_virtual_keyboard(const String existing_text = "", const bool multiline = false);

    static inline OS* get_singleton() {
        if (!OS::singleton) {
            OS::singleton = new OS;
        }
        return OS::singleton;
    }

    static void init_method_bindings();

    inline static size_t get_class_tag() {
        return (size_t)class_tag;
    }

    inline static const char* _get_class_name() {
        return "OS";
    }

    inline static const char* get_rebel_class_name() {
        return "OS";
    }

    inline static Object* from_variant(Variant variant) {
        rebel_object* object = (rebel_object*)variant;
        if (!object) {
            return nullptr;
        }
        return (Object*)nativescript_1_1_api->
            rebel_nativescript_get_instance_binding_data(
                RegisterState::language_index,
                object
            );
    }

private:
    OS();
    static OS* singleton;

    struct MethodBindings {
        rebel_method_bind* mb_alert;
        rebel_method_bind* mb_can_draw;
        rebel_method_bind* mb_can_use_threads;
        rebel_method_bind* mb_center_window;
        rebel_method_bind* mb_close_midi_inputs;
        rebel_method_bind* mb_delay_msec;
        rebel_method_bind* mb_delay_usec;
        rebel_method_bind* mb_dump_memory_to_file;
        rebel_method_bind* mb_dump_resources_to_file;
        rebel_method_bind* mb_execute;
        rebel_method_bind* mb_find_scancode_from_string;
        rebel_method_bind* mb_get_audio_driver_count;
        rebel_method_bind* mb_get_audio_driver_name;
        rebel_method_bind* mb_get_borderless_window;
        rebel_method_bind* mb_get_cache_dir;
        rebel_method_bind* mb_get_clipboard;
        rebel_method_bind* mb_get_cmdline_args;
        rebel_method_bind* mb_get_config_dir;
        rebel_method_bind* mb_get_connected_midi_inputs;
        rebel_method_bind* mb_get_current_screen;
        rebel_method_bind* mb_get_current_tablet_driver;
        rebel_method_bind* mb_get_current_video_driver;
        rebel_method_bind* mb_get_data_dir;
        rebel_method_bind* mb_get_date;
        rebel_method_bind* mb_get_datetime;
        rebel_method_bind* mb_get_datetime_from_unix_time;
        rebel_method_bind* mb_get_dynamic_memory_usage;
        rebel_method_bind* mb_get_environment;
        rebel_method_bind* mb_get_executable_path;
        rebel_method_bind* mb_get_exit_code;
        rebel_method_bind* mb_get_granted_permissions;
        rebel_method_bind* mb_get_ime_selection;
        rebel_method_bind* mb_get_ime_text;
        rebel_method_bind* mb_get_latin_keyboard_variant;
        rebel_method_bind* mb_get_locale;
        rebel_method_bind* mb_get_locale_language;
        rebel_method_bind* mb_get_low_processor_usage_mode_sleep_usec;
        rebel_method_bind* mb_get_max_window_size;
        rebel_method_bind* mb_get_min_window_size;
        rebel_method_bind* mb_get_model_name;
        rebel_method_bind* mb_get_name;
        rebel_method_bind* mb_get_native_handle;
        rebel_method_bind* mb_get_power_percent_left;
        rebel_method_bind* mb_get_power_seconds_left;
        rebel_method_bind* mb_get_power_state;
        rebel_method_bind* mb_get_process_id;
        rebel_method_bind* mb_get_processor_count;
        rebel_method_bind* mb_get_real_window_size;
        rebel_method_bind* mb_get_scancode_string;
        rebel_method_bind* mb_get_screen_count;
        rebel_method_bind* mb_get_screen_dpi;
        rebel_method_bind* mb_get_screen_max_scale;
        rebel_method_bind* mb_get_screen_orientation;
        rebel_method_bind* mb_get_screen_position;
        rebel_method_bind* mb_get_screen_scale;
        rebel_method_bind* mb_get_screen_size;
        rebel_method_bind* mb_get_splash_tick_msec;
        rebel_method_bind* mb_get_static_memory_peak_usage;
        rebel_method_bind* mb_get_static_memory_usage;
        rebel_method_bind* mb_get_system_dir;
        rebel_method_bind* mb_get_system_time_msecs;
        rebel_method_bind* mb_get_system_time_secs;
        rebel_method_bind* mb_get_tablet_driver_count;
        rebel_method_bind* mb_get_tablet_driver_name;
        rebel_method_bind* mb_get_thread_caller_id;
        rebel_method_bind* mb_get_ticks_msec;
        rebel_method_bind* mb_get_ticks_usec;
        rebel_method_bind* mb_get_time;
        rebel_method_bind* mb_get_time_zone_info;
        rebel_method_bind* mb_get_unique_id;
        rebel_method_bind* mb_get_unix_time;
        rebel_method_bind* mb_get_unix_time_from_datetime;
        rebel_method_bind* mb_get_user_data_dir;
        rebel_method_bind* mb_get_video_driver_count;
        rebel_method_bind* mb_get_video_driver_name;
        rebel_method_bind* mb_get_virtual_keyboard_height;
        rebel_method_bind* mb_get_window_per_pixel_transparency_enabled;
        rebel_method_bind* mb_get_window_position;
        rebel_method_bind* mb_get_window_safe_area;
        rebel_method_bind* mb_get_window_size;
        rebel_method_bind* mb_global_menu_add_item;
        rebel_method_bind* mb_global_menu_add_separator;
        rebel_method_bind* mb_global_menu_clear;
        rebel_method_bind* mb_global_menu_remove_item;
        rebel_method_bind* mb_has_environment;
        rebel_method_bind* mb_has_feature;
        rebel_method_bind* mb_has_touchscreen_ui_hint;
        rebel_method_bind* mb_has_virtual_keyboard;
        rebel_method_bind* mb_hide_virtual_keyboard;
        rebel_method_bind* mb_is_debug_build;
        rebel_method_bind* mb_is_delta_smoothing_enabled;
        rebel_method_bind* mb_is_in_low_processor_usage_mode;
        rebel_method_bind* mb_is_keep_screen_on;
        rebel_method_bind* mb_is_ok_left_and_cancel_right;
        rebel_method_bind* mb_is_scancode_unicode;
        rebel_method_bind* mb_is_stdout_verbose;
        rebel_method_bind* mb_is_userfs_persistent;
        rebel_method_bind* mb_is_vsync_enabled;
        rebel_method_bind* mb_is_vsync_via_compositor_enabled;
        rebel_method_bind* mb_is_window_always_on_top;
        rebel_method_bind* mb_is_window_focused;
        rebel_method_bind* mb_is_window_fullscreen;
        rebel_method_bind* mb_is_window_maximized;
        rebel_method_bind* mb_is_window_minimized;
        rebel_method_bind* mb_is_window_resizable;
        rebel_method_bind* mb_keyboard_get_current_layout;
        rebel_method_bind* mb_keyboard_get_layout_count;
        rebel_method_bind* mb_keyboard_get_layout_language;
        rebel_method_bind* mb_keyboard_get_layout_name;
        rebel_method_bind* mb_keyboard_set_current_layout;
        rebel_method_bind* mb_kill;
        rebel_method_bind* mb_move_window_to_foreground;
        rebel_method_bind* mb_native_video_is_playing;
        rebel_method_bind* mb_native_video_pause;
        rebel_method_bind* mb_native_video_play;
        rebel_method_bind* mb_native_video_stop;
        rebel_method_bind* mb_native_video_unpause;
        rebel_method_bind* mb_open_midi_inputs;
        rebel_method_bind* mb_print_all_resources;
        rebel_method_bind* mb_print_all_textures_by_size;
        rebel_method_bind* mb_print_resources_by_type;
        rebel_method_bind* mb_print_resources_in_use;
        rebel_method_bind* mb_request_attention;
        rebel_method_bind* mb_request_permission;
        rebel_method_bind* mb_request_permissions;
        rebel_method_bind* mb_set_borderless_window;
        rebel_method_bind* mb_set_clipboard;
        rebel_method_bind* mb_set_current_screen;
        rebel_method_bind* mb_set_current_tablet_driver;
        rebel_method_bind* mb_set_delta_smoothing;
        rebel_method_bind* mb_set_environment;
        rebel_method_bind* mb_set_exit_code;
        rebel_method_bind* mb_set_icon;
        rebel_method_bind* mb_set_ime_active;
        rebel_method_bind* mb_set_ime_position;
        rebel_method_bind* mb_set_keep_screen_on;
        rebel_method_bind* mb_set_low_processor_usage_mode;
        rebel_method_bind* mb_set_low_processor_usage_mode_sleep_usec;
        rebel_method_bind* mb_set_max_window_size;
        rebel_method_bind* mb_set_min_window_size;
        rebel_method_bind* mb_set_native_icon;
        rebel_method_bind* mb_set_screen_orientation;
        rebel_method_bind* mb_set_thread_name;
        rebel_method_bind* mb_set_use_file_access_save_and_swap;
        rebel_method_bind* mb_set_use_vsync;
        rebel_method_bind* mb_set_vsync_via_compositor;
        rebel_method_bind* mb_set_window_always_on_top;
        rebel_method_bind* mb_set_window_fullscreen;
        rebel_method_bind* mb_set_window_maximized;
        rebel_method_bind* mb_set_window_minimized;
        rebel_method_bind* mb_set_window_mouse_passthrough;
        rebel_method_bind* mb_set_window_per_pixel_transparency_enabled;
        rebel_method_bind* mb_set_window_position;
        rebel_method_bind* mb_set_window_resizable;
        rebel_method_bind* mb_set_window_size;
        rebel_method_bind* mb_set_window_title;
        rebel_method_bind* mb_shell_open;
        rebel_method_bind* mb_show_virtual_keyboard;
    };

    static MethodBindings method_bindings;
    static void* class_tag;
};
} // namespace Rebel

#endif // REBEL_OS_H
