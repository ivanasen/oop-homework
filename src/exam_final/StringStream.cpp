#include <utility>

#include "StringStream.h"

StringStream::StringStream(std::string s)
        : _string(std::move(s)), _currentIndex(0) {
}

StringStream::StringStream(std::string s, size_t currentIndex)
        : _string(std::move(s)), _currentIndex(currentIndex) {
}

char StringStream::get() {
    if (_currentIndex >= _string.size()) {
        return '\0';
    }

    return _string[_currentIndex++];
}

Stream *StringStream::clone() {
    return new StringStream(_string, _currentIndex);
}
