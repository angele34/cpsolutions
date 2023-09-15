#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    string a = "abcdefghijklmnopqrstuvwxyz";
    while (t--) {
        int n;
        cin >> n;
        string s; cin >> s;
    
        char mx = s[0];
        for (char ch : s) {
            if (ch > mx) {
                mx = ch;
            }
        }
        
        int index = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == mx) {
                index = i;
                break;
            }
        }
        cout << index+1 << "\n";
    }
    return 0;
}