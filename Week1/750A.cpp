#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    
    int problems = 0;
    int time = 0;
    for (int i = 1; i <= n; i++) {
        time += 5 * i;
        if (time + k <= 240) {
            problems++;
        }
    }
    cout << problems << endl;
    return 0;
}
