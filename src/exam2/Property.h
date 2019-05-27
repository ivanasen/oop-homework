#pragma once

#include <vector>

class Property {
public:
    virtual Property* getCopy() const = 0;

    virtual bool test(const std::vector<int> &elements) const = 0;

    virtual ~Property() = default;
};


