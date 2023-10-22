#include <iostream>
using namespace std;

int main() {
    string s, c;
    cin >> s;
    
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] == '.') c+='0';
        else if (s[i] == '-' && s[i+1] == '.') c+='1';
        else if (s[i] == '-' && s[i+1] == '-') c+='2';
    }
    cout << c << '\n';
    return 0;
}
