#include <iostream>

#include "libraryuser.h"

LibraryUser::LibraryUser(string name)
    : name(name), userId(NextUserId++) {}

string LibraryUser::getName() const {
    return name;
}

int LibraryUser::getUserId() const {
    return userId;
}

ostream& operator<<(ostream& os, const LibraryUser& user);
istream& operator>>(istream& is, LibraryUser& user);

int LibraryUser::NextUserId = 1;
