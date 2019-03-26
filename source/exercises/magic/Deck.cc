//
// Created by ivanasen on 24.03.19.
//

#include "Deck.hh"

Deck::Deck(int playerId, Color color, const std::vector<int> &cards) : playerId(playerId), color(color), cards(cards) {}

int Deck::getPlayerId() const {
    return playerId;
}

void Deck::setPlayerId(int playerId) {
    Deck::playerId = playerId;
}

Color Deck::getColor() const {
    return color;
}

void Deck::setColor(Color color) {
    Deck::color = color;
}

const std::vector<int> &Deck::getCards() const {
    return cards;
}

void Deck::setCards(const std::vector<int> &cards) {
    Deck::cards = cards;
}

Deck::Deck() = default;
