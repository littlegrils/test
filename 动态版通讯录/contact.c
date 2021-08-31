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
		//���ˣ�����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL){
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else{
			printf("����ʧ��\n");
		}
	}

}
void AddContact(struct Contact* ps){
	/*if (ps->size == MAX){
	printf("ͨѶ¼����\n");
	}
	else{
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tel);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
	}*/
	//��⵱ǰͨѶ¼������
	//1.������ˣ������ӿռ�
	//2.���������ɶ�¶�����
	CheckCapacity(ps);
	printf("����������:>");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->size].tel);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* ps){
	if (ps->size == 0){
		printf("ͨѶ¼Ϊ��\n");
	}
	else{
		int i;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ��������:>");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1){
		printf("�Ҳ�������\n");
	}
	else{
		int j;
		for (j = pos; j < ps->size - 1; j++){
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void MODIFYContact(struct Contact* ps){
	char name[MAX_NAME];
	printf("��������Ҫ�޸ĵ�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1){
		printf("���޴���\n");
	}
	else{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tel);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}
void SearchContact(struct Contact* ps){
	char name[MAX_NAME];
	printf("��������Ҫ���ҵ�����:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1){
		printf("���޴���\n");
	}
	else{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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