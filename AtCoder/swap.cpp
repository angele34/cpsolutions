#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    
    if (s==t) {
        cout << "Yes\n";
    } else {
        bool pass = false;
        for (int i = 0; i < s.length()-1; i++) {
            swap(s[i], s[i+1]);
            if (s==t) {
                pass = true;
                break;
            }
            swap(s[i], s[i+1]);
        }
        if (pass) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
