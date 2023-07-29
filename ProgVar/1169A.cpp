#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    
    while (a != b && a != x && b != y) {
        a = (a % n) + 1;
        if (b == 1) {
            b = n;
        } else {
            b -= 1;
        }
    }
    cout << (a == b ? "YES" : "NO");
    return 0;
}