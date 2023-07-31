#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int sum = 0;
    
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a < 0)
            v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m && i < v.size(); i++) {
        sum += abs(v[i]);
    }
    cout << sum;
    return 0;
}
