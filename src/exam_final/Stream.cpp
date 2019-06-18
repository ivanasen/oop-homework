#include "Stream.h"


std::string Stream::take(unsigned n) {
    std::string result;
    unsigned i = 0;

    while (i++ < n) {
        char nextChar = get();
        if (nextChar == '\0') {
            return result;
        }
        result += nextChar;
    }

    return result;
}

Stream::~Stream() = default;
