#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }
        sort(begin(arr), end(arr));
        cout << arr[1] << "\n";
    }
    return 0;
}