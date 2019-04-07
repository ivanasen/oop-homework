#include <iostream>
#include "Set.hh"
//#include "SetBareArrays.hh"

using namespace std;

int main() {
    Set<int> s1;
    Set<int> s2;

    s1.insert(23);
    s2.insert(23);

    cout << (s1.contains(23) == 1) << ' ';
    cout << (s1.equals(s2) == 1) << ' ';

    s2.insert(34);

    cout << (s2.size() == 2) << ' ';

    s1.unify(s2);

    cout << (s1.size() == 2) << ' ';

//    SetBareArrays s1;
//    SetBareArrays s2;
//
//    s1.insert(23);
//    s2.insert(23);
//
//    cout << s1.contains(23) << ' ';
//    cout << s1.equals(s2) << ' ';
//
//    s2.insert(234);
//
//    cout << (s2.getSize() == 2) << ' ';
//
//    s1.unify(s2);
//
//    cout << (s1.getSize() == 2) << endl;

    return 0;
}