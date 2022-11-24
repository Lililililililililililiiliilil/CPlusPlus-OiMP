#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include "math.h"

struct Point {
    int x;
    int y;
};


int main() {
    int n, x, y;
    std::cin >> n;
    std::vector<Point> result;
    for (int i = 0; i != n; ++i) {
        std::cin >> x >> y;
        result.push_back({x, y});
    }

    std::sort(result.begin(), result.end(), [](const Point &lhs, const Point &rhs) {
        return sqrt(pow(lhs.x, 2) + pow(lhs.y, 2)) < sqrt(pow(rhs.x, 2) + pow(rhs.y, 2));
    });

    for (const auto &point: result) {
        std::cout << point.x << " " << point.y << "\n";
    }
}
