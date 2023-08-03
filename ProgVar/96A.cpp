#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int p1 = 0, p2 = 0;
    
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '0') {
            p1++;
            p2 = 0;
        } else {
            p2++;
            p1 = 0;
        }
        if (p1 >= 7 || p2 >= 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}