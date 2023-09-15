#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string hate = "I hate ";
    string love = "I love ";
    string replace1 = "it";
    string replace = "that ";
    string final;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            final += hate;
        } else {
            final += love;
        }
        
        if (i != n) {
            final += replace;
        } else {
            final += replace1;
        }
    }
    
    cout << final << endl;
    return 0;
}
