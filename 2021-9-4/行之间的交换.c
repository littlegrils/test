#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int i, j, m, n;
	int a[5][5] = { 0 };
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			scanf("%d ", &a[i][j]);
		}

	}
	scanf("%d %d", &m, &n);
	for (j = 0; j < 5; j++){
		int temp = a[n - 1][j];
		a[n - 1][j] = a[m - 1][j];
		a[m - 1][j] = temp;
	}
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}