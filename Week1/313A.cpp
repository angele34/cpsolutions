#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int P[N];
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    int s = 0;
    for (int i = 1; i < N; i++) {
        s = max(s, P[i]);
    }
    if (s >= P[0]) {
        int diff = 1 - P[0];
        if (s + diff >= 0) {
            s += diff;
        }
    } else {
        s = 0;
    }
    cout << s << endl;
    return 0;
}