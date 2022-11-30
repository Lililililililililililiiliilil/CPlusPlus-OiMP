#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>

template<typename T>
void Print(const T &container, const std::string &delimiter) {
    size_t position = 0;
    for (auto &value: container) {
        if (position != container.size() - 1) {
            std::cout << value << delimiter;
            ++position;
        } else {
            std::cout << value;
        }
    }
}
