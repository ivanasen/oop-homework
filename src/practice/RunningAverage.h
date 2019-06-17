#pragma once

template<typename T>
class RunningAverage {
public:
    T getSum() const;

    T getAverage() const;

    void addElement(const T &el);

    void reset();

private:
    T _sum;
    T _avg;
    int _count;
};

template<typename T>
T RunningAverage<T>::getSum() const {
    return _sum;
}

template<typename T>
T RunningAverage<T>::getAverage() const {
    return _avg;
}

template<typename T>
void RunningAverage<T>::addElement(const T &el) {
    _sum += el;
    _avg = ((_count * _avg) + el) / (++_count);
}

template<typename T>
void RunningAverage<T>::reset() {
    _sum = 0;
    _avg = 0;
    _count = 0;
}
