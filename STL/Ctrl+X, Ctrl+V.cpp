#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"
#include "list"


int main() {
    std::list<std::string> text;
    std::string row, command, buffer;

    while (true) {
        std::getline(std::cin, row);

        if (row.empty())
            break;
        text.push_back(row);

    }

    auto cursor = text.begin();
    while (std::cin >> command) {
        if (command == "Down") {
            if (cursor == text.end())
                continue;
            ++cursor;
        } else if (command == "Up") {
            if (cursor == text.begin())
                continue;
            --cursor;
        } else if (command == "Ctrl+X") {
            if (cursor == text.end())
                continue;
            buffer = std::move(*cursor);
            cursor = text.erase(cursor);
        } else if (command == "Ctrl+V") {
            if (buffer.empty())
                continue;
            text.insert(cursor, buffer);
        }
    }

    for (const auto &line: text)
        std::cout << line << "\n";
}
