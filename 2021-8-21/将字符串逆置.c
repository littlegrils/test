#include<stdio.h>
int my_strlen(char* str){
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
}
void reverse(char* str){
	int sz = my_strlen(str);
	char temp = str[0];
	str[0] = str[sz - 1];
	str[sz - 1] = '\0';
	if (my_strlen(str + 1) >= 2){
		reverse(str + 1);
	}
	str[sz - 1] = temp;
}
int main(){
	char a[] = "I am a boy";
	reverse(a);
	printf("%s", a);
	return 0;
}