#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    
    string c = "Yes";
    for (int i = 0; i < 18; i++) {
        c += "Yes";
    }
    
    while (t--) {
        string s;
        cin >> s;
        
        if (c.find(s) != string::npos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}