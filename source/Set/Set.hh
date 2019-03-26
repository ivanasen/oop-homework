#pragma once

#include <vector>

template <class T>
class Set {
private:
    std::vector<T> data;

public:
    bool contains(T element) const;

    bool insert(T element);

    bool equals(const Set &other) const;

    void unify(const Set &other);

    bool empty() const;

    size_t size() const;
};
