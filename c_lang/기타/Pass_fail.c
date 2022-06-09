#include <stdio.h>
int main() {
	int score;

	printf("Pass/fail program \n");
	printf("점수를 적어주세요 : ");
	scanf("%d", &score);
	printf("\n");

	if ( 80 <= score  && score <= 100) { // && 논리 연산자, 0 <= a <= 1을잘못된사용예입니다. 이대신0 <= a && a <= 1과같이사용해야합니다.
		printf("합격!");
		return 0;
	} else if (0 < score && score < 80) {
		printf("다시 공부하세요");
		return 0;
	} else {
		printf("장난치지마라");
		return 0;
	}

	return 0;

}