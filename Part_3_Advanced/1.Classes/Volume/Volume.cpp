//
// Created by Michael on 8/22/2025.
//

#include "Volume.h"

#include <iostream>

void Volume::setWidth(double width) {
    this->width = width;
}

void Volume::setHeight(double height) {
    this->height = height;
}

void Volume::setLength(double length) {
    this->length = length;
}

double Volume::calculateVolume() {
    return this->width * this->length * this->height;
}


double Volume::getValue() {
    return this->width * this->height * this->length;
}

void Volume::print() {
    std::cout << "Volume(" << this->width << ", " << this->height << ", " << this->length << ") = " << this->calculateVolume() << " meter cube" << std::endl;
}