#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;
    
    string c;
    if (t == 10 && n > 1) {
        while (c.length() < n-1) {
            c += "1";
        }
        c += to_string(t%10);
    } else {
        while (c.length() < n) {
            c += to_string(t);
        }
    }
    if (c.length() == n) cout << c << '\n';
    else cout << -1 << '\n';
    return 0;
}