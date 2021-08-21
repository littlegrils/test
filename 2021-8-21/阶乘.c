#define _CRT_SECURE_NO_WARNINGS
int main(){
	int i, j;
	int sum = 0;
	int ret = 1;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		ret = 1;
		for (j = 1; j <= i; j++){
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
}