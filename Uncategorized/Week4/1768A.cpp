#include <bits/stdc++.h>
using namespace std;
#define lli long long int

// will not work for larger values

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        lli k;
        cin >> k;
        lli a = 1, b = 1, sum = 0;
        for (int i = k-1; i > 0; i--) {
            a*=i;
        }
        for (int i = k-2; i > 0; i--) {
            b*=i;
        }
        sum = a+b;
        if (sum % k == 0) {
            cout << k-1 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}