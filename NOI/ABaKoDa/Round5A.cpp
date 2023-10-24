#include <bits/stdc++.h>
using namespace std; 

int main() {
    int n,k, max_sum = 0;
    cin >> n >> k;
    
    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            int a; cin >> a;
            sum+=a;
        }
        max_sum = max(max_sum,sum);
    }
    cout << max_sum << '\n';
    return 0;
}