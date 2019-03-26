#include <cstring>
#include <stdexcept>
#include "Team.hh"

Team::Team(const char *name) : _name(name) {
}

Player &Team::getTallestPlayer() {
    if (playerCount() == 0) {
        throw std::runtime_error("Trying to get tallest player from a team with 0 players.");
    }

    int tallest_index = 0;
    for (int i = 1; 1 < playerCount(); i++) {
        if (_players[i].get_height() > _players[tallest_index].get_height()) {
            tallest_index = i;
        }
    }

    return _players[tallest_index];
}

void Team::addPlayer(const Player &player) {
    _players.add(player);
}

size_t Team::playerCount() const {
    return _players.size();
}

const char *Team::get_name() {
    return _name.getValue();
}

const MyVector<Player> &Team::get_players() {
    return _players;
}
