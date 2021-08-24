#include<stdio.h>
#include<math.h>
int main(){
	int i;
	for (i = 0; i <= 10000; i++){
		int n = 1;
		int temp=i;
		int sum;
		//计算位数
		while (temp /= 10){
			n++;
		}
		//计算各位数上的立方和
		temp = i;
		while (temp){
			sum += pow(temp % 10, n);
			temp /= 10;
		}
		//判断i与sum是否相等
		if (i == sum){
			printf("%d ", i);
		}
	}
}