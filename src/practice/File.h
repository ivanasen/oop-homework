#pragma once


#include <string>

class File {
public:
    File(std::string name, std::string owner);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getOwner() const;

    void setOwner(const std::string &owner);

    virtual void contents(std::ostream &out) const = 0;

private:
    std::string _name;
    std::string _owner;
};


