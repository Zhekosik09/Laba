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
    Book(const Book& other); // Конструктор копіювання
    Book(Book&& other) noexcept; // Конструктор переміщення
    Book operator-() const; // Унарний оператор
    Book operator+(const Book& other) const; // Бінарний оператор
    ~Book(){};
    void addReader(const LibraryUser& user);
    friend ostream& operator<<(ostream& os, const Book& obj);
};

#endif // BOOK_H
