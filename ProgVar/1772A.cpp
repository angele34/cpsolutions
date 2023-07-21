#include <bits/stdc++.h>
using namespace std;
int main() {
     int t;
     cin >> t;
     
     while (t--) {
         string ab;
         cin >> ab;
         char a = ab[0];
         char b = ab[2];
         int num1 = a - '0';
         int num2 = b - '0';
         int sum = num1 + num2;
         cout << sum << endl;
     }
    return 0;
}