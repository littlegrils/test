#define  _CRT_SECURE_NO_WARNINGS
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 30
#include<stdio.h>
#include<string.h>
enum Option{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SERCH,
	SHOW,
	SORT
};
struct PeoInfo{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};
struct Contact{
	struct PeoInfo data[MAX];
	int size;
};
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(struct Contact* ps);
void DELContact(struct Contact* ps);
void MODIFYContact(struct Contact* ps);
void SearchContact(struct Contact* ps);