//
// Created by nizam on 11/1/2021.
//

#ifndef DJEBILI_HW3_Q1_PERSON_H
#define DJEBILI_HW3_Q1_PERSON_H
#include <string>

class Person
{
public:
    Person();
    Person(std::string first, std::string last, int day, int month, int year);
    std::string getName();
    std::string getBirthdate();

private:
    std::string Fname;
    std::string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;

protected:
    /*You may move private members to protected if needed*/


};


#endif //DJEBILI_HW3_Q1_PERSON_H
