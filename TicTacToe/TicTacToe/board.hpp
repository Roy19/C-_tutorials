#pragma once
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Board {
	char board[4][4];
public:
	Board();
	void printBoard();
	void setXY(int row, int column, char value);
	int checkX();
	int checkO();
};