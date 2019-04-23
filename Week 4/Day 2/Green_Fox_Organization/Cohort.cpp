//
// Created by tothk on 2019. 04. 23..
//

#include "Cohort.h"


void Cohort::addStudent(Student *myStudent) {
    _students.push_back(myStudent);
}

void Cohort::addMentor(Mentor *myMentor) {
    _mentors.push_back(myMentor);
}

Cohort::Cohort(std::string name) {
    _name = name;
    _students = {};
    _mentors = {};
}

void Cohort::info() {
    std::cout << "prints out" << "The" << _name << "cohort has" << _students.size() << "students and " << _mentors.size()
              << "mentors." << std::endl;
}
