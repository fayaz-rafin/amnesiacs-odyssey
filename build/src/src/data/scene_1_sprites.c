#pragma bank 255

// Scene: Home
// Sprites

#include "gbs_types.h"
#include "data/sprite_oldman.h"

BANKREF(scene_1_sprites)

const far_ptr_t scene_1_sprites[] = {
    TO_FAR_PTR_T(sprite_oldman)
};