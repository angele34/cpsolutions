#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli n;
    cin >> n;

    vector<int> v = {100, 20, 10, 5, 1};
    lli sum = 0, count = 0;
    
    for (int i = 0; i < v.size(); i++) {
        while (sum + v[i] <= n) {
            sum += v[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}