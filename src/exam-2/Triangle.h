#pragma once

#include <vector>
#include <cmath>
#include <stdexcept>

template<typename T>
class Triangle {
public:

    explicit Triangle(int maxSize, const T &rootElement)
            : _maxSize(maxSize) {
        _triangle.push_back(std::vector<T>());
        _triangle[0].push_back(rootElement);
    }

    size_t getRows() const {
        return _triangle.size();
    }

    const T &getAt(size_t i, size_t j) const {
        size_t row = i + j;
        size_t col = i;

        if (row >= _triangle.size() || col > row) {
            return _triangle[0][0];
        }

        return _triangle[row][col];
    }

    Triangle<T> rotate() {
        std::vector<std::vector<T>> rotated(getRows());
        for (size_t i = 0; i < rotated.size(); i++) {
            rotated[i].resize(i + 1);
        }

        size_t padding = 0;
        while (padding < getRows() / 2 - 1) {
            //Rotate right side to bottom
            for (size_t i = 0; i < getRows() - padding * 3; i++) {
                size_t rightToBottomRow = rotated.size() - 1 - padding;
                size_t rightToBottomCol = rotated[rightToBottomRow].size() - 1 - padding - i;
                rotated[rightToBottomRow][rightToBottomCol] = _triangle[padding * 2 + i][i + padding];
            }

            //Rotate bottom side to left
            for (size_t i = 0; i < getRows() - padding * 3 - 1; i++) {
                size_t bottomToLeftRow = rotated.size() - 2 - padding - i;
                size_t bottomToLeftCol = padding;
                rotated[bottomToLeftRow][bottomToLeftCol] =
                        _triangle[_triangle.size() - 1 - padding]
                        [_triangle[_triangle.size() - 1 - padding].size() - 2 - padding - i];
            }

            //Rotate left side to right
            for (size_t i = 0; i < getRows() - padding * 3 - 2; i++) {
                size_t leftToRightRow = padding * 2 + i + 1;
                size_t leftToRightCol = padding + i + 1;
                rotated[leftToRightRow][leftToRightCol] =
                        _triangle[_triangle.size() - 2 - padding - i][padding];
            }

            padding++;
        }

        return Triangle<T>(_maxSize, rotated);
    }

    const Triangle<T> operator++(int) {
        return increment();
    }

    const Triangle<T> operator+(const Triangle<T> &other) {
        return add(other);
    }

    const Triangle<T> increment() {
        size_t size = getRows();
        if (size >= _maxSize) {
            throw std::invalid_argument("Triangle is at its max size: " + _maxSize);
        }

        std::vector<T> newRow(size + 1);

        for (size_t i = 0; i < newRow.size(); i++) {
            if (i - 1 < 0) {
                newRow[i] = _triangle[size - 1][i];
            } else if (i >= size) {
                newRow[i] = _triangle[size - 1][i - 1];
            } else {
                newRow[i] = _triangle[size - 1][i - 1] + _triangle[size - 1][i];
            }
        }

        _triangle.push_back(newRow);

        return *this;
    }

    const Triangle<T> add(const Triangle<T> &other) {
        size_t minSize = std::min(getRows(), other.getRows());
        std::vector<std::vector<T>> resultTriangle(minSize);

        for (size_t i = 0; i < minSize; i++) {
            resultTriangle[i].resize(i + 1);

            for (size_t j = 0; j <= i; j++) {
                resultTriangle[i][j] = _triangle[i][j] + other._triangle[i][j];
            }
        }

        return Triangle<T>(minSize, resultTriangle);
    }

private:
    int _maxSize;
    std::vector<std::vector<T>> _triangle;

    Triangle(int maxSize, const std::vector<std::vector<T>> &initialTriangle)
            : _maxSize(maxSize), _triangle(initialTriangle) {
        if (_maxSize < _triangle.size()) {
            _maxSize = _triangle.size();
        }
    }
};


