#ifndef INSTRUMENT_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENT_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H


#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    virtual std::string sound() = 0;

    void play() override;

    StringedInstrument();

    StringedInstrument(int numberOfStrings);

protected:
    int _numberOfStrings;
};


#endif //INSTRUMENT_TO_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENT_H
