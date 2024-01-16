#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n;
    char o = 'o';
    cin >> n;
    
    string s = "L";
    string temp(n, o); 
    s+=temp;
    s += 'n';
    s += 'g';
    cout << s << '\n';
    return 0;
}
