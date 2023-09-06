#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> v = a;
        sort(v.begin(), v.end());
        
        for (int i = 0; i < n; i++) {
            if (a[i] != v[1]) {
                cout << i + 1 << "\n";
            }
        }
    }
    return 0;
}
