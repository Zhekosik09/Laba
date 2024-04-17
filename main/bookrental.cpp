#include <iostream>
#include <string>

#include "bookrental.h"
#include "book.h"
#include "libraryuser.h"

using namespace std;

BookRental::BookRental(const LibraryUser& name, const Book& book)
    :rentalName(name.getName()), rentalTitle(book.GetTitle()), rentalAuthor(book.GetAuthor()), rentalDuration(5), rentalFeePerDay(25), returned(false) {}

BookRental::BookRental(const LibraryUser& name, const Book& book, int rentalDuration, double rentalFeePerDay, bool returned)
    :rentalName{ name.getName() }, rentalTitle{ book.GetTitle() }, rentalAuthor{ book.GetAuthor() }, rentalDuration{rentalDuration}, rentalFeePerDay{rentalFeePerDay}, returned{returned} {}

BookRental::BookRental(const BookRental& other)
    : rentalName(other.rentalName), rentalTitle(other.rentalTitle),
    rentalAuthor(other.rentalAuthor), rentalDuration(other.rentalDuration),
    rentalFeePerDay(other.rentalFeePerDay), returned(other.returned) {}

BookRental::BookRental(BookRental&& other) noexcept
    : rentalName(std::move(other.rentalName)), rentalTitle(std::move(other.rentalTitle)),
    rentalAuthor(std::move(other.rentalAuthor)), rentalDuration(other.rentalDuration),
    rentalFeePerDay(other.rentalFeePerDay), returned(other.returned) {}

double BookRental::calculateRentalCost() const {
    return rentalDuration * rentalFeePerDay;
}

void BookRental::switchReturnBook(bool id) {
    returned = id;
}

bool BookRental::isReturned() {
    return returned;
}

ostream& operator<<(ostream& os, const BookRental& obj) {
    os << "Rental Name: " << obj.rentalName << endl;
    os << "Title: " << obj.rentalTitle << endl;
    os << "Author: " << obj.rentalAuthor << endl;
    os << "Rental Duration: " << obj.rentalDuration << " days" << endl;
    os << "Rental Fee per Day: $" << obj.rentalFeePerDay << endl;
    os << "Rental Cost: $" << obj.calculateRentalCost() << endl;
    if (obj.returned)
        os << "Status: Returned" << endl;
    else
        os << "Status: Not Returned" << endl;
    return os;
}