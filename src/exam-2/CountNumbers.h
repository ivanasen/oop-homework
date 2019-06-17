#pragma once


#include "Property.h"

class CountNumbers : public Property {
public:
    CountNumbers(int x, int k);

    bool test(std::vector<int> arr) override;

    Property *clone() const override;

    ~CountNumbers() override;

private:
    int _x;
    int _k;
};


