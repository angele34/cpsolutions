#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n;
    cin >> n;

    vector<int> v = {1, 5, 10, 20, 100};
    sort(v.rbegin(), v.rend());
    
    lli sum = 0, count = 0;
    for (int i = 0; i < v.size(); i++) {
        while (sum + v[i] <= n) {
            sum += v[i];
            count++;
        }
        if (sum == n) break;
    }
    cout << count << endl;
    return 0;
}