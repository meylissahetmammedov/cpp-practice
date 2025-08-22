//
// Created by Michael on 8/22/2025.
//

#ifndef CPP_PRACTICE_VOLUME_H
#define CPP_PRACTICE_VOLUME_H


class Volume {
    double width = 0;
    double length = 0;
    double height = 0;
    double calculateVolume();

public:
    void setWidth(double width);
    void setLength(double length);
    void setHeight(double height);
    double getValue();
    void print();
};


#endif //CPP_PRACTICE_VOLUME_H