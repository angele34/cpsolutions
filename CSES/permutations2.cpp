#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    vector<int> e, o;
    for (int i = 1; i < n+1; i++) {
        if (i%2==0) e.push_back(i);
        else o.push_back(i);
    }
    e.insert(e.end(), o.begin(), o.end());
    for (auto x : e) {
        cout << x << " ";
    }
    return 0;
}