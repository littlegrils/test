#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main(){
	//�����ļ�
	FILE*  pf = fopen("test.txt", "r");
	//�ҳ��ļ����ܳ��ֵĴ���
	if (pf == NULL){
		printf("%s\n", strerror(errno));
	}
	else{
		printf("open file success\n");
	}
	return 0;
}