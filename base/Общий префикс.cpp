#include <iostream>
#include "vector"
#include "string"

std::string CommonPrefix(const std::vector<std::string> &words) {
    if (words.empty()) {
        return {};
    }
    size_t minLen = words[0].size();

    for (std::string word: words) {
        minLen = std::min(minLen, word.size());
    }

    std::string prefix = words[0];
    for (size_t i = 1; i != words.size(); ++i) {
        for (size_t j = 0; j != minLen; ++j) {
            if (prefix[j] == words[i][j]) {
                continue;
            } else {
                return prefix.substr(0, j);

            }
        }
    }
    return words[0].substr(0, minLen);
}
