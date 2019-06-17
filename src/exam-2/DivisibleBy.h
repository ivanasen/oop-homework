#pragma once


#include "Property.h"

class DivisibleBy : public Property {
public:
    explicit DivisibleBy(int x);

    bool test(std::vector<int> arr) override;

    Property *clone() const override;

    ~DivisibleBy() override;

private:
    int _x;
};


