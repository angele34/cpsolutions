#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int counts = 0, z = 0;
    
    while (n--) {
        int a; cin >> a;
        
        if (a == -1) {
            if (z != 0) {
                z--;
            } else {
                counts++;
            }
        } else {
            z += a;
        }
    }
    cout << counts;
    return 0;
}