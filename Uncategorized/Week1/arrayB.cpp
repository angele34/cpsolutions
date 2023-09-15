#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int l;
        cin >> l;
        l -= 1;
        if (0 <= l && l < n) {
            cout << arr[l] << endl;
        } else {
            cout << "INVALID" << endl;
        }
    }
    return 0;
}