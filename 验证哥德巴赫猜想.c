#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sushu(int k){
	int i;
	for (i = 2; i < k; i++){
		if (k%i == 0)
			return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 2; i <= n / 2; i++){
		if (sushu(i) == 1){
			j = 10 - i;
			if (sushu(j) == 1){
				printf("%d+%d=%d\n", i, j, n);

			}
		}
	}
}