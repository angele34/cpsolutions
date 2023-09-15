#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> grid;
    string s;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        grid.push_back(s);
    }

    int rook = 0;
    for (const string& row : grid) {
        for (char ch : row) {
            if (ch == 'R') {
                rook++;
            }
        }
    }
    bool row_can_attack = false;
    for (const string &row : grid) {
        int row_rook_count = 0;
        for (char ch: row) {
            if (ch == 'R') {
                row_rook_count++;
            }
        }
        if (row_rook_count >= 2) {
            row_can_attack = true;
            break;
        }
    }
    bool column_can_attack = false;
    for (int col = 0; col < n; col++) {
        int col_rook_count = 0;
        for (const string& row : grid) {
            if (row[col] == 'R') {
                col_rook_count++;
            }
        }
        if (col_rook_count >= 2) {
            column_can_attack = true;
            break;
        }
    }
    if (row_can_attack || column_can_attack) {
        cout << rook << '\n';
        cout << "YES" << '\n';
    } else {
        cout << rook << '\n';
        cout << "NO" << '\n';
    }
    return 0;
}