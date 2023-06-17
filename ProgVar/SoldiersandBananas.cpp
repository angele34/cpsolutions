#include <iostream>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    int N = 0;
    
    for (int i = 1; i <= w; i++) {
        total += i * k;
    }
    if (total > n) {
        N = total - n;
    }
    cout << N << endl;
    return 0;
}