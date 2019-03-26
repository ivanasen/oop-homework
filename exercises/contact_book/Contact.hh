#pragma once


#include <string>

class Contact {
private:
    static const int MAX_PHONE_LENGTH = 10;

    int id;
    std::string phone;
    std::string name;

public:

    Contact();

    Contact(int id, const std::string &phone, const std::string &name);

    int getId() const;

    void setId(int id);

    const std::string &getPhone() const;

    void setPhone(const std::string &phone);

    const std::string &getName() const;

    void setName(const std::string &name);
};



