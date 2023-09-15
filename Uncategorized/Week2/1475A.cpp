#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        lli n; cin >> n;
        lli ans = n&(n-1);
        if (ans != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
