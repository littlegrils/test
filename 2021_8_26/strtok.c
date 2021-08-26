#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(){
	char a[] = "192.168.11.121";
	char* p = ".";
	char* ret = NULL;
	char buf[1024] = { 0 };
	strcpy(buf, a);
	for ((ret = strtok(a, p)); (ret != NULL); (ret = strtok(NULL, p))){
		printf("%s\n", ret);
	}
}