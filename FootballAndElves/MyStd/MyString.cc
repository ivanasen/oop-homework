#include <cstring>
#include "MyString.hh"
#include <iostream>

MyString::MyString(const char *value) {
    copy(value);
}

MyString::MyString(const MyString &string) {
    copy(string._value);
}

MyString::MyString() : _value(new char[1]{'\0'}) {
}

MyString &MyString::operator=(const MyString &string) {
    if (this != &string) {
        delete[] _value;
        copy(string._value);
    }

    return *this;
}

MyString &MyString::operator=(const char *value) {
    delete[] _value;
    copy(value);
    return *this;
}

size_t MyString::length() const {
    return strlen(_value);
}

void MyString::copy(const char *stringValue) {
    _value = new char[strlen(stringValue) + 1];
    strcpy(_value, stringValue);
}

const char &MyString::operator[](size_t index) {
    return _value[index];
}

const char *MyString::getValue() const {
    return _value;
}

std::ostream &operator<<(std::ostream &stream, const MyString &string) {
    stream << string._value;
    return stream;
}

MyString &MyString::operator+(const MyString &string) {
    concat(string);
    return *this;
}

void MyString::concat(const MyString &string) {
    char *newValue = new char[length() + string.length() + 1]();
    strcpy(newValue, _value);
    strcat(newValue, string._value);
    delete[] _value;
    _value = newValue;
}

bool MyString::equals(const MyString &string) const {
    return strcmp(_value, string.getValue()) == 0;
}

bool MyString::operator==(const MyString &string) const {
    return equals(string);
}

bool MyString::operator!=(const MyString &string) const {
    return !equals(string);
}

MyString::~MyString() {
    delete[] _value;
}