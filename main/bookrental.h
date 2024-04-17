#ifndef BOOKRENTER_H
#define BOOKRENTER_H


#include <iostream>
#include <string>
#include <vector>

#include "book.h"
#include "libraryuser.h"

using namespace std;

class BookRental {
private:
    string rentalName;
    string rentalTitle;
    string rentalAuthor;
    int rentalDuration;
    double rentalFeePerDay;
    bool returned;
public:
    BookRental(const LibraryUser& name, const Book& book);
    BookRental(const LibraryUser& name, const Book& book, int rentalDuration, double rentalFeePerDay, bool returned);
    BookRental(const BookRental& other);
    BookRental(BookRental&& other) noexcept;
    ~BookRental() {};

    double calculateRentalCost() const;
    void switchReturnBook(bool id);
    bool isReturned();

    friend ostream& operator<<(ostream& os, const BookRental& obj);
};

#endif
