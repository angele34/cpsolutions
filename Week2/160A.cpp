#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int sum1 = 0, count = 0;
    for (int i = n-1; i >= 0; i--) {
        sum1 += arr[i];
        count++;
        if (sum1 > sum/2) {
            break;
        }
    } 
    cout << count;
    return 0;
}