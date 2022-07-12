#include "prj06-linkedlist.h"

LINK createNode(char* name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void)
{
	char name[30];		//ǥ���Է����� ���� ���α׷� �̸� ���ڿ��� ������ ���� �迭
	LINK head = NULL;	//���� ����Ʈ�� ���� ���
	LINK cur;			//���� ������ ������ ��带 ����Ű�� ������

	printf("�̸��� �Է��ϰ� Enter�� ��������. >> \n");
	while (gets(name) != NULL)
	{
		cur = createNode(name);		//��� ���� �Ҵ�
		if (cur == NULL) {
			printf("�����޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
			exit(1);
		}
		head = append(head, cur);	//�� �ڿ� ��� �߰�
		printList(head);			//���� ����Ʈ ��� ���
	}

	return 0;
}
