/*1번 문제와 동일하나, 이번에는 역삼각형 만들어보기
해결!*/

#include <stdio.h>
int main() {
	int i, j, N;
	
	printf("N줄의 역삼각형을 만든다. \n");
	printf("N값을 입력하세요 \n");
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 2 * N - 1; j > 2 * i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}