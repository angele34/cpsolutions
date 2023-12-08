#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<string,int> names;
    for (int i = 0; i < n; i++) {
        string name, score; cin >> name >> score;
        names[name] = i+1;
    }
    int request; cin >> request;
    while (request--) {
        string k; cin >> k;
        if (names.find(k) != names.end()) {
            cout << names[k] << '\n';
        }
    }
    return 0;
}
