#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, i, j, m;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (m = 1; m <= i; m++) {
			printf("%d", m);
		}
		for (j = n -(i + 1); j >= 0; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}