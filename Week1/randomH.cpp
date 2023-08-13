#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string st = "st";
    string nd = "nd";
    string rd = "rd";
    string th = "th";

    string numstr = to_string(n);

    if ((n % 100 >= 11) && (n % 100 <= 13)) {
        cout << numstr + th << endl;
    } else if (n % 10 == 1) {
        cout << numstr + st << endl;
    } else if (n % 10 == 2) {
        cout << numstr + nd << endl;
    } else if (n % 10 == 3) {
        cout << numstr + rd << endl;
    } else {
        cout << numstr + th << endl;
    }

    return 0;
}
