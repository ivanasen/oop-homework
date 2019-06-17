#include "CountNumbers.h"

CountNumbers::CountNumbers(int x, int k)
        : _x(x), _k(k) {
}

bool CountNumbers::test(std::vector<int> arr) {
    int count = 0;

    for (int n : arr) {
        if (n == _x) {
            count++;
        }
    }

    return count == _k;
}

Property *CountNumbers::clone() const {
    return new CountNumbers(_x, _k);
}

CountNumbers::~CountNumbers() = default;
