#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"
#include "list"
#include "set"
#include "map"
#include "stack"
#include "queue"


int main() {
    std::string command;
    int value;
    std::priority_queue<int> myQueue;
    while (std::cin >> command) {
        if (command == "CLEAR") {
            while (!myQueue.empty()) {
                myQueue.pop();
            }
        } else if (command == "ADD") {
            std::cin >> value;
            myQueue.push(value);
        } else if (command == "EXTRACT") {
            if (!myQueue.empty()) {
                std::cout << myQueue.top() << "\n";
                myQueue.pop();
            } else {
                std::cout << "CANNOT" << "\n";
            }
        }
    }
}
