#pragma once

template<typename T>
class Sequence {
public:
    virtual T getNth(int n) = 0;

    virtual T next() = 0;
};


