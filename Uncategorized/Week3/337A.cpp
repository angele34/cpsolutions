#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a,a+m);
    int mx = INT_MAX;
    for (int i = 0; i <= m-n; i++) {
        int d = a[i+n-1] - a[i];
        mx = min(mx,d);
    }
    cout << mx << '\n';
    return 0;
}