#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void add(int*, int, int);

int main(void)
{
	int m = 0, n = 0, sum = 0;

	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);
	add(&sum, m, n);
	printf("두 정수 합: %d\n", sum);

	return 0;
}

void add(int* psum, int a, int b)
{
	*psum = a + b;
}
