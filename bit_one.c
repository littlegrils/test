#include<stdio.h>
int get_bit_one(int a){
	int count = 0;
	while (a){
		a = a&(a - 1);
		count++;
	}
	return count;
}
int main(){
	int n;
	printf("请输入一个随机数:");
	scanf("%d", &n);
	int re=get_bit_one(n);
	printf("这个数中有%d个比特位\n", re);
	return 0;
}