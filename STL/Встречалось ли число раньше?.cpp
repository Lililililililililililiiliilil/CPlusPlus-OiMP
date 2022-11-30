#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"
#include "list"
#include "set"


int main() {
    int x;
    std::set<int> values;
    while (std::cin >> x) {
        if (values.contains(x))
            std::cout << "YES" << " ";
        else {
            values.insert(x);
            std::cout << "NO" << " ";
        }
    }

}
