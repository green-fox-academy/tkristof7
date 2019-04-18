//
// Created by tothk on 2019. 04. 17..
//

#include "Animal.h"

int Animal::getHunger() {
    return hunger;
}

void Animal::setHunger(int hunger) {
    Animal::hunger = hunger;
}

int Animal::getThirst() {
    return thirst;
}

void Animal::setThirst(int thirst) {
    Animal::thirst = thirst;
}

Animal::Animal() {
    hunger = 50;
    thirst = 50;
}

void Animal::eat() {
    hunger -= 1;
}
void Animal::drink() {
    thirst -=1;
}
void Animal::play() {
    thirst +=1;
    hunger +=1;
}

