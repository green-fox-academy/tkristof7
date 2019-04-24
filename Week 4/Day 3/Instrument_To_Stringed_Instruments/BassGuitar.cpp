#include "BassGuitar.h"

BassGuitar::BassGuitar(int numberOfStrings):StringedInstrument(numberOfStrings){
    _name = "Bass Guitar";
    _numberOfStrings = 4;
}
BassGuitar::BassGuitar() {
    _name = "Bass Guitar";
    _numberOfStrings=4;
}
std::string BassGuitar::sound() {

    return "Dumm-dumm-dumm";
}
