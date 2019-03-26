#include <cstring>
#include "Player.hh"

Player::Player(const char *name, unsigned int age, unsigned int height) : _name(name), _age(age), _height(height) {
}

const char *Player::get_name() {
    return _name.getValue();
}

unsigned int Player::get_age() const {
    return _age;
}

unsigned int Player::get_height() const {
    return _height;
}

Player::Player() : _name((char *) ""), _age(0), _height(0) {

}
