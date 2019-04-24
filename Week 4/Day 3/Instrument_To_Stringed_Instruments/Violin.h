#ifndef INSTRUMENT_TO_STRINGED_INSTRUMENTS_VIOLIN_H
#define INSTRUMENT_TO_STRINGED_INSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument {
public:
    Violin(int numberOfStrings);

    Violin();

    std::string sound() override;

};


#endif //INSTRUMENT_TO_STRINGED_INSTRUMENTS_VIOLIN_H
