#pragma once


#include <string>
#include "Color.hh"

class Card {
private:
    static const int MAX_NAME_LENGTH = 63;

    int id;
    std::string name;
    Color color;

public:

    Card();

    Card(int id, const std::string &name, Color color);

    int getId() const;

    const std::string &getName() const;

    Color getColor() const;

    void setId(int id);

    void setName(const std::string &name);

    void setColor(Color color);
};



