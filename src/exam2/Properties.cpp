#include "Properties.h"

void Properties::add(Property *property) {
    Property *copy = property->getCopy();
    _properties.push_back(copy);
}

Properties::~Properties() {
    for (Property *prop : _properties) {
        delete prop;
    }
}

bool Properties::testAll(const std::vector<int> &a) {
    for (Property *p : _properties) {
        if (!p->test(a)) {
            return false;
        }
    }
    return true;
}
