#include <bits/stdc++.h>
using namespace std;

int main() {
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    char shift;
    string s, word;
    cin >> shift >> s;
    
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < keyboard.length(); j++) {
            if (s[i] == keyboard[j]) {
                if (shift == 'L') {
                    word+=keyboard[j+1];
                } else {
                    word+=keyboard[j-1];
                }
            }
        }
    }
    cout << word << '\n';
    return 0;
}