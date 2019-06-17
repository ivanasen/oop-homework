#pragma once

#include "Sequence.h"

template<typename T>
class ArithmeticProgression : public Sequence<T> {
public:
    ArithmeticProgression(const T &first, const T &d);

    T getNth(int n) override;

    T next() override;

private:
    T _first;
    T _d;
    int _currentN;
};

template<typename T>
T ArithmeticProgression<T>::getNth(int n) {
    return _first + (n - 1) * _d;
}

template<typename T>
T ArithmeticProgression<T>::next() {
    return _first + ((_currentN++) - 1) * _d;
}

template<typename T>
ArithmeticProgression<T>::ArithmeticProgression(const T &first, const T &d)
        : _first(first), _d(d), _currentN(1) {
}