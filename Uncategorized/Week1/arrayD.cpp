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
        int l,j;
        cin >> l >> j;
        l -= 1;
        j -= 1;
        
        if (0 <= l && l < n && 0 <= j && j < n) {
            int temp = arr[l];
            arr[l] = arr[j];
            arr[j] = temp;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}