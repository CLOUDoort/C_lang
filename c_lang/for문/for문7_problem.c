/*임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라. 예를 들어서 N = 18 일 경우

N = 18 18 = 2 * 3 * 3

절대 해결 못함
도움 받음
복습, 원리 암기말고 이해할 것, 응용 필수*/

#include <stdio.h>
int main() {
	int i, N;
	i = 2;

	printf("자연수 N을 소인수분해합니다. \n");
	printf("자연수 N값을 입력하세요. \n");
	scanf("%d", &N);

	printf("N = %d , %d = ", N, N);

	while (i) {
		if (N % i == 0) {
			N /= i;
			printf("%d", i);
			if (N == 1) break;
			printf("*");
		}
		else {
			i++;
		}
	}
	return 0;
}