//
// Created by tothk on 2019. 04. 25..
//

#include "myClass.h"

std::string myClass::getApple() {

    return "apple";
}

int myClass::sumNumbers(std::vector<int> number) {

    int sum = 0;
    for (unsigned int i = 0; i < number.size(); ++i) {
        sum += number.at(i);
    }
    return sum;
}