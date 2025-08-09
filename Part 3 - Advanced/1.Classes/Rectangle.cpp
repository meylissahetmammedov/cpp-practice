#include "Rectangle.h"
#include <iostream>

// Constructor tanımı
Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

void Rectangle::draw()
{
    std::cout << "Drawing a rectangle" << std::endl;
    std::cout << "Dimensions: " << width << "x" << height << std::endl;
}

int Rectangle::getArea()
{
    return width * height;
}