#include <stdio.h>

#define DEBUG
#define LIMIT 20

int main(void)
{
	long prod = 1; // long long prod = 1
	for (int i = 1; i <= LIMIT; i++)
	{
		prod *= i;

#ifdef DEBUG
		if (i % 5 == 0)
			printf("DEBUG : 1부터 %2d까지의 곱은 %d 입니다.\n", i, prod);
#endif

	}
	printf("1부터 %d까지의 곱은 %d 입니다.\n", LIMIT, prod);

	return 0;
}

#ifndef 기호상수
...
#endif

#ifndef NAME_SIZE
	#define NAME_SIZE 30 
#endif




