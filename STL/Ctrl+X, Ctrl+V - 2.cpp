#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"
#include "list"


int main() {
    std::list<std::string> text, buffer;
    std::string row, command;

    while (true) {
        std::getline(std::cin, row);

        if (row.empty())
            break;
        text.push_back(row);

    }

    bool shiftPressed = false;
    int shiftLen = 0;
    auto shift = text.begin();
    auto cursor = text.begin();
    while (std::cin >> command) {
        if (command == "Down") {
            if (cursor == text.end())
                continue;

            ++cursor;
            if (shiftPressed) {
                ++shiftLen;
            } else {
                shift = cursor;
            }
        } else if (command == "Up") {
            if (cursor == text.begin())
                continue;
            --cursor;
            if (shiftPressed) {
                --shiftLen;
            } else {
                shift = cursor;
            }
        } else if (command == "Ctrl+X") {
            if (cursor == text.end() && shift == cursor)
                continue;

            buffer.clear();

            if (shift == cursor) {
                auto toSplice = cursor;
                cursor = std::next(cursor);
                buffer.splice(buffer.begin(), text, toSplice);
            } else if (shiftLen < 0) {
                buffer.splice(buffer.begin(), text, cursor, shift);
                cursor = shift;
            } else {
                buffer.splice(buffer.begin(), text, shift, cursor);
            }

            shiftPressed = false;
            shift = cursor;
            shiftLen = 0;

        } else if (command == "Ctrl+V") {
            if (buffer.empty())
                continue;

            if (shiftLen < 0) {
                cursor = text.erase(cursor, shift);
            } else {
                cursor = text.erase(shift, cursor);
            }

            text.insert(cursor, buffer.begin(), buffer.end());
            shiftPressed = false;
            shift = cursor;
            shiftLen = 0;

        } else if (command == "Shift") {
            shiftPressed = true;
        }
    }

    for (const auto &line: text)
        std::cout << line << "\n";
}
