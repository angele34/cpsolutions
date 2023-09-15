#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string consonants = "BCDFGHJKLMNPQRSTVWXZ";

    int current_len = 0;
    int consecutive = 0;
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (consonants.find(c) != string::npos) {
            current_len += 1;
            consecutive = max(consecutive,current_len);
        } else {
            current_len = 0;
        }
    }
    cout << consecutive + 1 << "\n";
    return 0;
}