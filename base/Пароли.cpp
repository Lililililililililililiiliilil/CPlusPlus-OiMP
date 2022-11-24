#include <iostream>
#include "string"
#include "cctype"

int main() {
    std::string password;
    std::getline(std::cin, password);
    int hasDigit = 0, hasUpper = 0, hasLower = 0, hasOther = 0;
    bool printed = false;

    if ((password.size() >= 8) && (password.size() <= 14)) {
        for (char c: password) {
            if ((int(c) >= 33) && (int(c) <= 126)) {
                if (isdigit(c))
                    hasDigit = 1;
                else if (isupper(c))
                    hasUpper = 1;
                else if (islower(c))
                    hasLower = 1;
                else
                    hasOther = 1;
            } else {
                std::cout << "NO\n";
                printed = true;
            }
        }
        if ((hasLower + hasOther + hasUpper + hasDigit >= 3) && !printed)
            std::cout << "YES\n";
        else if (!printed)
            std::cout << "NO\n";
    } else
        std::cout << "NO\n";
}
