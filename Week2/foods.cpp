#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m; cin >> n >> m; 

    vector<int> v(m,0);
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            int a; cin >> a; 
            v[a-1]++;
        }
    }
    int count = 0;
    for (int i = 0; i < m; i++) {
        if (v[i] == n) {
            count++;
        }
    }
    cout << count;
    return 0;
}