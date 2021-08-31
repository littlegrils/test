#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void menu(){
	printf("*************************************\n");
	printf("*****  1.add          2.del     *****\n");
	printf("*****  3.modify       4.search  *****\n");
	printf("*****  5.show         6.sort    *****\n");
	printf("*****  0.exit                   *****\n");
	printf("*************************************\n");


}
int main()
{
	int input;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含：data指针和size和capacity
	//初始化
	InitContact(&con);
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input){
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DELContact(&con);
			break;
		case MODIFY:
			MODIFYContact(&con);
			break;
		case SERCH:
			SearchContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			//销毁通讯录—释放动态开辟的内存
			DestoryContact(&con);
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;

		}
	} while (input);
	return 0;
}