#ifndef LIBRARYUSER_H
#define LIBRARYUSER_H

#include <string>

using namespace std;

class LibraryUser {
private:
    string name;
    int userId;
    static int NextUserId;

public:
    LibraryUser(string name);
    string getName() const;
    int getUserId() const;
    ~LibraryUser() {}
};

#endif // LIBRARYUSER_H

