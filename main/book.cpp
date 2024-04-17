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

Book::Book(const Book& other)
    :title(other.title), author(other.author), bookId(other.bookId), readers(other.readers) {}

Book::Book(Book&& other) noexcept
    :title(std::move(other.title)), author(std::move(other.author)), bookId(other.bookId), readers(std::move(other.readers)) {}

void Book::addReader(const LibraryUser& user) {
    this->readers.push_back(user);
}
string Book::GetTitle() const {
    return title;
}
string Book::GetAuthor() const {
    return author;
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