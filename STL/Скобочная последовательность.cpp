#include <iostream>
#include "vector"
#include "string"
#include "algorithm"
#include <cmath>
#include "deque"
#include "list"
#include "set"
#include "map"
#include "stack"

bool RightParentheses(const std::string &parentheses) {
    std::stack<char> seq;
    for (char c: parentheses) {
        if (c == '[' || c == '{' || c == '(') {
            seq.push(c);
        } else if (!seq.empty()) {
            if (((seq.top() == '{' && c == '}') || (seq.top() == '[' && c == ']') || (seq.top() == '(' && c == ')'))) {
                seq.pop();
            }
        } else {
            return false;
        }

    }

    if (seq.empty()) {
        return true;
    } else
        return false;

}


int main() {
    std::string parentheses;
    std::cin >> parentheses;


    if (RightParentheses(parentheses)) {
        std::cout << "YES";
    } else
        std::cout << "NO";


}
