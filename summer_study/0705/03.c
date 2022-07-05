#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findSum(int data[], int n, int* sum);

int main() {
	int n;
	int arr[10];
	int sum = 0;
	scanf("%d", &n);
	if (n >= 10) return 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	findSum(arr, n, &sum);

	printf("%d", sum);

}

void findSum(int data[], int n, int* sum) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		count += data[i];
	}
	*sum = count;
}