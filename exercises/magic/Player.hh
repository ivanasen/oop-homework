#pragma once

#include <string>

class Player {
private:
    static const int MAX_NAME_LENGTH = 127;

    int id;
    std::string name;

public:
    Player();

    Player(int id, const std::string &name);

    std::string getName();

    int getId();

    void setId(int id);

    void setName(const std::string &name);
};



