//
// Created by tothk on 2019. 04. 18..
//

#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

class Counter {
private:

    int _counter;

    int _initial;

public:
    Counter();

    Counter(int number);

    void add();

    void add(int number);

    void reset();

    int get();
};


#endif //COUNTER_COUNTER_H
