#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int left = 0, right = n - 1, final = n;
        while (s[left] != s[right] && final > 0) {
            left++;
            right--;
            final -= 2;
        }
        cout << final << "\n";
    }
    return 0;
}