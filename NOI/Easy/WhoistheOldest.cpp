#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a > b && a > c) cout << "Alvin\n";
    if (b > a && b > c) cout << "Berto\n";
    if (c > a && c > b) cout << "Carlo\n";
    return 0;
}