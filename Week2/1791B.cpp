#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, X = 0, Y = 0; 
        cin >> n;
        string s;
        cin >> s;
        
        bool pass = false;
        for (char ch : s) {
            if (ch == 'U') {Y += 1;}
            else if (ch == 'D') {Y -= 1;}
            else if (ch == 'R') {X += 1;}
            else {X -= 1;}
            if (X == 1 && Y == 1) {
                pass = true;
                break;
            }
        }
        if (pass) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
