#include<stdio.h>
int my_strlen(char* p){
	int count = 0;
	while (*p != '\0'){
		count++;
		p++;
	}
	return count;
}
int main02(){
	char ch[] = "abcdef";
	int ret = my_strlen(ch);
	printf("%d ", ret);
}