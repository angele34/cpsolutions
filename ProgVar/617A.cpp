#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int length = 0;
    int i = 0;
    
    while (x > i) {
        i += 5;
        length++;
    }
    cout << length << endl;
    return 0;
      
}