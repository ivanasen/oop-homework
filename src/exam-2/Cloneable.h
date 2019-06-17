#pragma once

template<typename T>
class Cloneable {
public:
    virtual T *clone() const = 0;
};


