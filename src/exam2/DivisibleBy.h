#pragma once

#include "Property.h"

class DivisibleBy : public Property {
public:
    explicit DivisibleBy(int x);

    Property *getCopy() const override;

    bool test(const std::vector<int> &elements) const override;

private:
    int _x;
};


