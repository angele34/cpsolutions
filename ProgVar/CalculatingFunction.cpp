#include <bits/stdc++.h>
using namespace std;
     
int main() {
    long long n;
    cin >> n;
    long long answer = 0;
    if (n % 2 == 0) {
        answer = n / 2;
    }
    else {
        answer = -(n + 1) / 2;
    }
    cout << answer << endl;
    return 0;
}

