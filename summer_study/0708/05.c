#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXBUFSIZE 100

void print1DArray(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (i == n - 1) printf("%d", a[i]);
		else printf("%d ", a[i]);
	}
	printf("\n");
}

void main() {
	int i, j;
	int* p[4] = { NULL };
	int a[4][5];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	p[0] = a[1];
	p[1] = a[3];
	p[2] = a[0];
	p[3] = a[2];

	for (i = 0; i < 4; i++) {
		print1DArray(p[i], 5);
	}
}