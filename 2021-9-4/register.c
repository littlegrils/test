#include<stdio.h>
int main(){
	//register ����ʱ�Ὣ�����洢��CPU�ļĴ����ڣ������Ч��
	register int i;
	int temp;
	for (i = 0; i < 100; i++){
		temp += i;
	}
	printf("%d ", temp);
}