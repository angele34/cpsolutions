#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;
    cin >> p;
    
    bool found = false;
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9' && p[i] >=33 && p[i] <=126) {
            found = true;
            break;
        }
    }
    cout << (found ? "YES" : "NO");
    return 0;
}
