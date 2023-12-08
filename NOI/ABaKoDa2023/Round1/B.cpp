#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, A = 0, B = 0, K = 0, D = 0;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'A') A++;
			else if (s[i] == 'B') B++;
			else if (s[i] == 'K') K++;
			else D++;
		}
	}
	cout << A << " " << B << " " << K << " " << D;
	return 0;
}