#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void printHeart(char heart[20][20]) {
	int i, j;
	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++) {
			printf("%c", heart[i][j]);
		}
		printf("\n");
	}
}

int main() {
	char heart[20][20];
	int i, j;

	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++) {
			heart[i][j] = ' ';
		}
	}

	for (i = 0; i < 6; i++) {
		for (j = 0; j <= 6; j++) {
			if ((i == 0 && j % 3 != 0) || (i == 1 && j % 3 == 0) || (i - j == 2) || (i + j == 8))
				heart[i][j] = '*';
		}
	}

	for (i = 2; i < 6; i++) {
		for (j = 1; j < 5; j++) {
			if ((i - j == 2) || (i + j == 8))
				heart[i][j] = ' ';
		}
	}

	heart[3][2] = 'a';
	heart[3][3] = 'b';
	heart[3][4] = 'c';

	printHeart(heart);

	printf("\nPress any key to exit...");
	getchar(); // Đọc một ký tự từ bàn phím

	return 0;
}