#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
    
        int d = abs(a-b);
        float div = 2*c;
        float ans = d/div;
        ans = ceil(ans);
        if (a!=b) {
            cout << ans << "\n"; 
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}