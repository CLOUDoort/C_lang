#include <stdio.h> 

int main(void)
{
	char* pc = (char*) 100;		// 100�� �ּ� ������ ��ȯ�� ����
	int* pi = (int*) 100;		// 100�� �ּ� ������ ��ȯ�� ����
	double* pd = (double*) 100;	// 100�� �ּ� ������ ��ȯ�� ����
	//pd = 100;					// double �����Ϳ� 100���� �����ϸ� ��� �߻�

	printf("%lld  %lld  %lld\n", (long long)(pc - 1), (long long)pc, (long long)(pc + 1));
	printf("%llu  %llu  %llu\n", (unsigned __int64)(pi - 1),
		                         (unsigned __int64)pi, (unsigned __int64)(pi + 1));
	printf("%llu  %llu  %llu\n", (unsigned long long)(pd - 1),
		                         (unsigned long long)pd, (unsigned long long)(pd + 1));

	return 0;
}
