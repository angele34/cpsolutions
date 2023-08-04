#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    unordered_set<char> letters = {'T', 'i', 'm', 'u', 'r'};

    while (t--) {
        int n;
        cin >> n;
        string s, c = "Timur";
        cin >> s;
        sort(s.begin(), s.end());
        sort(c.begin(), c.end());
        
        if (s == c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
