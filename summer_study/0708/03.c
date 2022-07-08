#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_array(double source1[], double source2[], double target[], int num);

int main() {
	int n;
	scanf("%d", &n);

	double source1[1000];
	double source2[1000];
	double target[1000];

	for (int i = 0; i < n; i++) {
		scanf("%lf", &source1[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%lf", &source2[i]);
	}

	add_array(source1, source2, target, n);

	for (int i = 0; i < n; i++) {
		printf("%.2f ", target[i]);
	}

	
}

void add_array(double source1[], double source2[], double target[], int num) {
	for (int i = 0; i < num; i++) {
		target[i] = source1[i] + source2[i];
	}
}