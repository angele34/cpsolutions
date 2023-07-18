#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    for (int i = 1; ;i++) {
        if (i % 2 == 0) {
            b = b-i;
            if (b < 0) {
            cout << "Valera" << endl;
            break;
    }
        }
        else {
            a = a - i;
            if (a < 0) {
                cout << "Vladik" << endl;
                break;
            }
        }
    }
    return 0;
}