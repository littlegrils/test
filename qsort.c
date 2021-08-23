#include<stdio.h>
#include<string.h>
struct stu{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2){
	              //强制类型转换
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test(){
	struct stu s[3] = { { "lisi", 10 }, { "zhangsan", 20 }, { "wangwu", 5 } };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(变量名称，变量的数组大小，变量所占的字节，传递两个相邻变量的值
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

}
int main(){
	test();
	return 0;
}