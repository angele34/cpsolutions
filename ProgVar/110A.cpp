#include <bits/stdc++.h>
using namespace std;

int main () {
    long long int n;
    cin >> n;
    string str = to_string(n);
    long long int count = 0;
    
    for (char i : str) {
        if (i == '4' || i == '7') {
            count++;
        }
    }
    if (count == 7 || count == 4) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
