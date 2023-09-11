#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n,m,k;
    cin >> n >> m >> k; 
    
    int count = 0;
    multiset<lli> s;
    for (int i = 0; i < n; i++) { 
        lli a; cin >> a;
        s.insert(a);
    }
    multiset<lli> ss;
    for (int i = 0; i < m; i++) {
        lli b; cin >> b;
        ss.insert(b);
    }
    for (lli element : s) {
        auto it = ss.lower_bound(element -k);
        if (it != ss.end() && *it <= element + k) {
            count++;
            ss.erase(it);
        }
    }
    cout << count << endl;
    return 0;
}