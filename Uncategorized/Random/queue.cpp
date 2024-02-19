#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n,t;
    string s;
    cin >> n >> t >> s;
    
    while(t--) {
        for (int i = 0; i < s.length()-1; i++) {
            char temp = s[i];
            if (s[i] == 'B' && s[i+1] == 'G') {
                s[i] = s[i+1];
                s[i+1] = temp;
                i++;
            }
        }
    }
    cout << s << '\n';
    return 0;
}