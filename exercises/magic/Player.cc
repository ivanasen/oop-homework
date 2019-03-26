#include <utility>
#include <stdexcept>

#include "Player.hh"

Player::Player() : id(0), name("") {
}

Player::Player(int id, const std::string &name) : id(id) {
    setName(name);
}

std::string Player::getName() {
    return name;
}

int Player::getId() {
    return id;
}

void Player::setId(int id) {
    this->id = id;
}

void Player::setName(const std::string &name) {
    if (name.length() > MAX_NAME_LENGTH) {
        throw std::invalid_argument("Name must not be bigger than " + std::to_string(MAX_NAME_LENGTH) + " characters");
    }

    this->name = name;
}
