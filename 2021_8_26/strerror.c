#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main(){
	//查找文件
	FILE*  pf = fopen("test.txt", "r");
	//找出文件可能出现的错误
	if (pf == NULL){
		printf("%s\n", strerror(errno));
	}
	else{
		printf("open file success\n");
	}
	return 0;
}