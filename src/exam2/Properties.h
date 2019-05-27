#pragma once

#include <vector>
#include "Property.h"

class Properties {
public:
    void add(Property *property);

    bool testAll(const std::vector<int> &a);

    ~Properties();

private:
    std::vector<Property*> _properties;
};


