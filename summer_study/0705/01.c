#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mySwap(int *a, int *b);

int main(void)
{
	int x, y;
	
	scanf("%d %d", &x, &y);

	mySwap(&x, &y);
	printf("%d %d\n", x, y);
	
	return 0;
}

void mySwap(int* a, int* b) {
	int x, y;
	x = *a;
	y = *b;

	*a = y;
	*b = x;
}