//
// Created by tothk on 2019. 04. 23..
//

#ifndef GREEN_FOX_ORGANIZATION_PERSON_H
#define GREEN_FOX_ORGANIZATION_PERSON_H

#include <iostream>

enum Gender {
    FEMALE,
    MALE
};

class Person {
public:
    Person(std::string name, int age, Gender gender);

    Person();


    virtual void introduce();

    std::string getGenderAsString();

    virtual void getGoal();

    int getAge() const;

    Gender getGender() const;

    const std::string &getName() const;


private:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //GREEN_FOX_ORGANIZATION_PERSON_H
