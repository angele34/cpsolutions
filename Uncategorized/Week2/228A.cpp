#include <bits/stdc++.h>
using namespace std;

int main() {
    int min = 0;
    long long int s[4];
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < 4; i++) {
        bool duplicate = false;
        for (int j = i + 1; j < 4; j++) {
            if (s[i] == s[j]) {
                duplicate = true;
                break;
            }
        }
        if (duplicate) {
            min++;
        }
    }
    cout << min << endl;
    return 0;
}
