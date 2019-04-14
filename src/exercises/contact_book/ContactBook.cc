#include "ContactBook.hh"

void ContactBook::addContact(Contact contact) {
    idsToContacts[contact.getId()] = contact;
    phonesToContactIds[contact.getPhone()] = contact.getId();
    namesToContactIds[contact.getName()] = contact.getId();
}

const Contact &ContactBook::getContactById(int id) const {
    return idsToContacts.at(id);
}

const Contact &ContactBook::getContactByName(const std::string &name) const {
    int id = namesToContactIds.at(name);
    return getContactById(id);
}

const Contact &ContactBook::getContactByPhone(const std::string &phone) const {
    int id = phonesToContactIds.at(phone);
    return getContactById(id);
}
