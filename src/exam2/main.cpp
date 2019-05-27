#include <iostream>
#include "Triangle.h"
#include "Properties.h"
#include "DivisibleBy.h"
#include "CountNumbers.h"

using namespace std;

void print(const Triangle<int> &t) {
    for (long row = 0; row < t.getSize(); row++) {
        for (long i = 0; i <= row; i++) {
            long j = row - i;

            cout << t.getAt(i, j) << ' ';
        }
        cout << endl;
    }
}

void testProperties() {
    Properties p;
    DivisibleBy d(5);
    CountNumbers c(5, 2);

    p.add(&d);
    p.add(&c);

    vector<int> nums = {5, 5, 15, 25, 35};

    cout << p.testAll(nums);
}

void testTriangles() {
    Triangle<int> t1(1, 10);
    for (int i = 0; i < 4; i++) {
        t1.increment();
    }
    print(t1);

    Triangle<int> t2(2, 10);
    for (int i = 0; i < 4; i++) {
        t2.increment();
    }
    print(t2);

    Triangle res = t1 + t2;
    print(res);
}

int main() {
    testTriangles();
    testProperties();
    return 0;
}