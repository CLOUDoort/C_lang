#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void add(int*, int, int);

int main(void)
{
	int m = 0, n = 0, sum = 0;

	printf("�� ���� �Է�: ");
	scanf("%d %d", &m, &n);
	add(&sum, m, n);
	printf("�� ���� ��: %d\n", sum);

	return 0;
}

void add(int* psum, int a, int b)
{
	*psum = a + b;
}
