#include <iostream>
#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings) {

    _numberOfStrings = numberOfStrings;
    _name = "Electric Guitar";
}

ElectricGuitar::ElectricGuitar() {

    _numberOfStrings = 6;
    _name = "Electric Guitar";
}

std::string ElectricGuitar::sound() {
    return "Twang";
}

