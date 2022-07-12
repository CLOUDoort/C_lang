#include <stdio.h>
#include <stdlib.h>

struct node {
	int x;
	struct node* next;
};

int main(void)
{
	//��� �� ���� �����Ͽ� �ڷ�� ��ũ�� ����
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

	cur->next = malloc(sizeof(struct node)); //��带 �����Ͽ� �ּҸ� ����
	cur = cur->next;

	cur->next = NULL;
	cur->x = 500;

	int cnt = 0;
	cur = head;
	while (cur != NULL)
	{
		//����Ʈ�� ������ ��带 �湮�Ͽ� �湮 Ƚ���� ���ڿ� �ڷḦ ���
		printf("%3d��° ���� %d\n", ++cnt, cur->x);
		cur = cur->next;
	}

	return 0;
}