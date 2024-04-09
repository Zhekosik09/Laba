#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>

#include "libraryuser.h"

using namespace std;

class Book {
private:
    string title;
    string author;
    int bookId;
    static int NextBookId;
    vector <LibraryUser> readers;
public:
    Book();
    Book(string title, string author);
    Book(string title, string author, int bookId);
    ~Book(){};
    void addReader(const LibraryUser& user);
    friend ostream& operator<<(ostream& os, const Book& obj);
};

#endif // BOOK_H
