#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;
	double a, ave, sum = 0;
	double arr[10000];

	for (i = 0;; i++)
	{
		scanf("%lf", &a);
		if (a != 0) {
			arr[i] = a;
			sum += arr[i];
		}
		else break;
	}
	ave = sum / i;
	printf("%.1f\n", ave);
	for (j = 0; j < i; j++) {
		if (arr[j] < ave) {
			printf("%.1lf ", arr[j]);
		}
	}
}