#include "dancing_sprite.h"

namespace MyLibrary {

void Example::_process(float delta) {
    time_passed += delta;
    float x = movement_size * sin(time_passed * 2.0);
    float y = movement_size * cos(time_passed * 1.5);
    set_position(Vector2(x, y));
}

void Example::_register_methods() {
    register_method("_process", &Example::_process);
}

} // namespace MyLibrary
