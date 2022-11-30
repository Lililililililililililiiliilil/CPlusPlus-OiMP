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
    int n, k, x;
    std::queue<int> numbers;
    std::multiset<int> window;
    std::cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        std::cin >> x;
        numbers.push(x);
        window.insert(x);
        if (i >= k) {
            std::cout << *window.begin() << "\n";
            auto it = window.find(numbers.front());
            window.erase(it);
            numbers.pop();
        }
    }


}
