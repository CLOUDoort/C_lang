#include <stdio.h> 

int main(void)
{
	int a[] = {10, 20};
	int *p = &a[0];	// �迭�� ù ��° ���� ������ ����
	

	printf("%d\n", *p++); // *(p++) ����
	printf("%p %d\n", p, *p);

	p = &a[0];		// �ٽ� �迭�� ù ��° ���� �ּ� �� ����
	printf("%d\n", *++p); // *(++p) ����
	printf("%p %d\n\n", p, *p);

	p = &a[0];		// �ٽ� �迭�� ù ��° ���� �ּ� �� ����
	printf("%d\n", (*p)++); 
	printf("%p %d\n", p, *p);

	a[0] = 10;		// �ٽ� �迭�� ù ��° ���ҿ� 10 ����
	p = &a[0];		// �ٽ� �迭�� ù ��° ���� �ּ� �� ����
	printf("%d\n", ++*p); // ++(*p) ����
	printf("%p %d\n\n", p, *p);

	return 0;
}
