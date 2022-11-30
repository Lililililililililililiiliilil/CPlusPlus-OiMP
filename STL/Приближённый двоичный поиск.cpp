#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"
#include "list"
#include "set"
#include "map"


int main() {
    size_t n, k;
    int x;
    std::vector<int> targets, values;
    std::cin >> n >> k;
    for (size_t i = 0; i != n; ++i) {
        std::cin >> x;
        values.push_back(x);
    }

    for (size_t i = 0; i != k; ++i) {
        std::cin >> x;
        targets.push_back(x);
    }

    for (const auto &target: targets) {
        auto result = std::lower_bound(values.begin(), values.end(), target);
        if (result == values.end()) {
            std::cout << *std::prev(result) << "\n";
        } else if (result == values.begin()) {
            std::cout << *values.begin() << "\n";
        } else if (*result == target) {
            std::cout << target << "\n";
        } else if (abs(*result - target) < abs(*(result - 1) - target)) {
            std::cout << *result << "\n";
        } else {
            std::cout << *(result - 1) << "\n";
        }

    }
}
