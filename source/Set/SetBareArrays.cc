#include "SetBareArrays.hh"

SetBareArrays::SetBareArrays() : data(nullptr), size(0), capacity(0) {
}

SetBareArrays::SetBareArrays(const SetBareArrays &source) {
    copy(source);
}

SetBareArrays &SetBareArrays::operator=(const SetBareArrays &source) {
    copy(source);
    return *this;
}

SetBareArrays::~SetBareArrays() {
    delete[] data;
}

bool SetBareArrays::contains(int element) const {
    for (size_t i = 0; i < size; i++) {
        if (data[i] == element) {
            return true;
        }
    }
    return false;
}

void SetBareArrays::resize() {
    if (capacity == 0) {
        capacity = 1;
    }

    capacity *= 2;

    int *newData = new int[capacity];

    for (size_t i = 0; i < size; i++) {
        newData[i] = data[i];
    }

    delete[] data;
    data = newData;
}

bool SetBareArrays::insert(int element) {
    if (contains(element)) {
        return false;
    }

    if (size >= capacity) {
        resize();
    }

    data[size++] = element;
    return true;
}

bool SetBareArrays::equals(const SetBareArrays &other) const {
    if (size != other.getSize()) {
        return false;
    }

    for (size_t i = 0; i < size; i++) {
        if (!other.contains(data[i])) {
            return false;
        }
    }

    return true;
}

void SetBareArrays::unify(const SetBareArrays &other) {
    for (size_t i = 0; i < other.getSize(); i++) {
        if (!contains(other.data[i])) {
            insert(other.data[i]);
        }
    }
}

bool SetBareArrays::empty() const {
    return size == 0;
}

size_t SetBareArrays::getSize() const {
    return size;
}

void SetBareArrays::copy(const SetBareArrays &source) {
    reset();

    for (size_t i = 0; i < source.getSize(); i++) {
        insert(source.data[i]);
    }
}

void SetBareArrays::reset() {
    delete[] data;
    size = 0;
    capacity = 0;
}
