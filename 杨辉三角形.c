#include<stdio.h>
int main(){
	int a[10][10] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			//打印第一列
			if (j == 0){
				a[i][j] = 1;
			}
			//打印斜着的一列
			if (i == j){
				a[i][j] = 1;
			}
			if (i >= 2 && j >= 1){
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++){
		for (j = 0; j <= i; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}