#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int t = 0;
    if (a>b) {
        t = a-b;
        t = pow(32,t);
        cout << t << '\n';
    } else if (b>a) {
        t = b-a;
        t = pow(32,t);
        cout << t << '\n';
    } else {
        cout << 1 << '\n';
    }
    return 0;
}
