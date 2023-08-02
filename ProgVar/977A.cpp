#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,k;
    cin >> n >> k;
    
    for (int i = 0; i < k; i++) {
        int temp = n % 10;
        if (temp > 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }
    cout << n;
    return 0;
}
 
