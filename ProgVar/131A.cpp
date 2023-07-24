#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (int i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            cout << s;
            return 0;
        }
    }
    
    for (int j = 0; j < s.size(); j++) {
        if (isupper(s[j])) {
            s[j] = tolower(s[j]);
        }
        else {
            s[j] = toupper(s[j]);
        }
    }
    cout << s;
    return 0;
}