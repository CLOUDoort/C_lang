#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);

int main(void)
{
	void (*pf)(double*, double, double) = NULL; 

	double m, n, result = 0;
	printf("연산 +, -를 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);

	pf = add; 
	pf(&result, m, n);  //add(&result, m, n);
	printf("\n더하기 수행: %lf + %lf == %lf\n", m, n, result);
	printf("%p %p\n", pf, add);

	pf = subtract; 
	pf(&result, m, n);  //subtract(&result, m, n);
	printf("  빼기 수행: %lf - %lf == %lf\n", m, n, result);
	printf("%p %p\n", pf, subtract);

	return 0;
}


void add(double* z, double x, double y)
{
	*z = x + y;
}

void subtract(double* z, double x, double y)
{
	*z = x - y;
}
