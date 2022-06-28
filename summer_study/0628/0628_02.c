#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	int n, i;
	int score;
	int max = 0;
	int sum = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &score);
		sum += score;
		
		if (max < score)
		{
			max = score;
		}

	}
	printf("\n%d\n%d", sum, max);

	return 0;
}