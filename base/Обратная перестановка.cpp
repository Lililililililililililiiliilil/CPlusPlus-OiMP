#include <iostream>
#include "vector"

int main() {
    int n, x, k = 1;
    std::vector<int> guests;
    std::cin >> n;
    std::vector<int> places(n);
    for (int i = 0; i != n; i++) {
        std::cin >> x;
        guests.push_back(x);
    }

    for (int place: guests) {
        places[place - 1] = k;
        k += 1;
    }

    for (int place: places)
        std::cout << place << " ";
}
