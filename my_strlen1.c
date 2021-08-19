#include<stdio.h>
int my_strlen(char* str);
int my_strlen(char* str){
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
}
int main(){
	char arr[] = "abcd";
	int re = my_strlen(arr);
	printf("%d\n", re);
}