#include <iostream>
#include <string>

#include "bookdelivery.h"
#include "book.h"

BookDelivery::BookDelivery(const Book& book, string recipientName, string deliveryAddress)
    :deliveryTitle{ book.GetTitle() }, deliveryAuthor{ book.GetAuthor() }, recipientName{ recipientName }, deliveryAddress{ deliveryAddress }, isDelivered(false) {}

bool BookDelivery::getIsDelivered() const {
    return isDelivered;
}

void BookDelivery::deliverBook() {
    cout << "\nBook delivery Information:\n" << endl;
    if (!getIsDelivered()) {
        cout << "Book delivery " << deliveryTitle << " " << deliveryAuthor << " for " << recipientName << " to the address: " << deliveryAddress << " completed." << endl;
        isDelivered = true;
    }
    else {
        cout << "The book has already been delivered." << endl;
    }
}
