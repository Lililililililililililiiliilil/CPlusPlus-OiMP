#include <iostream>
#include "vector"
#include "string"
#include "algorithm"

std::vector<std::string> Split(const std::string &str, char delimiter) {
    std::string word;
    std::vector<std::string> ans;
    for (char c: str) {
        if (c != delimiter) {
            word.push_back(c);
        } else {
            ans.push_back(word);
            word.clear();
        }
    }
    ans.push_back(word);
    return ans;
}
