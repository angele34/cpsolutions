#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    vector<int>a(n);
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n-1; i >= 0; i--) {
        if (s.find(a[i]) == s.end()) {
            ans.push_back(a[i]);
            s.insert(a[i]);
        }
    }
    cout << ans.size() << '\n';
    reverse(ans.begin(), ans.end());
    for (auto x : ans) {
        cout << x << " ";
    }
    return 0;
}