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
    size_t n, m;
    std::string word;
    std::map<std::string, int> n_grams;
    std::cin >> n >> m;
    for (size_t i = 0; i != n; ++i) {
        std::cin >> word;
        if (word.size() >= m) {
            for (size_t j = 0; j != word.size() - m + 1; ++j)
                ++n_grams[word.substr(j, m)];
        } else {
            continue;
        }
    }

    std::vector<std::pair<std::string, int> > sorted(n_grams.begin(), n_grams.end());

    std::sort(sorted.begin(), sorted.end(), [](const auto &lhs, const auto &rhs) {
        return std::tie(rhs.second, lhs.first) < std::tie(lhs.second, rhs.first);
    });


    for (const auto &[item, count]: sorted) {
        std::cout << item << " - " << count << "\n";
    }

}
