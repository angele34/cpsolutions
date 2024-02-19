#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mi = abs(a[0]-a[n-1]);
    int x = 1, y = n;
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = abs(a[i]-a[j]);
            if (temp<mi){
                mi = temp;
                x = i+1;
                y = j+1;
            }
            break;
        }
    }
    cout << x << " " << y << '\n';
    return 0;
}
