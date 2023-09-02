#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string s = "codeforces";
    bool contain = false;
    while (t--) {
        char c; cin >> c;
        if (s.find(c) != string::npos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}