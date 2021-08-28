#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* dest, const char* src){
	assert(dest&&src);
	char* s1 = dest;
	char* s2 = src;
	char* cur = dest;
	if (*src == '\0'){
		return dest;
	}
	while (*cur){
		s1 = cur;
		s2 = src;
		while (*dest == *src){
			s1++;
			s2++;
		}
		s1++;
		if (s2 == '\0'){
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main(){
	char a1[] = "abcdef";
	char a2[] = "cde";
	char* ret = my_strstr(a1, a2);
	if (ret == NULL){
		printf("´Ë×Ö·û´®²»´æÔÚ\n");
	}
	else{
		printf("%s\n", ret);
	}
}