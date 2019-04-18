#include <iostream>
#include "Animal.h"

int main() {
    Animal dog;

    std::cout<< "Hunger: " << dog.getHunger() <<"\nThirst: "<< dog.getThirst() << std::endl;
    return 0;
}