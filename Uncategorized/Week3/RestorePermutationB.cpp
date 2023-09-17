#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> v;
        for (int i = 0; i < n*2; i++) {
            int a; cin >> a;
            v.push_back(a);
        }
        
        vector<int> s;
        for (auto c : v) {
            auto it (find(s.begin(), s.end(), c));
            if (it == s.end()) {
                s.push_back(c);
            }
        }
        
        for (auto c : s) {
            cout << c << " ";
        }
        cout << '\n';
    }
    return 0;
}