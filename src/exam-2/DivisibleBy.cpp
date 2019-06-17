#include "DivisibleBy.h"

DivisibleBy::DivisibleBy(int x)
        : _x(x) {
}

bool DivisibleBy::test(std::vector<int> arr) {
    for (int n : arr) {
        if (n % _x != 0) {
            return false;
        }
    }

    return true;
}

Property *DivisibleBy::clone() const {
    return new DivisibleBy(_x);
}

DivisibleBy::~DivisibleBy() = default;
