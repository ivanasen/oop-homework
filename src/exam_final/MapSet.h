#pragma once

#include <unordered_map>
#include <unordered_set>

template<typename U, typename V>
class MapSet {
public:
    void add(const U &key, const V &value) {
        if (_function.count(key) == 0) {
            _function.emplace(key, std::unordered_set<V>());
        }
        _function[key].insert(value);
    }

    bool hasValue(U key, const V &value) {
        return _function.count(key) && _function[key].count(value);
    }

private:
    std::unordered_map<U, std::unordered_set<V>> _function;
};