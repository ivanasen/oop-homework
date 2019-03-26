#pragma once


#include <cstddef>
#include <iostream>

class MyString {
public:
    MyString();

    explicit MyString(const char *value);

    MyString(const MyString &string);

    MyString &operator=(const MyString &string);

    MyString &operator=(const char *value);

    size_t length() const;

    const char &operator[](size_t index);

    const char *getValue() const;

    bool equals(const MyString &string) const;

    MyString &operator+(const MyString &string);

    bool operator==(const MyString &string) const;

    bool operator!=(const MyString &string) const;

    friend std::ostream &operator<<(std::ostream &stream, const MyString &string);

    ~MyString();

private:
    char *_value;

    void copy(const char *stringValue);

    void concat(const MyString &string);
};
