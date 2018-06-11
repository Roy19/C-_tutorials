#include "board.hpp"

int main() {
	Board b;
	string Player1, Player2;
	getline(cin, Player1);
	getline(cin, Player2);
	while (1) {
		int row, column;
		cin >> row >> column;
		b.setXY(row, column, 'x');
		cin >> row >> column;
		b.setXY(row, column, 'o');
		if (b.checkX() == 1) {
			cout << Player1 << " wins" << endl;
			break;
		}
		if(b.checkO() == 1) {
			cout << Player2 << " wins" << endl;
			break;
		}
	}
	b.printBoard();
	return 0;
}