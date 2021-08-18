#include<stdio.h>
int fac(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	else{
		return fac(n - 1) + fac(n - 2);
	}
}
int main(){
	int a;
	printf("请输入第几项:");
	scanf("%d", a);
	int re=fac(a);
	printf("%d\n", re);
}