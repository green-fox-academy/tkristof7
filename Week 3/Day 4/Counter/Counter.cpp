//
// Created by tothk on 2019. 04. 18..
//
#include "Counter.h"
#include <iostream>
Counter::Counter() {
    _initial = 0;
    _counter = 0;

}

Counter::Counter(int number) {
    _initial = number;
    _counter = number;

}

void Counter::add() {
    _counter++;
}

void Counter::add(int number) {
    _counter += number;
}

void Counter::reset() {
    _counter = _initial;
}

int Counter::get() {
    return _counter;
}