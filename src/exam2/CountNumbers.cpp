#include "CountNumbers.h"

bool CountNumbers::test(const std::vector<int> &elements) const {
    int count = 0;
    for (int e : elements) {
        if (e == _x) {
            count++;
        }
    }

    return count == _k;
}

CountNumbers::CountNumbers(int x, int k) : _x(x), _k(k) {
}

Property *CountNumbers::getCopy() const {
    auto copy = new CountNumbers(_x, _k);
    return copy;
}
