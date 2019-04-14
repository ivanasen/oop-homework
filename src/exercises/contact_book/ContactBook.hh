#pragma once

#include <map>
#include <vector>
#include "Contact.hh"

class ContactBook {
private:
    std::map<int, Contact> idsToContacts;
    std::map<std::string, int> namesToContactIds;
    std::map<std::string, int> phonesToContactIds;

public:

    void addContact(Contact contact);

    const Contact &getContactById(int id) const;

    const Contact &getContactByName(const std::string &name) const;

    const Contact &getContactByPhone(const std::string &phone) const;

};



