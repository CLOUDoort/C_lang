#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int salary;
	scanf("%d", &salary);

	if (salary > 8000) {
		printf("1000 * 0.09 = 90\n");
		printf("3000 * 0.18 = 540\n");
		printf("4000 * 0.27 = 1080\n");
		printf("%d * 0.36 = %.f\n", salary - 8000, (salary - 8000) * 0.36);
		printf("= %.f", 1710 + (salary - 8000) * 0.36);
	}
	else if (salary > 4000 && salary <= 8000) {
		printf("1000 * 0.09 = 90\n");
		printf("3000 * 0.18 = 540\n");
		printf("%d * 0.27 = %.f\n", salary - 4000, (salary - 4000) * 0.27);
		printf("= %.f", 630 + (salary - 4000) * 0.27);
	}
	else if (salary > 1000 && salary <= 4000 ) {
		printf("1000 * 0.09 = 90\n");
		printf("%d * 0.18 = %.f\n", salary - 1000, (salary - 1000) * 0.18);
		printf("= %.f", 90 + (salary - 1000) * 0.18);
	}
	else {
		printf("%d * 0.09 = %.f\n", salary, salary * 0.09);
		printf("= %.f", salary * 0.09);
	}
	
	return 0;
}