#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n,d;
    cin >> n;
    
    if (n>0) {
        cout << n << '\n';
    } else {
        string temp = to_string(n);
        n/=10;
        temp.erase(temp.length() - 2,1);
        d = stoi(temp);
        if (abs(d) > abs(n)) {
        cout << n << '\n';
        } else {
            cout << d << '\n';
        }
    }
    return 0;
}