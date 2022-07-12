#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct linked_list { //자기참조 구조체 정의
	char* name;
	struct linked_list* next;
};

typedef   struct linked_list NODE; //struct linked_list를 NODE로 재정의
typedef   NODE* LINK; //NODE *를 LINK로 재정의
