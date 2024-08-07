#include <stdio.h>

void MoveDisk(char from, char to) {
	printf("Chuyen dia tu %c sang %c\n", from, to);
}

void Tower(int n, char colA, char colB, char colC) {
	if (n == 1) {
		MoveDisk(colA, colC);
		return;
	}
	Tower(n - 1, colA, colC, colB);
	MoveDisk(colA, colC);
	Tower(n - 1, colB, colA, colC);
}

int main() {
	int n = 3; // Số lượng đĩa
	Tower(n, 'A', 'B', 'C');
	return 0;
}