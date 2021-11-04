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
    cout<<s1.getName()<<" Born on: "<< s1.getBirthdate()<<"    ID: "<<s1.getID()<<endl;
    s1.setID(45);
    cout<<"Student new ID: "<<s1.getID()<<endl;
    GradStudent g1("Bruce", "Banner", 10, 3, 1955, 11, "Bachelor of Science");
    cout<<g1.getName()<<" Born on: "<< g1.getBirthdate()<<"    ID: "<<g1.getID()<<"   Graduate Degree Earned: "<<g1.getDegreeEarned()<<endl;
    g1.setDegreeEarned("Bachelors of Art");
    cout<<"New degree earned: "<<g1.getDegreeEarned();
    UndergradeStudent ug1("Steve", "Rodgers", 3, 5, 1923, 002, "Senior");
    cout<<ug1.getName()<<" Born on: "<<ug1.getBirthdate()<<"     ID: "<<ug1.getID()<<"   Class Rank: "<<ug1.getclassRank()<<endl;
    ug1.setclassRank("Junior");
    cout<<"Class rank is: "<<ug1.getclassRank()<<endl;
    return 0;
}
