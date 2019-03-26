#include <stdexcept>
#include "Card.hh"

Card::Card(int id, const std::string &name, Color color) : id(id), color(color) {
    setName(name);
}

Card::Card() {
    id = 0;
    name = "";
    color = Color::Black;
}

int Card::getId() const {
    return id;
}

const std::string &Card::getName() const {
    return name;
}

Color Card::getColor() const {
    return color;
}

void Card::setId(int id) {
    this->id = id;
}

void Card::setName(const std::string &name) {
    if (name.size() > MAX_NAME_LENGTH) {
        throw std::invalid_argument(
                "Card name must not be longer than" + std::to_string(MAX_NAME_LENGTH) + " characters.");
    }

    this->name = name;
}

void Card::setColor(Color color) {
    this->color = color;
}
