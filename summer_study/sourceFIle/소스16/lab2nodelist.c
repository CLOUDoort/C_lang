#include <stdio.h>
#include <stdlib.h>

struct node {
	int x;
	struct node* next;
};

int main(void)
{
	//노드 두 개를 생성하여 자료와 링크를 대입
	struct node* one = malloc(sizeof(struct node));
	one->x = 10;
	one->next = NULL;
	struct node* two = malloc(sizeof(struct node));
	two->x = 20;
	two->next = one;

	struct node* head = two;
	struct node* cur = head;
	if (cur)
	{
		while (cur->next != NULL)
			cur = cur->next;
	}

	cur->next = malloc(sizeof(struct node)); //노드를 생성하여 주소를 저장
	cur = cur->next;

	cur->next = NULL;
	cur->x = 500;

	int cnt = 0;
	cur = head;
	while (cur != NULL)
	{
		//리스트의 순서로 노드를 방문하여 방문 횟수와 문자열 자료를 출력
		printf("%3d번째 노드는 %d\n", ++cnt, cur->x);
		cur = cur->next;
	}

	return 0;
}