int my_strlen(char* str){
	int count;
	while (*str != '\0'){
		count++;
		str++;
	}
}
int main(){
	char a[] = "abc";
	int re = my_strlen(a);
	printf("%d", re);
}