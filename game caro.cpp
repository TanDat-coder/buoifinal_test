//#include <stdio.h>
//#include <stdbool.h>
//
//#define BOARD_SIZE 15
//
//char board[BOARD_SIZE][BOARD_SIZE];
//int currentPlayer = 1; // Player 1: X, Player 2: O
//
//void initBoard() {
//	for (int i = 0; i < BOARD_SIZE; i++) {
//		for (int j = 0; j < BOARD_SIZE; j++) {
//			board[i][j] = '.';
//		}
//	}
//}
//
//void printBoard() {
//	for (int i = 0; i < BOARD_SIZE; i++) {
//		for (int j = 0; j < BOARD_SIZE; j++) {
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//bool checkWin(int row, int col) {
//	char player = (currentPlayer == 1) ? 'X' : 'O';
//
//	// Check horizontal
//	int count = 1;
//	int i = 1;
//	while (col - i >= 0 && board[row][col - i] == player) {
//		count++;
//		i++;
//	}
//	i = 1;
//	while (col + i < BOARD_SIZE && board[row][col + i] == player) {
//		count++;
//		i++;
//	}
//	if (count >= 5) return true;
//
//	// Check vertical
//	count = 1;
//	i = 1;
//	while (row - i >= 0 && board[row - i][col] == player) {
//		count++;
//		i++;
//	}
//	i = 1;
//	while (row + i < BOARD_SIZE && board[row + i][col] == player) {
//		count++;
//		i++;
//	}
//	if (count >= 5) return true;
//
//	// Check diagonal
//	count = 1;
//	i = 1;
//	while (row - i >= 0 && col - i >= 0 && board[row - i][col - i] == player) {
//		count++;
//		i++;
//	}
//	i = 1;
//	while (row + i < BOARD_SIZE && col + i < BOARD_SIZE && board[row + i][col + i] == player) {
//		count++;
//		i++;
//	}
//	if (count >= 5) return true;
//
//	return false;
//}
//
//int main() {
//	initBoard();
//	int row, col;
//
//	while (true) {
//		printBoard();
//
//		printf("Player %d's turn. Enter row and column (0-14): ", currentPlayer);
//		scanf_s("%d %d", &row, &col);
//
//		if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || board[row][col] != '.') {
//			printf("Invalid move. Try again.\n");
//			continue;
//		}
//
//		board[row][col] = (currentPlayer == 1) ? 'X' : 'O';
//
//		if (checkWin(row, col)) {
//			printBoard();
//			printf("Player %d wins!\n", currentPlayer);
//			break;
//		}
//
//		currentPlayer = (currentPlayer == 1) ? 2 : 1;
//	}
//
//	return 0;
//}