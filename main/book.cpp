#include <iostream>
#include "book.h"
#include "libraryuser.h"
using namespace std;

Book::Book()
    :Book{ "Untitled", "Unknown Author" } { }

Book::Book(string title, string author)
    :title{ title }, author{ author }, bookId{ NextBookId++ } {}

Book::Book(string title, string author, int bookId)
    :title{ title }, author{ author }, bookId{ bookId } {}

void Book::addReader(const LibraryUser& user) {
    this->readers.push_back(user);
}

ostream& operator<<(ostream& os, const Book& obj) {
    os << "Title: " << obj.title << ", Author: " << obj.author << ", Book ID: " << obj.bookId << endl;
    os << "Readers:";
    for (const auto& reader : obj.readers) {
        os << " " << reader.getName() << " (ID: " << reader.getUserId() << ")" << endl;
    }
    return os;
}

int Book::NextBookId = 1;