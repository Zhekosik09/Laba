#include <iostream>
#include "library.h"
#include "book.h"
#include "libraryuser.h"
using namespace std;

void Library::addBook(const Book& book) {
    this->books.push_back(book);
}
void Library::addUser(const LibraryUser& user) {
    this->users.push_back(user);
}