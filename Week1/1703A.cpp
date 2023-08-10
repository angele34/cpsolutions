#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s, c = "yes";
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << (s == c ? "YES" : "NO") << endl;
    }
    return 0;
}