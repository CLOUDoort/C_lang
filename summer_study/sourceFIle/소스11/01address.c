#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf_s("%d", &input);
	printf("%d\n", input);

	printf("%p(16����)\n", &input);
	printf("%u(10����)\n", (uintptr_t)&input);

	printf("%zu\n", sizeof(&input)); //%zd�� ����

	return 0;

}
