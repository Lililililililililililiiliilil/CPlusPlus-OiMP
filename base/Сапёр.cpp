#include <iostream>
#include "vector"
#include "string"

int main() {
    int n, m, k, bomb_count, x, y;
    using matrix_t = std::vector<std::vector<std::string>>;
    std::cin >> n >> m >> k;
    matrix_t table(n + 2, std::vector<std::string>(m + 2));

    for (int i = 0; i < k; ++i) {
        std::cin >> x >> y;
        table[x][y] = "*";
    }

    for (size_t i = 1; i < table.size() - 1; ++i) {
        for (size_t j = 1; j < table[0].size() - 1; ++j) {
            bomb_count = 0;
            if (table[i + 1][j + 1] == "*")
                bomb_count += 1;
            if (table[i][j + 1] == "*")
                bomb_count += 1;
            if (table[i - 1][j + 1] == "*")
                bomb_count += 1;
            if (table[i - 1][j] == "*")
                bomb_count += 1;
            if (table[i - 1][j - 1] == "*")
                bomb_count += 1;
            if (table[i][j - 1] == "*")
                bomb_count += 1;
            if (table[i + 1][j - 1] == "*")
                bomb_count += 1;
            if (table[i + 1][j] == "*")
                bomb_count += 1;
            if (table[i][j] != "*")
                table[i][j] = static_cast<char>(bomb_count + 48);
        }
    }

    for (size_t i = 1; i < table.size() - 1; ++i) {
        for (size_t j = 1; j < table[0].size() - 1; ++j) {
            std::cout << table[i][j] << " ";
        }
        std::cout << "\n";
    }

}
