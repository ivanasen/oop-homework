#include <stdexcept>
#include "Contact.hh"

Contact::Contact() = default;

Contact::Contact(int id, const std::string &phone, const std::string &name) : id(id), phone(phone), name(name) {
}

int Contact::getId() const {
    return id;
}

void Contact::setId(int id) {
    this->id = id;
}

const std::string &Contact::getPhone() const {
    return phone;
}

void Contact::setPhone(const std::string &phone) {
    if (phone.length() > MAX_PHONE_LENGTH) {
        throw std::invalid_argument(
                "Phone number length must be shorter than " + std::to_string(MAX_PHONE_LENGTH) + " characters.");
    }

    this->phone = phone;
}

const std::string &Contact::getName() const {
    return name;
}

void Contact::setName(const std::string &name) {
    this->name = name;
}
