#include<stdio.h>
void count(int a){
	int i;
	for (i = 31; i >= 0; i -= 2){
		printf("%d", 1 & (a >> i));
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2){
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d", &n);
	count(n);

}