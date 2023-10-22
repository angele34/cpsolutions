#include <bits/stdc++.h>
using namespace std;
#define lli long long int
// TLE https://noi.ph/tutorial/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d; cin >> n >> d;
        int a[100005];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        lli dishes[100005];
        for (int i = 1; i <= d; i++) {
            int l,r; cin >> l >> r;
            lli sum = 0;
            for (int j = l; j <= r; j++) {
                sum += a[j];
            }
            sum += (r-l+1)*(i-1);
            dishes[i] = sum;
        }
        for (int i = 1; i <= d; i++) {
            cout << dishes[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}