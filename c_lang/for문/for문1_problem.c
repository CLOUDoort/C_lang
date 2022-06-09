/* 1번 문제
	N줄인 삼각형을 출력한다. 단, 사용자로부터 임의의 N을 입력받는다.
	
	도움 받아 해결*/



#include <stdio.h>
int main() {
	int i, j, N;

	printf("N줄 삼각형을 만듭니다.\n");
	printf("N 값을 입력하세요\n");
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = N - 1; j > i; j--) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
