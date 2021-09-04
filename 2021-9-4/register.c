#include<stdio.h>
int main(){
	//register 定义时会将变量存储到CPU的寄存器内，提高了效率
	register int i;
	int temp;
	for (i = 0; i < 100; i++){
		temp += i;
	}
	printf("%d ", temp);
}