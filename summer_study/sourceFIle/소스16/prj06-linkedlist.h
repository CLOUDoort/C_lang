#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct linked_list { //�ڱ����� ����ü ����
	char* name;
	struct linked_list* next;
};

typedef   struct linked_list NODE; //struct linked_list�� NODE�� ������
typedef   NODE* LINK; //NODE *�� LINK�� ������
