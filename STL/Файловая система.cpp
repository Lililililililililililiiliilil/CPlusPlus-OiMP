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
    std::set<std::string> files;
    std::string path;
    while (std::cin >> path) {
        int pointer = 0;
        for (char c: path) {
            if (c == '/') {
                files.insert(path.substr(0, pointer + 1));
            }
            ++pointer;
        }
    }

    for (const auto &item: files) {
        std::cout << item << "\n";
    }
}
