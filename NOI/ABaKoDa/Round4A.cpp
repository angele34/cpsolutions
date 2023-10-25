#include <bits/stdc++.h>
using namespace std; 

int main() {
    char c;
    cin >> c;
    
    map<char,string> m;
    m['I'] = "#.\n"
            "#.\n"
            "#.\n"
            "#.\n";
            
    m['O'] = "##\n"
            "##\n"
            "..\n"
            "..\n";
            
    m['J'] = ".#\n"
           ".#\n"
           "##\n"
           "..\n";
            
    m['L'] = "#.\n"
           "#.\n"
           "##\n"
           "..\n";

    m['S'] = "#.\n"
          "##\n"
         ".#\n"
         "..\n";

    m['T'] = "#.\n"
            "##\n"
            "#.\n"
            "..\n";

    m['Z'] = ".#\n"
            "##\n"
            "#.\n"
            "..\n";
    
    if (m.find(c) != m.end()) {
        cout << m[c];
    }
    return 0;
}