#include <iostream>
#include "libraryemployee.h"
#include "libraryuser.h"

using namespace std;

LibraryEmployee::LibraryEmployee()
    :LibraryEmployee{ "Untitled", 0,  "Unknown Author", 0.0 } {}

LibraryEmployee::LibraryEmployee(const string& name, int age, const string& position, double salary)
    :LibraryUser(name), name(name), age(age), position(position) {
    salaries.push_back(salary);
}
void LibraryEmployee::setSalary(double newSalary) {
    this->salaries.push_back(newSalary);
}

ostream& operator<<(ostream& os, const LibraryEmployee& obj) {
    os << "Name: " << obj.name << endl;
    os << "Age: " << obj.age << endl;
    os << "Position: " << obj.position << endl;
    os << "Salaries: ";
    for (double salary : obj.salaries) {
        os << salary << "$";
    }
    os << endl;
    return os;
}
