#include <stdexcept>
#include "Properties.h"

const int Properties::MAX_PROPERTIES_SIZE = 100;

Properties::Properties() = default;

Properties::Properties(const Properties &properties) {
    copy(properties);
}

Properties &Properties::operator=(const Properties &other) {
    if (this != &other) {
        freeMemory();
        copy(other);
    }

    return *this;
}

void Properties::add(const Property *property) {
    if (_properties.size() >= MAX_PROPERTIES_SIZE) {
        throw std::invalid_argument("Properties is at max size: " + std::to_string(MAX_PROPERTIES_SIZE));
    }

    Property *clone = property->clone();
    _properties.push_back(clone);
}

Properties::~Properties() {
    freeMemory();
}

bool Properties::testAll(const std::vector<int> &arr) {
    for (Property *prop : _properties) {
        if (!prop->test(arr)) {
            return false;
        }
    }

    return true;
}

void Properties::copy(const Properties &properties) {
    for (Property *prop : properties._properties) {
        add(prop);
    }
}

void Properties::freeMemory() {
    for (Property *property : _properties) {
        delete property;
    }
}
