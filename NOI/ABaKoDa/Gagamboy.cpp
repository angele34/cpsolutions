#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int pairs = 0;
    for (int i = 0; i < 8; i++) {
        int u,v;
        cin >> u >> v;
        if (u == 1 || v == 1) pairs++;
    }
    cout << pairs << '\n';
    return 0;
}