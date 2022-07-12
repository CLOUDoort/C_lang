#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint;
	ptrint = &data;	
	
	printf("%p  %d\n", &data, data);

	printf("%p  %p\n", &ptrint, ptrint);

	printf("%zu\n", sizeof(ptrint));

	return 0;
}
