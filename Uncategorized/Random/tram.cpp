#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int val = a[0] + b[0], mx = val;
    for (int i = 1; i < n; i++) { 
        val -= a[i];
        mx = max(mx, val);
        val += b[i];
        mx = max(mx, val);
    }
    cout << mx << '\n';
    return 0;
}
