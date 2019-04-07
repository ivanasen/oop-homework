#pragma once


#include "Player.hh"
#include "../MyStd/MyVector.hh"
#include "../MyStd/MyString.hh"

class Team {
private:
    MyString _name;
    MyVector<Player> _players;
public:
    explicit Team(const char * name);

    void addPlayer(const Player &player);

    Player &getTallestPlayer();

    size_t playerCount() const;

    const char *get_name();

    const MyVector<Player> &get_players();
};



