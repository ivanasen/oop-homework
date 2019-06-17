#pragma once

#include "Sequence.h"

template<typename T>
class ConstantSequence : public Sequence<T> {
public:
    explicit ConstantSequence(const T &c);

    T getNth(int n) override;

    T next() override;

private:
    T _c;
};

template<typename T>
ConstantSequence<T>::ConstantSequence(const T &c) : _c(c) {
}

template<typename T>
T ConstantSequence<T>::getNth(int n) {
    return _c;
}

template<typename T>
T ConstantSequence<T>::next() {
    return _c;
}