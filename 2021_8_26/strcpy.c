#include<stdio.h>
#include<assert.h>
char *  my_strcpy(char* s1, const char* s2){
	assert(s1&&s2);
	char* ret = s1;
	while (*s1++ == *s2++){
		;
	}
	return ret;
}
int main03(){
	char a1[] = "abcdef";
	char a2[] = "bit";
	char*ret = my_strcpy(a2, a1);
	printf("%s ", ret);
}