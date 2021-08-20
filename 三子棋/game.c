#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
//初始化数组
void InitBoard(char board[ROW][COL], int row, int col){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}
//演示面板
void DisplayBoard(char board[ROW][COL], int row, int col){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf(" %c ", board[i][j]);
			if (j < col - 1){
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1){
			for (j = 0; j < col; j++){
				printf("___");
				if (j < col - 1){
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家走
void PlayBoard(char board[ROW][COL], int row, int col){
	int x, y;
	printf("玩家走:>\n");
	while (1){
		printf("请输入下棋的坐标:>");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col){
			if (board[x - 1][y - 1] == ' '){
				board[x - 1][y - 1] = '*';
				break;
			}
			else{
				printf("此坐标被占用\n");
			}
		}
		else{
			printf("输入错误!\n");
		}
	}
}
//电脑走
void ComputerBoard(char board[ROW][COL], int row, int col){
	int x, y;
	printf("电脑走:>\n");
	while (1){
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}
//满的话返回1 不满返回0
int IsFull(char board[ROW][COL], int row, int col){
	int i, j;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col){
	int i, j;
	//横三排
	for (i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' '){
			return board[i][1];
		}
	}
	//竖三列
	for (j = 0; j < col; j++){
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' '){
			return board[1][j];
		}
	}
	//斜着
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' '){
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' '){
		return board[1][1];
	}
	if (1 == IsFull(board, ROW, COL)){
		return 'Q';
	}
	else{
		return 'C';
	}
}