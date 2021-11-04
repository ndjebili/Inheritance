#include <iostream>
#include "Person.h"
#include "Student.h"
#include "UndergradeStudent.h"
#include "GradStudent.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;
    Student s1("Bob", "Dylan", 5, 25, 1909, 505);
    cout<<s1.getName()<<" Born on: "<< s1.getBirthdate()<<"    ID is: "<<s1.getID()<<endl;
    return 0;
}
