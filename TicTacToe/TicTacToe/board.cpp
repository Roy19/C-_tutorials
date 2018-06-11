#include "board.hpp"

Board::Board() {
	memset(board, '-', 16);
}
void Board::printBoard() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
}
void Board::setXY(int row, int column, char value) {
	board[row][column] = value;
}
int Board::checkX() {
	int i, j;
	// check vertical
	for (i = 0; i < 4; i++) {
		int count = 0;
		for (j = 0; j < 4; j++) {
			if (board[j][i] == 'x')
				count += 1;
		}
		if (count == 4)
			return 1;
	}
	// check horizontal
	for (i = 0; i < 4; i++) {
		int count = 0;
		for (j = 0; j < 4; j++) {
			if (board[i][j] == 'x')
				count += 1;
		}
		if (count == 4)
			return 1;
	}
	// check diagonal
	int countl = 0;
	int countr = 0;
	for (int i = 0; i < 4; i++) {
		if (board[i][i] == 'x')
			countl += 1;
		if (board[i][3 - i] == 'x')
			countr += 1;
	}
	if (countl == 4 || countr == 4)
		return 1;

	return 0;
}
int Board::checkO() {
	int i, j;
	// check vertical
	for (i = 0; i < 4; i++) {
		int count = 0;
		for (j = 0; j < 4; j++) {
			if (board[j][i] == 'o')
				count += 1;
		}
		if (count == 4)
			return 1;
	}
	// check horizontal
	for (i = 0; i < 4; i++) {
		int count = 0;
		for (j = 0; j < 4; j++) {
			if (board[i][j] == 'o')
				count += 1;
		}
		if (count == 4)
			return 1;
	}
	// check diagonal
	int countl = 0;
	int countr = 0;
	for (int i = 0; i < 4; i++) {
		if (board[i][i] == 'o')
			countl += 1;
		if (board[i][3 - i] == 'o')
			countr += 1;
	}
	if (countl == 4 || countr == 4)
		return 1;

	return 0;
}