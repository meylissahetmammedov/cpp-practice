#include "Rectangle.h"
#include <iostream>

int main()
{
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.height = 20;
    std::cout << rectangle.getArea() << std::endl;
    std::cout << rectangle.getAreaa() << std::endl;
    std::system("PAUSE");
    return 0;
}