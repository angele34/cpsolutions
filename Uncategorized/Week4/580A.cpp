#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n;
    cin >> n;
    lli len = 1, mxlen = 1, mx = 1, x, y;
    cin >> x;
    for (int i = 1; i < n; i++) {
        cin >> y;
        if (x <= y) {
            len++;
        } else {
            len = 1;
        }
        if (len > mxlen) mxlen = len;
        x = y;
        if (mxle > mx) mx = mxlen;
    }
    cout << mx << '\n';
    return 0;
}