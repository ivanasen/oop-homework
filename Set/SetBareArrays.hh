#pragma once

#include <cstddef>

class SetBareArrays {
private:
    int *data;
    size_t size, capacity;

    void resize();

    void copy(const SetBareArrays &source);

    void reset();

public:
    SetBareArrays();

    SetBareArrays(const SetBareArrays &source);

    SetBareArrays& operator=(const SetBareArrays &source);

    ~SetBareArrays();

    bool contains(int element) const;

    bool insert(int element);

    bool equals(const SetBareArrays &other) const;

    void unify(const SetBareArrays &other);

    bool empty() const;

    size_t getSize() const;
};



