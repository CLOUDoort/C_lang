#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sortWithoutDuplication(int arry[], int* size);

int main() {
	int size = 10;
	int arry[10];

	for (int i = 0; i < size; i++) {
		scanf("%d", &arry[i]);
	}

	sortWithoutDuplication(arry, &size);

	for (int i = 0; i < size; i++) {
		printf("%d ", arry[i]);
	}
}

void sortWithoutDuplication(int arry[], int* size) {
	for (int i = 0; i < *size; i++) {
		for (int j = i; j < *size; j++) {
			if (arry[i] > arry[j]) {
				int temp = arry[i];
				arry[i] = arry[j];
				arry[j] = temp;
			}
		}
	}	

	for (int i = 0; i < *size; i++) {
		if (arry[i + 1] == arry[i]) {
			for (int j = i; j < *size; j++) {
				arry[j] = arry[j + 1];
			}
			--i;
			--* size;
		}
	}
}