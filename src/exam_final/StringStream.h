#pragma once

#include <sstream>
#include "Stream.h"

class StringStream : public Stream {
public:
    explicit StringStream(std::string s);

    char get() override;

    Stream *clone() override;

private:
    std::string _string;
    size_t _currentIndex;

    StringStream(std::string s, size_t currentIndex);
};


