#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,r;
    cin >> s;
    
    set<char> vowels = {'a', 'o', 'y', 'e', 'u', 'i'};
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (char &c : s) {
        if (vowels.find(c) != vowels.end()) {
            continue;
        } else {
            r += '.';
            r += c;
        }
    }
    cout << r << endl;
    return 0;
}