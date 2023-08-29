#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n; cin >> n;
    int m = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m = max(x,m);
        ans += m-x;
    }
    cout << ans;
}