#include <iostream>
#include <string>
#include <vector>

#include "book.h"
#include "libraryuser.h"

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<LibraryUser> users;

public:
    Library() {}
    ~Library() {}
    void addBook(const Book& book);
    void addUser(const LibraryUser& user);
};
