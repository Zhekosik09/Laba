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
    Book(const Book& other); // ����������� ���������
    Book(Book&& other) noexcept; // ����������� ����������
    Book operator-() const; // ������� ��������
    Book operator+(const Book& other) const; // �������� ��������
    ~Book(){};
    void addReader(const LibraryUser& user);
    string GetTitle() const;
    string GetAuthor() const;
    friend ostream& operator<<(ostream& os, const Book& obj);
};

#endif // BOOK_H
