#include <iostream>
#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(int numberOfstrings) {

    _numberOfStrings = numberOfstrings;
}

StringedInstrument::StringedInstrument() {

    _numberOfStrings = 0;
}

void StringedInstrument::play() {
    std::cout << _name << " a " << _numberOfStrings << " stringed instrument " << sound() << std::endl;
}
