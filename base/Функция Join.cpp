#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

std::string Join(const std::vector<std::string> &tokens, char delimiter) {
    std::string ans;
    size_t position = 0;
    if (tokens.empty()) {
        return ans;
    }
    for (const auto &token: tokens) {
        if (position != tokens.size() - 1) {
            ans += token;
            ans += delimiter;
            position++;
        }
    }
    ans += tokens[tokens.size() - 1];
    return ans;
}
