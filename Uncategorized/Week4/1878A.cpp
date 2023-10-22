#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool pass = false;
        for (int i = 0; i < n; i++) {
            unordered_map<int,int> common;
            for (int j = i; j < n; j++) {
                common[a[j]]++;
                if (common[k] > (j-i + 1) / 2) {
                    pass = true;
                }
            }
        }
        if (pass) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}