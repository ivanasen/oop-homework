#include <iostream>
#include "RunningAverage.h"
#include "ConstantSequence.h"
#include "ArithmeticProgression.h"
#include "Fibonacci.h"

using namespace std;

void testAverage() {
    RunningAverage<double> avg{};
    avg.addElement(5);
    avg.addElement(6);
    cout << (5.5 == avg.getAverage());
    cout << (11 == avg.getSum());

    avg.reset();
    cout << (0.0 == avg.getAverage());
    cout << (0.0 == avg.getSum());
}

void testSequences() {
    ConstantSequence<int> constSeq(5);
    cout << (5 == constSeq.getNth(2354));
    cout << (5 == constSeq.next());

    ArithmeticProgression<int> arProg(1, 5);
    cout << (46 == arProg.getNth(10));
    cout << (1 == arProg.next());
    cout << (6 == arProg.next());

    Fibonacci<int> fib(1);
    cout << (1 == fib.next());
    cout << (1 == fib.next());
    cout << (2 == fib.next());
    cout << (3 == fib.next());
    cout << (5 == fib.next());
    cout << (8 == fib.next());

    cout << (6765 == fib.getNth(20));
}

int main() {
    testAverage();
    testSequences();
    return 0;
}















