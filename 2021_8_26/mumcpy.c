#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_mumcpy(void* dest, const void* src, size_t num){
	assert(dest&&src);
	char* ret = dest;
	//һ���ֽ�һ���ֽڽ��п���
	while (num--){
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main(){
	int a1[] = { 1, 2, 3, 4, 5, 6 };
	int a2[] = { 0 };
	my_mumcpy(a2, a1, sizeof(a1));
	int i;
	for (i = 0; i < sizeof(a1) / sizeof(a1[0]); i++){
		printf("%d ", a2[i]);
	}
}