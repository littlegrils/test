#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"
#include<string.h>
void InitContact(struct Contact* ps){
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL){
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}
void CheckCapacity(struct Contact* ps){
	if (ps->size == ps->capacity){
		//满了，增容
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL){
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else{
			printf("增容失败\n");
		}
	}

}
void AddContact(struct Contact* ps){
	/*if (ps->size == MAX){
	printf("通讯录已满\n");
	}
	else{
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tel);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
	}*/
	//检测当前通讯录的容量
	//1.如果满了，就增加空间
	//2.如果不满，啥事都不干
	CheckCapacity(ps);
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->size].tel);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}

void ShowContact(const struct Contact* ps){
	if (ps->size == 0){
		printf("通讯录为空\n");
	}
	else{
		int i;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++){
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tel,
				ps->data[i].addr);
		}
	}
}
static int FindByName(struct Contact* ps, char name[MAX_NAME]){
	int i = 0;
	for (i = 0; i < ps->size; i++){
		if (0 == strcmp(ps->data[i].name, name)){
			return i;
		}
	}
	return -1;
}
void DELContact(struct Contact* ps){
	char name[MAX_NAME];
	int pos = 0;
	printf("请输入要删除的名字:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1){
		printf("找不到此人\n");
	}
	else{
		int j;
		for (j = pos; j < ps->size - 1; j++){
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void MODIFYContact(struct Contact* ps){
	char name[MAX_NAME];
	printf("请输入你要修改的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1){
		printf("查无此人\n");
	}
	else{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tel);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改成功\n");
	}
}
void SearchContact(struct Contact* ps){
	char name[MAX_NAME];
	printf("请输入你要查找的名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1){
		printf("查无此人\n");
	}
	else{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tel,
			ps->data[pos].addr);
	}
}
void DestoryContact(struct Contact* ps){
	free(ps->data);
	ps->data = NULL;
}