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
	printf("������һ�������:");
	scanf("%d", &n);
	int re=get_bit_one(n);
	printf("���������%d������λ\n", re);
	return 0;
}