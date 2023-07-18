#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin >> N;
    
    int day = 1;
    long long x = 1;

    for (int i = 0; x < N; i++) {
        int y = i + 2;
        x += y;
        day++;
    }
    cout << day << endl;
    return 0;
}