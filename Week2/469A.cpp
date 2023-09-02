#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p; cin >> p;
    set<int> l;
 
    for (int i = 0; i < p; i++) {
        int x; cin >> x;
        l.insert(x);
    }
    int q;  cin >> q;
    for (int i = 0; i < q; i++) {
        int y; cin >> y;
        l.insert(y);
    }
    
    if (l.size() == n) {
        cout << "I become the guy." << "\n";
    } else {
        cout << "Oh, my keyboard!" << "\n";
    }
    return 0;
}
