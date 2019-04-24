//
// Created by tothk on 2019. 04. 24..
//

#ifndef INSTRUMENT_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENT_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H

#include <iostream>
#include <string>

class Instrument {
protected:
    std::string _name;


public:
    void virtual play() = 0;

};


#endif //INSTRUMENT_TO_STRINGED_INSTRUMENTS_INSTRUMENT_H
