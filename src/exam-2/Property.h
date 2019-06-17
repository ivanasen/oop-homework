#pragma once

#include <vector>
#include "Cloneable.h"

class Property : public Cloneable<Property> {
public:
    virtual bool test(std::vector<int> arr) = 0;

    virtual ~Property() = default;
};