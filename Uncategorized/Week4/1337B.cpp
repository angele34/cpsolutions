#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int health,n,m;
        cin >> health >> n >> m;
        
        while (health > 0 && n > 0 && health / 2 + 10 < health) {
            n--;
            health = (health / 2) + 10;
        }
        if (health <= m*10)  cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}