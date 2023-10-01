#include <bits/stdc++.h>
using namespace std;

// A less complicated method that doesn't involve sorting would be to iterate from 1 to n+1

int main() {
    int n;
    cin >> n;
    
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    vector<int> e, o;
    for (int i = n; i > 0; i--) {
        if (i%2==0) e.push_back(i);
        else o.push_back(i);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    e.insert(e.end(), o.begin(), o.end());
    for (auto x : e) {
        cout << x << " ";
    }
    
    return 0;
}