#include <iostream>
#include "Contact.hh"
#include "ContactBook.hh"

void setName(Contact &contact) {
    std::string newName = "sefrefrg";
    contact.setName(newName);
}

void testContacts() {
//    Contact pesho(23, "3435454656", "Pesho");
//    Contact kiro(1, "12232344344", "Kiro");
//
//    ContactBook book;
//    book.addContact(pesho);
//    book.addContact(kiro);
//
//    Contact c = book.getContactById(23);
//    Contact d = book.getContactByPhone("12232344344");
//    Contact e = book.getContactByName("Pesho");
//    std::cout << c.getName();
//    std::cout << d.getName();
//    std::cout << e.getName();

    Contact s(2, "sefe", "");
    setName(s);

    std::cout << s.getName();
}

int main() {
    testContacts();
    return 0;
}