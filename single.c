#include<stdio.h>
int cmp_arr(const void*e1, const void*e2){
	return (*(int*)e1 - *(int*)e2);
}
void single(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz - 1;){
		if (arr[i] == arr[i + 1]){
			i = i + 2;
		}
		else{
			printf("%d ", arr[i]);
			i++;
		}
	}
}
int main(){
	int arr[] = { 4, 3, 4, 3, 2, 8, 10, 7, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_arr);
	single(arr, sz);
	return 0;
}