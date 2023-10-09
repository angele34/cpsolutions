#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int l,r;
        cin >> l >> r; 
        int mx2=-1, mx1=0;
        for (int i = l; i <= r && i <= l+1000; i++) {
            string s = to_string(i);
            sort(s.begin(), s.end());
            if (s.back() - s.front() >= mx1) {
                mx1 = s.back() - s.front();
                mx2 = i;
            }
        }
        cout << mx2 << '\n';
    }
    return 0;
}