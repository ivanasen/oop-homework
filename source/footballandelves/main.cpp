#include <iostream>
#include <cstring>
#include "Players/Player.hh"
#include "Players/Team.hh"

using namespace std;

void test_strings() {
    cout << "Testing strings" << endl;

    const char *s = "Pesho";

    MyString str1(s);
    MyString str2(s);

    str2 = "Kiro";

    cout << (strcmp(str1.getValue(), "Pesho") == 0);
    cout << (strcmp(str2.getValue(), "Kiro") == 0);

    cout << (strcmp((str1 + str2).getValue(), "PeshoKiro") == 0);

    cout << endl;
}

void test_vectors() {
    cout << "Testing vectors" << endl;

    MyVector<int> v;
    cout << (v.size() == 0);

    for (int i = 0; i < 100; i++) {
        v.add(i);
    }

    cout << (v.size() == 100);

    for (int i = 0; i <= 100; i++) {
        if (i == 100) {
            cout << 1;
            continue;
        }

        if (v[i] != i) {
            cout << 0;
        }
    }

    v[0] = 22;
    cout << (v[0] == 22);

    MyVector<int> s;
    for (int i = 0; i < 5; i++) {
        s.add(i);
    }

    s.remove(2);

    cout << (s.size() == 4);
    for (int i = 2; i < 4; i++) {
        cout << (s[i] == i + 1);
    }

    cout << endl;
}

void test_players() {
    Team t("Pesho");

    cout << t.playerCount() << " " << t.get_name() << endl;

    t.addPlayer(*new Player("Kiro", 34, 23432));
    t.addPlayer(*new Player("K3423ro", 34, 23432));
    t.addPlayer(*new Player("K23435ro", 34, 23432));

    cout << t.get_players().size() << endl;
    auto p = t.get_players();

    for (size_t i = 0; i < t.get_players().size(); i++) {
        cout << p[i].get_name() << ' ';
    }
    cout << endl;
}

void test_elves() {

}

int main() {
    test_strings();
    test_vectors();

//    test_players();
//    test_elves();
    return 0;
}