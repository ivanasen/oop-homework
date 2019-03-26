#include <algorithm>
#include "Set.hh"

template<class T>
bool Set<T>::contains(T element) const {
    return std::find(data.begin(), data.end(), element) != data.end();
}

template<class T>
bool Set<T>::insert(T element) {
    if (contains(element)) {
        return false;
    }

    data.push_back(element);
    return true;
}

template<class T>
bool Set<T>::equals(const Set &other) const {
    if (data.size() != other.data.size()) {
        return false;
    }

    for (int element : data) {
        if (!other.contains(element)) {
            return false;
        }
    }

    return true;
}

template<class T>
void Set<T>::unify(const Set &other) {
    for (int element : other.data) {
        insert(element);
    }
}

template<class T>
bool Set<T>::empty() const {
    return data.empty();
}

template<class T>
size_t Set<T>::size() const {
    return data.size();
}

template
class Set<int>;