#include<stdio.h>
#include<math.h>
int main(){
	int i;
	for (i = 0; i <= 10000; i++){
		int n = 1;
		int temp=i;
		int sum;
		//����λ��
		while (temp /= 10){
			n++;
		}
		//�����λ���ϵ�������
		temp = i;
		while (temp){
			sum += pow(temp % 10, n);
			temp /= 10;
		}
		//�ж�i��sum�Ƿ����
		if (i == sum){
			printf("%d ", i);
		}
	}
}