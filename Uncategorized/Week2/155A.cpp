#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int count = 0;
    int first = v[0];
    int second = v[0];
    
    for (int i = 1; i < n; i++) {
        if (v[i] > first) { 
            count++; 
            first = v[i]; /
        } else if (v[i] < second) {
            count++;
            second = v[i]; 
        }
    }
    cout << count << endl;
    return 0;
}