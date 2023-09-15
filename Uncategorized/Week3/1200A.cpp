#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    
    int c[10] = {0};
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            for (int j = 0; j < 10; j++) {
                if (c[j] == 0) {
                    c[j] = 1; 
                    break;
                }
            }
        } else if (s[i] == 'R') {
            for (int j = 9; j >= 0; j--) {
                if (c[j] == 0) {
                    c[j] = 1; 
                    break;
                }
            }
        } else {
            int y = s[i] - '0';
            c[y] = 0;
        }
    }
    for (int i = 0; i < 10; i++) cout << c[i];
    return 0;
}
