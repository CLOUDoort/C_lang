#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int max, min, sum = 0;
	int index = 0;
	int arr[1000];
	
	while (1) {
		scanf("%d", &arr[index]);
		if (!arr[index]) break;
		index++;
	}
	max = arr[0];
	min = arr[0];

	for (int i = 0; i < index; i++) {
		if (arr[i] > max) max = arr[i];
	}
	for (int i = 0; i < index; i++) {
		if (arr[i] < min) min = arr[i];
	}

	for (int i = 0; i < index; i++) {
		sum += arr[i];
	}
	
	double ave = (double)sum / index;

	printf("Min = %d\nMax = %d\nAvg = %.2f", min, max, ave);

}