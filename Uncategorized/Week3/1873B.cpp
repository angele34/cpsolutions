#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        v[0] += 1;
        ll sum = 1;
        for (int i = 0; i < v.size(); i++) {
            sum*=v[i];
        }
        cout << sum << '\n';
    }
    return 0;
}