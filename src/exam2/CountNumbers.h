#pragma once


#include "Property.h"

class CountNumbers : public Property {
public:
    CountNumbers(int x, int k);

    Property *getCopy() const override;

    bool test(const std::vector<int> &elements) const override;

private:
    int _x;
    int _k;
};


