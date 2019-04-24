#ifndef INSTRUMENT_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENT_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {
public:
    BassGuitar(int numberOfStrings);

    BassGuitar();

    std::string sound() override;

};


#endif //INSTRUMENT_TO_STRINGED_INSTRUMENTS_BASSGUITAR_H
