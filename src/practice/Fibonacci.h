#pragma once

#include "Sequence.h"
#include <vector>

template<typename T>
class Fibonacci : public Sequence<T> {
public:
    explicit Fibonacci(const T &firstEl);

    T getNth(int n) override;

    T next() override;

private:
    int _currentN;
    std::vector<T> _cache;
};

template<typename T>
Fibonacci<T>::Fibonacci(const T &firstEl)
    : _currentN(1) {
    _cache.push_back(firstEl);
    _cache.push_back(firstEl);
}

template<typename T>
T Fibonacci<T>::getNth(int n) {
    if (_cache.size() >= n) {
        return _cache[n - 1];
    }

    T nth;
    T prev = _cache[_cache.size() - 1];
    T prevPrev = _cache[_cache.size() - 2];

    while (_cache.size() < n) {
        nth = prev + prevPrev;
        prevPrev = prev;
        prev = nth;

        _cache.push_back(nth);
    }

    return nth;
}

template<typename T>
T Fibonacci<T>::next() {
    return getNth(_currentN++);
}
