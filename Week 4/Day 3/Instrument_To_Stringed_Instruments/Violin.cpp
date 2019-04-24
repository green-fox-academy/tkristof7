#include <iostream>
#include "Violin.h"

Violin::Violin(int numberOfStrings) : StringedInstrument (numberOfStrings) {
    _name = "Violin";
    _numberOfStrings = numberOfStrings;
}
Violin::Violin() {

    _name = "Violin";
    _numberOfStrings = 4;
}
std::string Violin::sound() {
    return "Screech";
}