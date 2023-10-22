#include <bits/stdc++.h>
using namespace std; 

int main() {
    int k;
    cin >> k;
    
    vector<int> a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int val = 0, months = 0;
     for (int i = 0; i < a.size(); i++) {
         if (val >= k) {
             break;
         } else {
             val += a[i];
             months++;
         }
     }
     if (val < k) {
        cout << -1 << '\n';
     } else {
        cout << months << '\n';
     }
    return 0;
}