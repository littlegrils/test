#include<assert.h>
#include<stdio.h>
char* my_strcpy(char* str1, char* str2){
	char* ret = str1;
	assert(str1 != NULL);
	assert(str1 != NULL);
	while (*str1++ = *str2++){
		;
	}
	return ret;
}
int main(){
	char a1[] = "abcd";
	char a2[] = "*******";
	printf("%s\n", my_strcpy(a1, a2));
	return 0;
}