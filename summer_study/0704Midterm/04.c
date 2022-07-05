#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[6];
	arr[5] = 0;
	int a, b;
	int oka = 0;
	int okb = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	if (arr[2] % arr[1] != 0) {
		a = arr[1] - arr[0];
		for (int i = 0; i < 5; i++) {
			if (arr[i + 1] - arr[i] == a) {
				oka++;
			}
		}
		if (oka == 4) {
			arr[5] = arr[4] + a;
			printf("등차수열 %d", arr[5]);
		}
	}
	else {
		if (arr[1] % arr[0] == 0) {
			b = arr[1] / arr[0];
			for (int i = 0; i < 5; i++) {
				if (arr[i + 1] / arr[i] == b) {
					okb++;
				}
			}
		}
		if (okb == 4) {
			arr[5] = arr[4] * b;
			printf("등비수열 %d", arr[5]);
		}

	}
	

	return 0;
}