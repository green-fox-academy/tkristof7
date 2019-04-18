//
// Created by tothk on 2019. 04. 18..
//
#include <iostream>
#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _width = width;
    _color = color;
    _inkAmount = 100;
}


std::string Sharpie::getColor() {
    return _color;
}

void Sharpie::setColor(std::string color) {
    Sharpie::_color = color;
}

float Sharpie::getWidth() {
    return _width;
}

void Sharpie::setWidth(float width) {
    Sharpie::_width = width;
}

void Sharpie::use() {

    _inkAmount -= 1;
}

float Sharpie::getInkAmount() {
    return _inkAmount;
}
