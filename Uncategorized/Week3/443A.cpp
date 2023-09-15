#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char> s;
    string g;
    getline(cin, g);
    
    for (char ch : g) {
        if (isalpha(ch)) {
            s.insert(ch);
        }
    }
    cout << s.size() << endl;
    return 0;
}