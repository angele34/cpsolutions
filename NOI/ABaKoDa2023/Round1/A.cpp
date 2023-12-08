#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> letters;
    letters["A"] = 1;
    letters["B"] = 2;
    letters["K"] = 3;
    letters["D"] = 4;

    for (auto pair : letters) {
        if (pair.second == n) {
            cout << pair.first << '\n';
            break;
        }
    }
    return 0;
}