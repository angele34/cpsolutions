#include <bits/stdc++.h>
using namespace std; 
#define lli long long int

int main() {
    lli n, z = 0, o = 0;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') o++;
        else z++;
    }
    cout << abs(o-z) << '\n';
    return 0;
}