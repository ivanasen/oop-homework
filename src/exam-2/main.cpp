#include <iostream>
#include "Triangle.h"
#include "DivisibleBy.h"
#include "CountNumbers.h"
#include "Properties.h"

using namespace std;

void printTriangle(const Triangle<int> &t) {
    for (size_t row = 0; row < t.getRows(); row++) {
        for (size_t col = 0; col <= row; col++) {
            size_t i = col;
            size_t j = row - i;

            cout << t.getAt(i, j) << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void testTriangles() {
    Triangle<int> t1(10, 1);
    for (size_t i = 0; i < 5; i++, t1++) {
    }

    printTriangle(t1);

    Triangle<int> t2(10, 5);
    for (size_t i = 0; i < 3; i++, t2++) {
    }

    Triangle<int> result = t1 + t2;
    printTriangle(result);

    Triangle<int> rotated = t1.rotate();
    printTriangle(rotated);
}

void testProperties() {
    DivisibleBy d(5);
    cout << (true == d.test({5, 25, 30}));
    cout << (false == d.test({5, 25, 31}));

    CountNumbers c(3, 2);
    cout << (true == c.test({5, 2, 3, 34, 454, 3}));
    cout << (false == c.test({5, 2, 3, 34, 45, 324}));

    Properties props;
    props.add(&d);
    props.add(&c);

    cout << (false == props.testAll({5, 25, 30}));
}

int main() {
    testTriangles();
    testProperties();
    return 0;
}