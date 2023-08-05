#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;
    for (char i : s) {
        if (isupper(i)) {
            upper++;
        } else {
            lower++;
        }
    }
    if (upper > lower) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}