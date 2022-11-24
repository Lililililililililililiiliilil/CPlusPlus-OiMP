#include <iostream>
#include "vector"
#include "string"

int main() {
    std::string word;
    std::vector<std::string> text;

    while (std::getline(std::cin, word))
        text.push_back(word);

    std::sort(text.rbegin(), text.rend());

    for (const auto &line: text)
        std::cout << line <<"\n";
}
