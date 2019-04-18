//
// Created by tothk on 2019. 04. 17..
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal {
private:
    int hunger;
    int thirst;
public:
    Animal();

    int getHunger();

    void setHunger(int hunger);

    int getThirst();

    void setThirst(int thirst);

    void eat();
    void drink();
    void play();


};


#endif //ANIMAL_ANIMAL_H
