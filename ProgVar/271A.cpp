#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    
    for (int i = y; ; i++) {
        string s = to_string(i);
         set<int> year(s.begin(), s.end());
         
         if (s.size() == year.size() && i > y) {
             cout << i;
             return 0;
         }
    }
}