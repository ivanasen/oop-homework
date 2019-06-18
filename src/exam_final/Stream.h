#pragma once


#include <string>
#include "Cloneable.h"

class Stream : public Cloneable<Stream> {
public:
    virtual char get() = 0;

    std::string take(unsigned n);

    virtual ~Stream();
};


