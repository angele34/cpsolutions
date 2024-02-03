#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin >> n;

    /*Get dna input, check if it has a pair in the input list */
    // bug: FORGOT TO PUT RACOON ROLL

    map<char,char> complements = {{'A','T'}, {'T','A'}, {'C','G'}, {'G','C'}};
    vector<string> dna(n);
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l >> dna[i];
    }
    vector<int> indices;
	for (int i = 0; i < dna.size(); i++) {
        string s;
        for (char c : dna[i]) {
            s+=complements[c];
        }
        reverse(s.begin(),s.end());
        auto it = find(dna.begin(),dna.end(),s);
        if (it!=dna.end()) {
            indices.push_back(i);
        }
    }
    if (!indices.empty()) {
        for (auto x : indices) {
            cout << x+1 << " ";
        }
    } else {
        cout << "RACOON ROLL";
    }
    return 0;
}
