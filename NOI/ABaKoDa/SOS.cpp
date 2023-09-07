#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,y,x,c = "...---..."; cin >> s;

    for (int i = 0; i < 9; i++)  {
        y += s[i];
    }

    for (int i = s.length() - 1; x.length() < 9; i--) {
        x += s[i];
    }
    if (y == c || x == c) {
        cout << "SOS\n";
    } else {
        cout << "Hay SOS!\n";
    }
    return 0;
}