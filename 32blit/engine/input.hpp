#pragma once

#include "../types/vec2.hpp"
#include "../types/vec3.hpp"
#include <stdint.h>

namespace blit {

  enum button {
    DPAD_LEFT = 1,
    DPAD_RIGHT = 2,
    DPAD_UP = 4,
    DPAD_DOWN = 8,
    A = 16,
    B = 32,
    X = 64,
    Y = 128,
    MENU = 256,
    HOME = 512,
    JOYSTICK = 1024
  };

  extern uint32_t buttons;
  extern vec2 joystick;
  extern vec3 tilt;

  extern bool pressed(uint32_t button);
 
}
