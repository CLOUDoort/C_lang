#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct employee { //자기참조 구조체 정의
	char* name;
	int salary;
	struct employee* next;
} employee;

int main(void)
{
	employee* you = (employee*)malloc(sizeof(employee));
	employee* one = (employee*)malloc(sizeof(employee));

	you->name = (char*)malloc(strlen("고은아") + 1);
	strcpy(you->name, "고은아");
	you->salary = 2000000;
	one->name = (char*)malloc(strlen("정재형") + 1);
	strcpy(one->name, "정재형");
	one->salary = 1000000;

	you->next = one;
	printf("%s %d\n", you->name, you->salary);
	printf("%s %d\n", one->name, one->salary);
	printf("%s %d\n", you->next->name, you->next->salary);

	//동적메모리 할당 해제
	free(one);
	free(you);

	return 0;
}
