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
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��
	InitContact(&con);
	do{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;

		}
	} while (input);
	return 0;
}