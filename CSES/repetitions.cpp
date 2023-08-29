#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int count = 0, ans = 1;
    char x = 'A';
    for (char c : s) {
        if (c == x) {
            count++;
            ans = max(count,ans);
        }
        else {
            x = c;
            count = 1;
        }
    }
    cout << ans;
}