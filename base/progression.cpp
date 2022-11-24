#include <iostream>

int main() {
    uint64_t n, ans;
    std::cin >> n;
    ans = n * (n + 1) / 2;
    std::cout << ans << "\n";
}
