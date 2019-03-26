#include <iostream>
#include "Player.hh"
#include "Deck.hh"

using namespace std;

int main() {
    auto *p = new Player(3, "Pesho");
    Player g(*p);

    cout << p->getName() << ' ' << g.getName() << ' ' << p->getId() << ' ' << g.getId() << endl;

    g.setId(3543);
    g.setName("Kiro");

    cout << p->getName() << ' ' << g.getName() << ' ' << p->getId() << ' ' << g.getId() << endl;

    Player f(3243254, "Ivan");

    f = g;

    cout << p->getName() << ' ' << g.getName() << ' ' << p->getId() << ' ' << g.getId() << endl;

    f.setId(28934723);
    f.setName("Stramat");

    cout << g.getName() << ' ' << f.getName() << ' ' << g.getId() << ' ' << f.getId() << endl;



    return 0;
}