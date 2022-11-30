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
    std::string word;
    std::set<char> letters;
    std::map<char, int> letter_count;
    int word_count = 0;

    while (std::cin >> word) {
        for (char c: word) {
            letters.insert(c);

        }
        for (char c: letters) {
            ++letter_count[c];
        }
        ++word_count;
        letters.clear();
    }

    for (const auto &[let, count]: letter_count) {
        if (count == word_count)
            std::cout << let;
    }

}
