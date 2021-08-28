#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, void* src, size_t num){
	assert(dest&&num);
	char* ret = dest;
	if (dest < src){
		while (num--){
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else{
		while (num--){
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main01(){
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(a, a + 2, 20);
	int i;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++){
		printf("%d ", a[i]);
	}
}