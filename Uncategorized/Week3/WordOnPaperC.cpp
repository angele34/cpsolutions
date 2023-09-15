#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        char grid[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> grid[i][j];
            }
        }
        string c;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (isalnum(grid[i][j])) {
                    c+=grid[i][j];
                }
            }
        }
        cout << c << '\n';
    }
    return 0;
}