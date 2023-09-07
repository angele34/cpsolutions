#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,c = "...---...";
    cin >> s;
    
    if (s.find(c) != string::npos) {
        cout << "SOS\n";
    } else {
        cout << "Hay SOS!\n";
    }
    return 0; 
}