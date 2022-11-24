#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if ((a < b + c) & (b < a + c) & (c < a + b)) {
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
            std::cout << "YES";
        else
            std::cout << "NO";
    } else
        std::cout << "UNDEFINED";

}
