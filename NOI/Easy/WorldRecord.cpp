#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        lli a,b,c;
        cin >> a >> b >> c;
        lli product = a*b;
        if (product < c) cout << "Try again next time :(\n";
        if (product == c) cout << "Joint world record...\n";
        if (product > c) cout << "World record!\n";
    }
    return 0;
}