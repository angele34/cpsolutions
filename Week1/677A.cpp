#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > h) {
            width += 2;
        } else {
            width++;
        }
    }
    cout << width << endl;
    return 0;
}
