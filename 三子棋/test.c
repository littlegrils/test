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
	*�������Ӯ
	#�������Ӯ
	C�Ǽ���
	Q��ƽ��
	*/
	if (re == '*'){
		printf("���Ӯ!\n");
	}
	else if (re == '#'){
		printf("����Ӯ\n");
	}
	else{
		printf("ƽ��\n");
	}
}
void test(){
	int input;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int main(){
	test();
	return 0;
}