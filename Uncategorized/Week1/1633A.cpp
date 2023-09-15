#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
     
        int c = n % 10;
        bool yes = false;
        
        if (n % 7 == 0) {
            yes = true;
        } else {
            n -= c;
            for (int i = 0; i < 10; i++) {
                if (n % 7 != 0) {
                    n += 1;
                }
            }
        }
        cout << n << endl;
    }
    return 0;
}