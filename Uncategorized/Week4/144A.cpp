#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto mx = max_element(v.begin(),v.end());
    auto mi = min_element(v.begin(), v.end());
    if (v[0] == *mx && v[n-1] == *mi) {
        cout << count;
        return 0;
    }
    
    int index_mx, index_min;;
    // find index of max element and min element
    for(int i = 0; i < n; i++) {
        if (v[i]==*mx) index_mx = i+1;
        if (v[i]==*mi) index_min = i+1;
    }
    // swap till reach index
    while (index_mx != 1) {
        index_mx--;
        count++;
    }
    while (index_min != n) {
        index_min++;
        count++;
    }
    cout << *mx << " " << *mi << endl;
    cout << index_mx << " " <<  index_min << endl;
    cout << count << endl;
    return 0;
}
