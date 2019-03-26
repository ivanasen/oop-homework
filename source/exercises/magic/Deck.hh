#pragma once

#include <vector>
#include "Color.hh"

class Deck {
private:
    int playerId;
    Color color;
    std::vector<int> cards;

public:
    Deck();

    Deck(int playerId, Color color, const std::vector<int> &cards);

    int getPlayerId() const;

    void setPlayerId(int playerId);

    Color getColor() const;

    void setColor(Color color);

    const std::vector<int> &getCards() const;

    void setCards(const std::vector<int> &cards);
};



