#include <iostream>

#include "MapSet.h"
#include "StringStream.h"
#include "MergeStream.h"

void testMaps() {
    MapSet<int, std::string> sets;
    sets.add(0, "cat");
    std::cout << (true == sets.hasValue(0, "cat"));
    std::cout << (false == sets.hasValue(0, "dog"));
    sets.add(0, "dog");
    sets.add(1, "dog");
    std::cout << (true == sets.hasValue(0, "dog"));
    std::cout << (true == sets.hasValue(0, "cat"));
    std::cout << (true == sets.hasValue(1, "dog"));
    std::cout << (false == sets.hasValue(1, "cat"));
}

void testStreams() {
    StringStream s("Hello World!");
    std::cout << ("Hello Worl" == s.take(10));
    std::cout << ("d!" == s.take(10));

    StringStream s1("ABCABC");
    StringStream s2("123123");
    StringStream s3("=,=,=!");

    MergeStream m1(&s1, &s2);
    MergeStream m2(&m1, &s3);

    std::cout << ("A1B2C3" == m1.take(6));
    std::cout << ("A=1,B=2,C=3!A" == m2.take(15));
}

int main() {
    testMaps();
    testStreams();
    return 0;
}