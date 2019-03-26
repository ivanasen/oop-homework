#pragma once


#include "../MyStd/MyString.hh"

class Player {
private:
    MyString _name;
    unsigned int _age;
    unsigned int _height;

public:
    Player();

    Player(const char *name, unsigned int age, unsigned int height);

    const char *get_name();

    unsigned int get_age() const;

    unsigned int get_height() const;
};



