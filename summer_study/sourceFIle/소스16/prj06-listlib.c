#include "prj06-linkedlist.h"

LINK createNode(char* name) //��带 �����ϴ� �Լ�
{
	LINK cur; //���� �����Ǵ� ����� �ּҸ� ������ ���� cur�� ����
	cur = (LINK)malloc(sizeof(NODE));
	if (cur == NULL)
	{
		printf("��� ������ ���� �޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
		return NULL;
	}
	//��� �̸��� ������ ���ڹ迭�� ���� �Ҵ��Ͽ� name�� ����  
	cur->name = (char*)malloc(sizeof(char) * (strlen(name) + 1));
	strcpy(cur->name, name);
	cur->next = NULL; //���� ���� �𸣹Ƿ� NULL�� ����

	return cur;
}

//cur ��带 ���� ����Ʈ head�� ������ ��忡 �߰��ϴ� �Լ�
LINK append(LINK head, LINK cur)
{
	//���� ���� nextNode�� �����ϰ� �ʱ� ������ head�� ����
	LINK nextNode = head;
	//���� ���� ��尡 ����Ű�� ���� ���ٸ�, �� ���Ḯ��Ʈ�� ��尡 �ϳ��� ���� ���
	if (head == NULL)
	{
		head = cur; //�߰��Ϸ��� ��尡 head�� ��
		return head;
	}
	//��� next�� NULL�� ������ �̵��Ͽ� ������ ������ �̵�
	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}
	nextNode->next = cur; //�߰� ��带 ���� ����� next�� ����

	return head;
}

int printList(LINK head) //���� ����Ʈ�� ��� ��� ��� �Լ�
{
	int cnt = 0; //�湮�� ����� ���� ����
	LINK nextNode = head;
	//nextNode�� �̿��Ͽ� ���Ḯ��Ʈ�� ó������ ������ ��ȸ
	while (nextNode != NULL)
	{
		//����Ʈ�� ������ ��带 �湮�Ͽ� �湮 Ƚ���� ���ڿ� �ڷḦ ���
		printf("%3d��° ���� %s\n", ++cnt, nextNode->name);
		nextNode = nextNode->next;
	}
		
	return cnt; //�� ��� �湮 Ƚ���� ��ȯ�ϰ� �Լ��� ����
}
