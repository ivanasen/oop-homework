#pragma once

#include <cstddef>
#include <stdexcept>

template<class T>
class MyVector {
public:
    MyVector() : MyVector(INITIAL_CAPACITY) {
    }

    explicit MyVector(size_t capacity) : _items(new T[capacity]), _size(0), _capacity(capacity) {
    }

    MyVector(const MyVector &vector) {
        copy(vector);
    }

    MyVector &operator=(const MyVector &vector) {
        delete[] _items;
        copy(vector);
        return *this;
    }

    void add(const T &item) {
        resizeIfNeeded();
        _items[_size++] = item;
    }

    T &get(size_t index) {
        requireValidIndex(index);
        return _items[index];
    }

    void remove(size_t index) {
        requireValidIndex(index);

        if (index < _size - 1) {
            for (size_t i = index + 1; i < _size; i++) {
                _items[i - 1] = _items[i];
            }
        }

        _size--;
    }

    void set(size_t index, const T &item) {
        requireValidIndex(index);
        _items[index] = item;
    }

    size_t size() const {
        return _size;
    }

    T &operator[](size_t index) {
        requireValidIndex(index);
        return get(index);
    }

    ~MyVector() {
        delete[] _items;
    }

private:
    T *_items;
    size_t _size;
    size_t _capacity;

    static const short RESIZE_MULTIPLIER = 2;
    static const size_t INITIAL_CAPACITY = 1;

    void copy(const MyVector &vector) {
        _size = vector._size;
        _capacity = vector._capacity;

        _items = new T[_size];
        for (size_t i = 0; i < vector.size(); i++) {
            _items[i] = vector._items[i];
        }
    }

    void resizeIfNeeded() {
        if (_size < _capacity) {
            return;
        }

        _capacity *= RESIZE_MULTIPLIER;

        T *newItems = new T[_capacity];
        for (size_t i = 0; i < _size; i++) {
            newItems[i] = _items[i];
        }

        delete[] _items;
        _items = newItems;
    }

    void requireValidIndex(size_t index) {
        if (index >= _size || index < 0) {
            throw std::out_of_range("Vector index out of range");
        }
    }
};
