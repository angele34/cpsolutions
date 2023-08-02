#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int position = arr[k-1];
    int count = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] >= position && arr[j] > 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}