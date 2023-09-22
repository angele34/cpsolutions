#include <bits/stdc++.h>
using namespace std;

int main() {
    string x,y,z;
    cin >> x >> y >> z;
    
    string ans = x + y;
    sort(ans.begin(), ans.end());
    sort(z.begin(), z.end());
    cout << (z == ans ? "YES\n" : "NO\n");
    return 0;
}