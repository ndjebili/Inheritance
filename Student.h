//
// Created by nizam on 11/2/2021.
//

#ifndef DJEBILI_HW3_Q1_STUDENT_H
#define DJEBILI_HW3_Q1_STUDENT_H
#include "Person.h"
using namespace std;


class Student : public Person {

public:
    Student();
    Student(string first, string last, int year, int day, int month, int sid);
    void setID(int x);
    int getID();
protected:
    int ID;

};


#endif //DJEBILI_HW3_Q1_STUDENT_H
