#include <iostream>
#include <string>
#include <vector>

#include "libraryuser.h"

using namespace std;

class LibraryEmployee : public LibraryUser {
private:
    string name;
    int age;
    string position;
    vector<double> salaries;
public:
    LibraryEmployee();
    LibraryEmployee(string name, int age, string position);
    LibraryEmployee(const string& name, int age, const string& position, double salary);
    ~LibraryEmployee() {};

    void setSalary(double salaries);

    friend ostream& operator<<(ostream& os, const LibraryEmployee& obj);
};

