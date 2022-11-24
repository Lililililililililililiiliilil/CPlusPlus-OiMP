#include <iostream>
#include "vector"
#include "string"

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>> &matrix) {
    std::pair<size_t, size_t> ans = {0, 0};
    int max = matrix[0][0];
    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[0].size(); ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                ans = {i, j};
            }
        }
    }
    return ans;
}
