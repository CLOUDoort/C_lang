#include <stdio.h>

#define CHPRT(a)	printf("%c\n", #@a)
#define PRT(a)		printf(#a" = %d �϶�, ", a)
#define APRT(a)		printf(#a" = %3d  ", a)
#define AIPRT(a, i)	printf(#a"[%d] = %3d\n", i, a##[i])

int main(void)
{
	int prod = 1;
	int facto[6];
	CHPRT($);				//3�� ��ũ�� ȣ��

	for (int i = 1; i <= 5; i++)
	{
		prod *= i;
		facto[i] = prod;
		PRT(i);				//4�� ��ũ�� ȣ��
		APRT(facto[i]);		//5�� ��ũ�� ȣ��
		AIPRT(facto, i);	//6�� ��ũ�� ȣ��
	};

	return 0;
}
