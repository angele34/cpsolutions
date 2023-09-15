#include <bits/stdc++.h>
using namespace std;

// didn't expect this solution to work >:D

int main() {
    int n; 
    cin >> n;
    
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // 10 = -+
    // 01 == +-
    int pairs = 0;
    for (int i = 0; i < n-1; i++) {
        if (v[i] != v[i+1] && n!=1) {
            pairs++;
        }
    }
    cout << pairs+1;
    return 0;
}