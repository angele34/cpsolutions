#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> a = v;
    sort(a.begin(), a.end());
    if (n==1) {
        cout << 1 << '\n';
        return 0;
    } else if (a[0] == a[1]) {
        cout << "Still Rozdil\n";
        return 0;
    } else {
        for (int i = 0; i < n; i++) {
            if (v[i] == a[0]) {
                cout << i+1 << '\n';
                break;
            }
        }
    }
    return 0;
}