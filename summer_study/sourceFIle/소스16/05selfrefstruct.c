#include <stdio.h> 
#include <stdlib.h>

struct selfref { //�ڱ����� ����ü ����
	int n;
	struct selfref* next; //struct selfref one;	//������ ���� �߻�
};

int main(void)
{
	//�� �켱 ����ü struct selfref�� �ϳ��� �ڷ����� list ������ ����
	typedef struct selfref list;

	//�� �� ����ü ������ ���� first�� second�� ������ ��, 
	//   �Լ� malloc()�� �̿��Ͽ� ����ü�� ����� ������ �� �ִ� ��������� �Ҵ�
	list* first = NULL, * second = NULL;
	first = (list*) malloc( sizeof(list) );
	second = (list*) malloc( sizeof(list) );

	//�� ����ü ������ first�� second�� ��� n�� ���� ���� 100, 200�� �����ϰ�,
	//   ��� next���� ���� NULL�� ����
	first->n = 100;
	second->n = 200;
	first->next = second->next = NULL;

	//�� first ������ second�� ����
	first->next = second; //����ü *first�� ���� *second ����ü�� ����Ű���� �ϴ� ���� 

	printf("%p\n", first);
	printf("%d %p\n", first->n, first->next);
	printf("%d\n\n", first->next->n);

	printf("%p\n", second);
	printf("%d %p\n", second->n, second->next);

	free(first); //�����޸� �Ҵ� ����
	free(second);

	return 0;
}