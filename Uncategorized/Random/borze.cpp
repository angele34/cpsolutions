#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    string s, c = " ";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            c+='0';
        } else if (s[i]=='-' && s[i+1]=='.') {
            c+='1';
            i++;
        } else if (s[i] == '-' && s[i+1] == s[i]) {
            c+='2';
            i++;
        }
    }
    cout << c << '\n';
    return 0;
}