//
// Created by tothk on 2019. 04. 17..
//

#include "PostIt.h"
#include <string>
PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor)
        : backgroundColor(backgroundColor), text(text), textColor(textColor) {}

std::string PostIt::getBackgroundColor() {
    return backgroundColor;
}

void PostIt::setBackgroundColor(std::string &backgroundColor) {
    PostIt::backgroundColor = backgroundColor;
}

std::string PostIt::getText() {
    return text;
}

void PostIt::setText(std::string text) {
    PostIt::text = text;
}

std::string PostIt::getTextColor() {
    return textColor;
}

void PostIt::setTextColor(std::string textColor) {
    PostIt::textColor = textColor;
}