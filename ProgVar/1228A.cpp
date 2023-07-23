#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,l,r;
    cin >> l >> r;
    
    for (x = l; x <= r; x++) {
        int temp = x;
        string s = to_string(x);
        set<int> distinctDigits(s.begin(), s.end());
        
        if (s.size() == distinctDigits.size()) {
            cout << temp;
            return 0;
        }
    }
    cout << -1;
    return 0;
}