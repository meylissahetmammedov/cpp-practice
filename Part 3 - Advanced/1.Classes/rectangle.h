#ifndef RECTANGLE_H // Header guard
#define RECTANGLE_H

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int w, int h); // Constructor
    void draw();
    int getArea();
};

#endif