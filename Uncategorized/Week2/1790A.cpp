#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        n += '#';
        string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        for (int i = 0; i < n.length(); i++) {
            if (pi[i] != n[i]) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
