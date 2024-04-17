#ifndef BOOKDELIVERY_H
#define BOOKDELIVERY_H

#include <iostream>
#include <string>

#include "book.h"

using namespace std;

class BookDelivery {
private:
    string deliveryTitle;
    string deliveryAuthor;
    string recipientName;
    string deliveryAddress;
    bool isDelivered;
public:
    BookDelivery(const Book& book, string recipientName, string deliveryAddress);
    bool getIsDelivered() const;
    void deliverBook();
};

#endif

