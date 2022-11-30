#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"

void MakeTrain() {
    std::deque<int> train;
    std::string command;
    int wagon;
    size_t delete_count;
    while (std::cin >> command) {
        if (command == "+left") {
            std::cin >> wagon;
            train.push_front(wagon);
        } else if (command == "+right") {
            std::cin >> wagon;
            train.push_back(wagon);
        } else if (command == "-left") {
            std::cin >> delete_count;
            delete_count = std::min(delete_count, train.size());
            train.erase(train.begin(), train.begin() + delete_count);
        } else if (command == "-right") {
            std::cin >> delete_count;
            delete_count = std::min(delete_count, train.size());
            train.erase(train.end() - delete_count, train.end());
        }
    }
    for (const auto &wg: train)
        std::cout << wg << " ";
}
