#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;
    int n = 0;
    
    while (x > 0) {
        if (x % 2 == 1) n++;
        x >>= 1;
    }
    cout << n << endl;
    return 0;
}