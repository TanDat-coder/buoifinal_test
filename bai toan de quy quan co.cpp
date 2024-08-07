//#include <stdio.h>
//
//#define N 8
//
//int board[N]; // Mảng lưu vị trí quân hậu trên bàn cờ
//
//// Hàm kiểm tra xem việc đặt quân hậu tại hàng row, cột col có hợp lệ không
//int isSafe(int row, int col) {
//	for (int i = 0; i < row; i++) {
//		if (board[i] == col || board[i] - col == i - row || board[i] - col == row - i) {
//			return 0; // Trả về 0 nếu bị xung đột
//		}
//	}
//	return 1; // Trả về 1 nếu không xung đột
//}
//
//// Hàm đệ quy để tìm tất cả các lời giải của bài toán 8 quân hậu
//void solve(int row) {
//	if (row == N) {
//		// Đã đặt hết 8 quân hậu, in ra lời giải
//		for (int i = 0; i < N; i++) {
//			printf("%d ", board[i]);
//		}
//		printf("\n");
//		return;
//	}
//
//	for (int col = 0; col < N; col++) {
//		if (isSafe(row, col)) {
//			board[row] = col;
//			solve(row + 1);
//		}
//	}
//}
//
//int main() {
//	solve(0); // Bắt đầu từ hàng 0
//
//	printf("\nNhan Enter de ket thuc chuong trinh...");
//	getchar(); // Đợi người dùng ấn Enter trước khi kết thúc chương trình
//	return 0;
//}