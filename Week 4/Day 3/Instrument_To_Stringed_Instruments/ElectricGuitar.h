#ifndef INSTRUMENT_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENT_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar(int numberOfStrings);

    ElectricGuitar();

    std::string sound() override;

};


#endif //INSTRUMENT_TO_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
