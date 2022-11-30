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
    std::map<int, std::set<std::string>> book;
    int words, page;
    std::cin >> words;
    std::string subject;
    for (int i = 0; i != words; ++i) {
        std::cin >> subject >> page;
        if (book.contains(page)) {
            book[page].insert(subject);
        } else {
            book[page] = {subject};
        }
    }

    for (const auto &[item, value]: book) {
        std::cout << item << " ";
        for (const auto &sb: value) {
            std::cout << sb << " ";
        }
        std::cout << "\n";
    }
}
