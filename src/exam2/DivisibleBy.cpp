#include "DivisibleBy.h"

bool DivisibleBy::test(const std::vector<int> &elements) const {
    for (int element : elements) {
        if (element % _x != 0) {
            return false;
        }
    }
    return true;
}

DivisibleBy::DivisibleBy(int x) : _x(x) {
}

Property *DivisibleBy::getCopy() const {
    auto *copy = new DivisibleBy(_x);
    return copy;
}
