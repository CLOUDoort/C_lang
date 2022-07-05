#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print1DArray(int d[], int n);

int main() {
	int n; // 배열 원소 수
	int ary[1000]; // 배열선언
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ary[i]);
	}
	
	print1DArray(ary, n);
}

void print1DArray(int d[], int n) {
	int* p = d;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (j == n - 1) {
				printf("%d", *(p + j));
			} else printf("%d ", *(p + j));
		}
		printf("\n");
	}
}