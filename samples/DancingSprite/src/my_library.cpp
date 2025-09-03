#include "dancing_sprite.h"

extern "C" void GDN_EXPORT rebel_gdnative_init(
    rebel_gdnative_init_options* options
) {
    rebel::Rebel::gdnative_init(options);
}

extern "C" void GDN_EXPORT rebel_gdnative_terminate(
    rebel_gdnative_terminate_options* options
) {
    rebel::Rebel::gdnative_terminate(options);
}

extern "C" void GDN_EXPORT rebel_nativescript_init(
    void *handle
) {
    rebel::Rebel::nativescript_init(handle);
    rebel::register_class<rebel::DancingSprite>();
}
