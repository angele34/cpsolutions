#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v;
    for (int i = 0; i < 5; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    reverse(v.begin(), v.end());
    for (const string& s : v) {
            cout << s << endl;
    }
    return 0;
}