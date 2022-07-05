#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n % 2 == 0) return 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				printf("*");
			}
		}
		else {
				printf("*");
				for (int j = 0; j < n - 1; j++) {
					printf(" ");
				}
		}
		printf("\n");
	}
}