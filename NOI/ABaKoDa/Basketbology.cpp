#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    sort(c.begin(), c.end());
    int shots = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] <= c[i]) shots++;
    }
    
    if (shots == n)  {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}