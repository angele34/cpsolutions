#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,n;
    cin >> s >> n;
    
    vector<pair<int, int>> d;
    for (int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;
        d.push_back({x,y});
    } 
    sort(d.begin(), d.end());

    bool proceed = true;
    for (const auto& pair : d) {
        if (s <= pair.first) {
            proceed = false;
            break;
        } else s += pair.second;
    }
    cout << (proceed ? "YES\n" : "NO\n");
    return 0;
}