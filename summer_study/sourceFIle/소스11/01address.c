#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("정수 입력: ");
	scanf_s("%d", &input);
	printf("%d\n", input);

	printf("%p(16진수)\n", &input);
	printf("%u(10진수)\n", (uintptr_t)&input);

	printf("%zu\n", sizeof(&input)); //%zd도 가능

	return 0;

}
