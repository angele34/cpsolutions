#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int pairs = 0;
    for (int a = 0; a < 1000; a++) {
        for (int b = 1; b < 1000; b++) {
            if (pow(b, 2) + a == n && b + pow(a, 2) == m) {
                pairs++;
            }
        }
    }
    cout << pairs << '\n';
    return 0;
}
