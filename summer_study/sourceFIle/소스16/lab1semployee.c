#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct employee { //�ڱ����� ����ü ����
	char* name;
	int salary;
	struct employee* next;
} employee;

int main(void)
{
	employee* you = (employee*)malloc(sizeof(employee));
	employee* one = (employee*)malloc(sizeof(employee));

	you->name = (char*)malloc(strlen("������") + 1);
	strcpy(you->name, "������");
	you->salary = 2000000;
	one->name = (char*)malloc(strlen("������") + 1);
	strcpy(one->name, "������");
	one->salary = 1000000;

	you->next = one;
	printf("%s %d\n", you->name, you->salary);
	printf("%s %d\n", one->name, one->salary);
	printf("%s %d\n", you->next->name, you->next->salary);

	//�����޸� �Ҵ� ����
	free(one);
	free(you);

	return 0;
}
