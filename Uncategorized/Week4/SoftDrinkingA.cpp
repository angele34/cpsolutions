#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    k = (k*l)/n;
    c*=d;
    p/=np;
    cout << min({k,c,p}) / n << '\n';
    return 0;
}