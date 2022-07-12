#include <stdio.h>

#define CHPRT(a)	printf("%c\n", #@a)
#define PRT(a)		printf(#a" = %d 일때, ", a)
#define APRT(a)		printf(#a" = %3d  ", a)
#define AIPRT(a, i)	printf(#a"[%d] = %3d\n", i, a##[i])

int main(void)
{
	int prod = 1;
	int facto[6];
	CHPRT($);				//3행 매크로 호출

	for (int i = 1; i <= 5; i++)
	{
		prod *= i;
		facto[i] = prod;
		PRT(i);				//4행 매크로 호출
		APRT(facto[i]);		//5행 매크로 호출
		AIPRT(facto, i);	//6행 매크로 호출
	};

	return 0;
}
