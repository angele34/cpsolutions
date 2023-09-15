#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str = to_string(n);

    bool lucky = true;
    for (char i : str) {
        if (i != '4' && i != '7') {
            lucky = false;
            break;
        }
    }
    if (n % 4 == 0 || n % 7 == 0 || lucky || n % 47 == 0 ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}