#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 7) {
            sum += 7;
        } else {
            if (i > 0 && arr[i - 1] == 7) {
                sum += arr[i];
            } else if (i < n - 1 && arr[i + 1] == 7) {
                sum += arr[i];
            }
        }
    }
    cout << sum << endl;
    return 0;
}
