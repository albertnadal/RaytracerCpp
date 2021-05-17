#include "raytracer.h"
#include <iostream>

Raytracer::Raytracer(uint32_t res_x, uint32_t res_y) : resolution_x_{res_x}, resolution_y_{res_y}
{
    std::cout << "I'm just going to be a new ray tracer renderer written in c++17" << std::endl;
}

Raytracer::~Raytracer()
{}