#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double N;
	int n;
	double a;
	scanf("%lf", &N);

	n = (int)N;
	a = N - (double)n;

	printf("%d %.3f", n, a);

}