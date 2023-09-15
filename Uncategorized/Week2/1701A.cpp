#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int sum = 0;
        for (int i = 0; i < 2; i++) {
            int x,y; cin >> x >> y;
            sum += x + y;
        }
        if (sum == 0) {
            cout << 0 << "\n";
        } else if (sum == 4) {
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
    return 0;
}
    