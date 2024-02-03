#include <bits/stdc++.h>
using namespace std;
// Could be optimized
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string platy_moves, oof_moves;
	cin >> platy_moves >> oof_moves;
	int score_platy = 0, score_oof = 0;

	if (platy_moves == oof_moves) {
		score_platy++;
		score_oof++;
	}
	// PAPER ROCK
	else if (platy_moves == "PAPER" && oof_moves == "ROCK") {
		score_platy++;
	} else if (platy_moves == "ROCK" && oof_moves == "PAPER") {
		score_oof++;
	}
	// SCISSORS PAPER
	else if (platy_moves == "SCISSORS" && oof_moves == "PAPER") {
		score_platy++;
	} else if (platy_moves == "PAPER" && oof_moves == "SCISSORS") {
		score_oof++;
	}
	// ROCK SCISSORS
	else if (platy_moves == "ROCK" && oof_moves == "SCISSORS") {
		score_platy++;
	} else if (platy_moves == "SCISSORS" && oof_moves == "ROCK") {
		score_oof++;
	}

	// GUNS
	else if (platy_moves == "GUN" && (oof_moves == "ROCK" || oof_moves == "PAPER" || oof_moves == "SCISSORS")) {
		score_platy++;
	} else if (oof_moves == "GUN" && (platy_moves == "ROCK" || platy_moves == "PAPER" || platy_moves == "SCISSORS")) {
		score_oof++;
	}
	// SLAP
	else if (platy_moves == "SLAP" && oof_moves == "GUN") {
		score_platy++;
	} else if (platy_moves == "GUN" && oof_moves == "SLAP") {
		score_oof++;
	}
	
	else if (platy_moves == "SLAP" && (oof_moves == "ROCK" || oof_moves == "PAPER" || oof_moves == "SCISSORS")) {
		score_oof++;
	} else if (oof_moves == "SLAP" && (platy_moves == "ROCK" || platy_moves == "PAPER" || platy_moves == "SCISSORS")) {
		score_platy++;
	}
	
	// WINNER 
	if (score_platy>score_oof) {
		cout << "PLATYPUS";
	} else if (score_platy<score_oof) {
		cout << "OOF";
	} else {
		cout << "TIE";
	}
    return 0;
}
