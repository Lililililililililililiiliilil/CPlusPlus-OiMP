#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"


int main() {
    int n, m, x;
    std::string surname, place;
    std::deque<std::string> students;
    std::cin >> n;
    for (int i = 0; i != n; ++i) {
        std::cin >> surname >> place;
        if (place == "top")
            students.push_front(surname);
        else
            students.push_back(surname);
    }
    std::cin >> m;
    for (int i = 0; i != m; ++i) {
        std::cin >> x;
        std::cout << students[x - 1] << "\n";
    }

}
