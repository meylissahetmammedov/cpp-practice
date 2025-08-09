#include "Rectangle.h"
#include <iostream>

int main()
{
    Rectangle rect(5, 10);
    rect.draw();
    std::cout << "Area: " << rect.getArea() << std::endl;
    return 0;
}