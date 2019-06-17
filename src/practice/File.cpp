#include <utility>

#include <utility>

#include "File.h"

const std::string &File::getName() const {
    return _name;
}

void File::setName(const std::string &name) {
    _name = name;
}

const std::string &File::getOwner() const {
    return _owner;
}

void File::setOwner(const std::string &owner) {
    _owner = owner;
}

File::File(std::string name, std::string owner)
        : _name(std::move(name)), _owner(std::move(owner)) {
}
