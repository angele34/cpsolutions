#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    lli n,q;
    cin >> n >> q;

    vector<lli> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.rbegin(),p.rend());
    vector<lli> pref(n+1);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i-1]+p[i-1];
    }
    for (int i = 0; i < q; i++) {
        int x,y;
        cin >> x >> y;
        lli sum = pref[x]-pref[x-y];
        cout << sum << '\n';
    }
    return 0;
}