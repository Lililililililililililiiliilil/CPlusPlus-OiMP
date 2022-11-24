#include <iostream>

int main() {
    double sum = 0;
    int n, x = 1;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += x * 1.0 / i;
        x *= -1;
    }
    std::cout << sum;
}
