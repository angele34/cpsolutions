// https://open.kattis.com/problems/batterup

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; // num of bats
    float avg = 0.0;
    int denominator = n, walks = 0;
    while (n--) {
        int a; cin >> a;
        if (a >= 0) avg += a;
        else walks++;
    }
    denominator-=walks;
    avg/=denominator;
    cout << avg;
}