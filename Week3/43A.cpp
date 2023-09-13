#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string a, b;
    cin >> a;
    int count1 = 1, count2 = 0;

    for (int i = 1; i < n; i++) {
        string g;
        cin >> g;
        if (g == a) {
            count1++;
        } else {
            b = g;
            count2++;
        }
    }
    
    if (count1 > count2) {
        cout << a << '\n';
    } else {
        cout << b << '\n';
    }
    
    return 0;
}
