#include <stdio.h> 

int main(void)
{
	char* pc = (char*) 100;		// 100을 주소 값으로 변환해 저장
	int* pi = (int*) 100;		// 100을 주소 값으로 변환해 저장
	double* pd = (double*) 100;	// 100을 주소 값으로 변환해 저장
	//pd = 100;					// double 포인터에 100으로 저장하면 경고 발생

	printf("%lld  %lld  %lld\n", (long long)(pc - 1), (long long)pc, (long long)(pc + 1));
	printf("%llu  %llu  %llu\n", (unsigned __int64)(pi - 1),
		                         (unsigned __int64)pi, (unsigned __int64)(pi + 1));
	printf("%llu  %llu  %llu\n", (unsigned long long)(pd - 1),
		                         (unsigned long long)pd, (unsigned long long)(pd + 1));

	return 0;
}
