#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string s, s1;
    getline(cin, s);
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            s.erase(i, 1);
            --i;
        }
    }
    s1 = s;
    reverse(s.begin(), s.end());
    if (s == s1)
        cout << "YES";
    else
        cout << "NO";

}
