#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string,int> prizes;
    for (int i = 0; i < 3; i++) {
        string prize;
        int amount;
        cin >> prize >> amount;
        prizes[prize] = amount;
    }
    
    int max_val = 0;
    string max_amount;
    
    for (const auto& pair : prizes) {
        if (pair.second > max_val) {
            max_val = pair.second;
            max_amount = pair.first;
        }
    }
    
    int total = 0;
    for (const auto& pair : prizes) {
        total += pair.second;
    }
    int final = total - max_val;
    if (final < max_val) {
        cout << "YES" << endl;
        cout << max_amount << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}