//
// Created by tothk on 2019. 04. 18..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>
#include "Sharpie.h"

class Sharpie {

public:

    Sharpie(std::string color, float width);

    std::string getColor();

    void setColor(std::string color);

    float getWidth();

    void setWidth(float width);

    void use();

    float getInkAmount();

private:

    std::string _color;
    float _width;
    float _inkAmount;

};


#endif //SHARPIE_SHARPIE_H
