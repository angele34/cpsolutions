#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    int countA = 0;
    int countB = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            countA++;
        }
        else {
            countB++;
        }
    }
    
    if (countA > countB) {
        cout << "Anton";
    }
    else if (countB > countA) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
    return 0;
}