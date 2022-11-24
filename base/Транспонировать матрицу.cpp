#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>> &matrix) {
    std::vector<std::vector<int>> ans(matrix[0].size(), std::vector<int>(matrix.size()));
    for (size_t i = 0; i != matrix.size(); ++i) {
        for (size_t j = 0; j != matrix[0].size(); ++j) {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}
