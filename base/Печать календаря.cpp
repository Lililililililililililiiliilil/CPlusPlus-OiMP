#include <iostream>

int main() {
    int n, k, dayOfWeek;
    std::cin >> n >> k;
    dayOfWeek = n;

    for (size_t i = 1; i < n; i++)
        std::cout << "   ";

    for (size_t i = 1; i <= k; i++) {
        if (i < 10)
            std::cout << " ";

        std::cout << i;
        if (dayOfWeek == 7) {
            std::cout << "\n";
            dayOfWeek = 1;
        } else {
            std::cout << " ";
            dayOfWeek += 1;
        }
    }
    if (dayOfWeek != 1)
        std::cout << "\n";
}
