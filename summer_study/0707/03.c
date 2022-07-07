#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct fraction
{
	double f; // 분자
	double s; // 분모
}F;

void compare(F a, F b);

int main() {
	F a, b;

	scanf("%lf/%lf", &a.f, &a.s);
	scanf("%lf/%lf", &b.f, &b.s);

	compare(a, b);

	return 0;
	
}

void compare(F a, F b) {
	double A = a.f / a.s;
	double B = b.f / b.s;

	if (A == B) printf("%d", 0);
	else if (A > B) printf("%d", -1);
	else printf("%d", 1);
}