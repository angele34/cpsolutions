#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int max = 0;
        int index = -1;

        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            
            if (b > max && a <= 10) {
                max = b;
                index = i + 1;
            }
        }
        cout << index << endl;
    }
    return 0;
}