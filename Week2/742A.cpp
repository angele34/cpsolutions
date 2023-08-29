#include <bits/stdc++.h>
using namespace std;

#define lli long long int
// pattern : 8,4,2,6
int main() {
    lli n; cin >> n;
    if (n==0) {
        cout << 1;
        return 0;
    } else if (n>10) {
        n %= 4;
    }
    
    if (n == 1 || n == 5 || n == 9) {
        cout << 8;
    } else if (n == 2 || n == 6 || n == 10) {
        cout << 4;
    } else if (n == 3 || n == 7) {
        cout << 2;
    } else if (n == 0 || n == 4 || n == 8) {
        cout << 6;
    }
    return 0;
}
