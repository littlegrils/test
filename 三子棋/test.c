#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu(){
	printf("************************\n");
	printf("**** 1.play  0.exit ****\n");
	printf("************************\n");

}
void game(){
	char re;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1){
		PlayBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		re = IsWin(board, ROW, COL);
		if (re != 'C'){
			break;
		}
		ComputerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		re = IsWin(board, ROW, COL);
		if (re != 'C'){
			break;
		}
	}
	/* 
	*代表玩家赢
	#代表电脑赢
	C是继续
	Q是平局
	*/
	if (re == '*'){
		printf("玩家赢!\n");
	}
	else if (re == '#'){
		printf("电脑赢\n");
	}
	else{
		printf("平局\n");
	}
}
void test(){
	int input;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}
int main(){
	test();
	return 0;
}