#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"
#include "list"
#include "set"
#include "unordered_map"
#include "map"
#include "stack"
#include "queue"


int main() {
    size_t k;
    std::string word;
    std::unordered_map<std::string, int> counter;
    std::cin >> k;
    while (std::cin >> word) {
        ++counter[word];
    }

    std::vector<std::pair<std::string, int>> result(counter.begin(), counter.end());

    std::partial_sort(result.begin(), result.begin() + std::min(result.size(), k), result.end(),
                      [](const auto &rhs, const auto &lhs) {
                          return std::tie(lhs.second, rhs.first) < std::tie(rhs.second, lhs.first);
                      });

    for (size_t i = 0; i < k && i < result.size(); ++i) {
        auto &[w, c] = result[i];
        std::cout << w << " " << c << "\n";
    }
}
