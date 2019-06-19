#pragma once

#include <vector>

template<typename U, typename V>
class MapSet {
public:
    void add(const U &key, const V &value) {
        int keyIndex = getKeyIndex(key);

        if (keyIndex < _keys.size()) {
            for (int i = 0; i < _values[keyIndex].size(); i++) {
                if (_values[keyIndex][i] == value) {
                    return;
                }
            }
            _values[keyIndex].push_back(value);
        } else {
            _keys.push_back(key);
            _values.push_back(std::vector<V>());
            _values[_values.size() - 1].push_back(value);
        }

    }

    bool hasValue(U key, const V &value) {
        for (int i = 0; i < _keys.size(); i++) {
            if (_keys[i] == key) {

                if (i >= _values.size()) {
                    return false;
                }

                for (int j = 0; j < _values[i].size(); j++) {
                    if (_values[i][j] == value) {
                        return true;
                    }
                }
                break;
            }
        }
        return false;
    }

private:
    std::vector<U> _keys;
    std::vector<std::vector<V>> _values;

    int getKeyIndex(const U &key) {
        for (int i = 0; i < _keys.size(); i++) {
            if (_keys[i] == key) {
                return i;
            }
        }
        return _keys.size();
    }
};