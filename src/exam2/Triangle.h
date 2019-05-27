#pragma once

#include <vector>
#include <stdexcept>

template<typename T>
class Triangle {
public:
    Triangle(T root, size_t maxRows)
            : _triangle(1), _maxSize(maxRows) {
        _triangle[0].push_back(root);
    }

    explicit Triangle(std::vector<std::vector<T>> customTriangle) {
        _triangle = customTriangle;
        _maxSize = _triangle.size();
    }

    size_t getSize() const {
        return _triangle.size();
    }

    void operator++() {
        increment();
    }

    void increment() {
        size_t newSize = getSize() + 1;

        if (newSize > _maxSize) {
            throw std::invalid_argument("Triangle is already at its max size: " + std::to_string(_maxSize));
        }

        _triangle.push_back(std::vector<T>(newSize));

        size_t topRow = newSize - 2;
        size_t currentRow = newSize - 1;

        for (size_t col = 0; col < newSize; col++) {
            T rightElement;
            T leftElement;

            if (col >= newSize) {
                rightElement = 0;
            } else {
                rightElement = _triangle[topRow][col];
            }

            if (col - 1 < 0) {
                leftElement = 0;
            } else {
                leftElement = _triangle[topRow][col - 1];
            }

            _triangle[currentRow][col] = leftElement + rightElement;
        }
    }

    const T &getAt(size_t i, size_t j) const {
        size_t row = i + j;
        size_t col = i;

        if (row >= _triangle.size() || col >= _triangle[row].size()) {
            return _triangle[0][0];
        }

        return _triangle[row][col];
    }

    Triangle operator+(const Triangle &other) {
        return _add(other);
    }

private:
    std::vector<std::vector<T>> _triangle;
    size_t _maxSize;

    Triangle _add(const Triangle &other) {
        size_t size = std::min(getSize(), other.getSize());

        std::vector<std::vector<T>> elements(size);

        for (long row = 0; row < size; row++) {
            for (long i = 0; i <= row; i++) {
                size_t j = row - i;
                elements[row].push_back(getAt(i, j) + other.getAt(i, j));
            }
        }

        return Triangle(elements);
    }

    void _setAt(size_t i, size_t j, const T &element) {
        size_t row = i + j;
        size_t col = i;

        if (row > _triangle.size()) {
            throw std::invalid_argument("Invalid position");
        }

        _triangle[row][col] = element;
    }
};


