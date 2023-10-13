#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    int days = 0, pairs = n*2;
    for (int i = 0; pairs > 0; i++) {
        pairs -= 2;
        if (i % m == 0) pairs +=2;
        days++;
    }
    cout << days-1 << '\n';
    return 0;
}