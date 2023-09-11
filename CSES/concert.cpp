#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n,m; 
    cin >> n >> m;
    
    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        lli h; cin >> h;
        tickets.insert(h);
    }
    
    for (int i = 0; i < m; i++) {
        lli t; 
        cin >> t;
        auto it = tickets.upper_bound(t);
        if (it == tickets.begin()) {
            cout << -1 << '\n';
        } else {
            cout << *(--it) << '\n';
            tickets.erase(it);
        }
    }
    return 0;
}