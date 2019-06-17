#pragma once


#include "Property.h"

class Properties {
public:

    Properties();

    Properties(const Properties &properties);

    Properties &operator=(const Properties &other);

    void add(const Property *property);

    bool testAll(const std::vector<int> &arr);

    ~Properties();

private:
    static const int MAX_PROPERTIES_SIZE;

    std::vector<Property *> _properties;

    void copy(const Properties &properties);

    void freeMemory();
};


