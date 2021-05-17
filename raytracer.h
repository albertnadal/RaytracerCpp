#ifndef RAYTRACER_H
#define RAYTRACER_H

#include <stdint.h>
#include "scene.h"

class Raytracer
{
    uint32_t resolution_x_, resolution_y_;
    Scene scene;
  public:
    Raytracer(uint32_t res_x, uint32_t res_y);
    ~Raytracer();
};

#endif