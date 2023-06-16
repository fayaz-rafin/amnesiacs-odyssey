#pragma bank 255

// Tileset: sprite_oldman_tileset

#include "gbs_types.h"

BANKREF(sprite_oldman_tileset)

const struct tileset_t sprite_oldman_tileset = {
    .n_tiles = 6,
    .tiles = {
        0x00, 0x00, 0xE0, 0xE0, 0xF0, 0x10, 0xF8, 0x08, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0x04,
        0xFC, 0x04, 0xF8, 0x08, 0xF0, 0x10, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8,
        0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xF0, 0x10, 0x18, 0xE8, 0xFC, 0x04, 0x1C, 0xE4, 0xFC, 0x64,
        0xFC, 0x04, 0xBC, 0x64, 0xF8, 0x08, 0xF0, 0xD0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8,
        0x00, 0x00, 0xE0, 0xE0, 0xF0, 0x10, 0x18, 0xE8, 0xFC, 0x04, 0x1C, 0xE4, 0xFC, 0x64, 0xFC, 0x04,
        0xBC, 0x64, 0xF8, 0x08, 0xF0, 0xD0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8
    }
};