#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli x;
    cin >> x;

    lli bin[32];
    int i = 0;
    while(x>0) {
        bin[i] = x%2;
        x/=2;
        i++;
    }
    lli n=0, j=0;
    while (j < i && bin[j] == 0) {
        n++;
        j++;
    }
    cout << n << '\n';
    return 0;
}
