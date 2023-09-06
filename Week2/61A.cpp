#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, c;
    cin >> s >> c;
    
    string ans;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != c[i]) {
            ans += '1';
        } else {
            ans += '0';
        }
    }
    cout << ans << "\n";
    return 0;
}