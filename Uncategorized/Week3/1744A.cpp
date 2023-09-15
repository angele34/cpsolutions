#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        string s; cin >> s;
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (arr[i] == arr[j] && s[i] != s[j]) {
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}