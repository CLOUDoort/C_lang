#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i, max, maxP;
	scanf("%d", &n);
	int arr[1000];
	int arrP[1000];

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	// 배열 복제
	for (i = 0; i < n; i++) {
		arrP[i] = arr[i];
	}

	for (i = 0; i < n; i++) {
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				arr[i] /= j;
			}
		}
	}

	max = arr[0];
	for (i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxP = arrP[i];
		}
	} 

	printf("%d", maxP);
}