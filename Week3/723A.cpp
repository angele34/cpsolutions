#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    vector<int> v = {a, b, c};
    auto mx = max_element(v.begin(), v.end());
    auto min = min_element(v.begin(), v.end());
    
    int ans = *mx - *min;
    cout << ans << '\n';
    return 0;
}