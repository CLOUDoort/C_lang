/*문제4 1000,000 이하의 피보나치 수열
( N 번째 항이 N - 1 번째 항과 N - 2 번째 항의 합으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
1,1,2,3,5,8,13,21,34,55,89,144..
1,3,8,21,55

해결 못 함*/

#include <stdio.h>
int main() {
	int i, N, t1 = 1, t2 = 1, nextTerm, K;

	printf("1000,000 이하의 피보나치 수열의 짝수항 합을 구합니다. \n");
	printf("N 값을 입력하세요 \n");
	scanf("%d", &N);

	for (i = 0; i <= N-3; i++) {
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		

		if (nextTerm > 1000000) {
			break;
		}
	}
	printf("%d", nextTerm);
	return 0;
}