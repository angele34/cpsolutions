#include <bits/stdc++.h>
using namespace std;

int main() {
   int N;
   cin >> N;
   long long sum = 0;
   
   for (long long i = 0; i < N; i++) {
       long long A, B;
       cin >> A >> B;
       sum += B * (B + 1) / 2 - A * (A - 1) / 2;
   }
    cout << sum << endl;
    return 0;
}