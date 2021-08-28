#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, char* src){
	assert(dest&&src);
	char* ret = dest;
	while (*dest){
		dest++;
	}
	while (*dest++ = *src++){
		;
	}
	return ret;
}
int main04(){
	char a1[30] = "abcdef";
	char a2[] = "boy";
	char * ret = my_strcat(a1, a2);
	printf("%s\n", ret);
}