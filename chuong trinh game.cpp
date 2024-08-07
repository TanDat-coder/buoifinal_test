//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//#define WIDTH 30
//#define HEIGHT 20
//#define UP 72
//#define DOWN 80
//#define LEFT 75
//#define RIGHT 77
//
//int x, y, fruitX, fruitY;
//int gameOver;
//
//void Setup()
//{
//	x = WIDTH / 2;
//	y = HEIGHT / 2;
//	fruitX = rand() % WIDTH;
//	fruitY = rand() % HEIGHT;
//	gameOver = 0;
//}
//
//void Draw()
//{
//	system("cls");
//
//	for (int i = 0; i < WIDTH + 2; i++)
//		printf("#");
//	printf("\n");
//
//	for (int i = 0; i < HEIGHT; i++)
//	{
//		for (int j = 0; j < WIDTH; j++)
//		{
//			if (j == 0 || j == WIDTH - 1)
//				printf("#");
//			else if (i == y && j == x)
//				printf("O");
//			else if (i == fruitY && j == fruitX)
//				printf("F");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	for (int i = 0; i < WIDTH + 2; i++)
//		printf("#");
//	printf("\n");
//}
//
//void Input()
//{
//	if (_kbhit())
//	{
//		switch (_getch())
//		{
//		case 'w':
//			y--;
//			break;
//		case 's':
//			y++;
//			break;
//		case 'a':
//			x--;
//			break;
//		case 'd':
//			x++;
//			break;
//		case 'x':
//			gameOver = 1;
//			break;
//		}
//	}
//}
//
//void Logic()
//{
//	if (x >= WIDTH || x < 0 || y >= HEIGHT || y < 0)
//		gameOver = 1;
//	if (x == fruitX && y == fruitY)
//	{
//		fruitX = rand() % WIDTH;
//		fruitY = rand() % HEIGHT;
//	}
//}
//
//int main()
//{
//	Setup();
//
//	while (!gameOver)
//	{
//		Draw();
//		Input();
//		Logic();
//		Sleep(1); // Thời gian delay giữa các frame
//	}
//
//	return 0;
//}