#ifndef DANCING_SPRITE_H
#define DANCING_SPRITE_H

#include <Rebel.h>
#include <Sprite.h>

namespace MyLibrary {

class DancingSprite : public Sprite {
    REBEL_CLASS(DancingSprite, Sprite)

private:
    float time_passed = 0.f;
    float movement_size = 10.f;

public:
    void _process(float delta);
    static void _register_methods();
};

} // namespace MyLibrary

#endif // DANCING_SPRITE_H
