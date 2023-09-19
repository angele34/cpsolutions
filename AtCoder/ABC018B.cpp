#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], c = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (true) {
        bool even = true;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                a[i] /= 2;
            } else {
                even = false;
                break;
            }
        }
        if (even) c++;
        else break;
    }
    cout << c << '\n';
    return 0;
}
