#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printStar(int n);

int main() {
	int n;
	scanf("%d", &n);

	printStar(n);
}

void printStar(int n) {
	int i, j;

	if (n > 1) {
		for (i = 0; i < n; i++) {
			for (j = n-(i+2); j >= 0; j--) {
				printf(" ");
			}
			for (j = 0; j < 2 * i + 1 ; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else {
		printf("*\n");
	}
}