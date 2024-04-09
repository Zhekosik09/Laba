#include <iostream>
#include "libraryuser.h"
#include "book.h"

LibraryUser::LibraryUser(string name)
    : name(name), userId(NextUserId++) {}

string LibraryUser::getName() const {
    return name;
}

int LibraryUser::getUserId() const {
    return userId;
}

int LibraryUser::NextUserId = 1;
