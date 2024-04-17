#include <iostream>

#include "libraryuser.h"
#include "book.h"
#include "library.h"

#include "libraryemployee.h"
#include "bookrental.h"
#include "bookdelivery.h"

using namespace std;

int main() {
    Library library;

    LibraryUser user1("Vlad");
    library.addUser(user1);

    LibraryUser user2("Petya");
    library.addUser(user2);

    Book book1("Harry Potter", "Joanne Kathleen Rowling");
    library.addBook(book1);
    book1.addReader(user1);
    cout << book1;

    Book book2("Jonathan Strange & Mr Norrell", "Susanna Clarke");
    library.addBook(book2);
    book2.addReader(user2);
    cout << book2;

    BookRental rental1(user1, book2);
    rental1.switchReturnBook(false);
    cout << "\nRental Information:\n" << endl;
    cout << rental1;

    LibraryEmployee employee1("Volodia", 27, "Librarian", 2500);
    cout << "\nEmployee:\n\n";
    cout << employee1;

    BookDelivery deliver1(book1, "Vitalik", "Chernivtsi, Nebesnoyi sotni, 2");
    deliver1.deliverBook();
    deliver1.deliverBook();

    return 0;
}