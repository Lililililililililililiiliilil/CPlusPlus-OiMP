#include <iostream>

int main() {
    int year, month;
    std::cin >> month >> year;

    if (month == 2) {
        if ((year % 400 == 0) || ((year % 4 == 0) & (year % 100 != 0))) {
            std::cout << 29;
        } else
            std::cout << 28;
    } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
        std::cout << 30;
    else
        std::cout << 31;

}
