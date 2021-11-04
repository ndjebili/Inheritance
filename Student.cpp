//
// Created by nizam on 11/2/2021.
//

#include "Student.h"
#include <iostream>
using std::cout;
using std::endl;

Student::Student():Person(), ID(001){}

Student::Student(string first, string last, int year, int day, int month, int sid): Person(first, last, year, day, month), ID(sid){}

void Student::setID(int x)
{
    ID = x;
}

int Student::getID()
{
    return ID;
}