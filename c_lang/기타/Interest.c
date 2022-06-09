#include <stdio.h>
int main() {
	int Principal;
	double Interest_rate;
	double Interest = 0; // 변수 선언과 초기화 해줘야 함

	printf("금리 계산기 \n \n");
	printf("원금을 넣어주세요: ");
	scanf("%d", &Principal);
	printf("이자율을 넣어주세요: ");
	scanf("%lf", &Interest_rate);

	Interest = Principal * Interest_rate;


	printf("원금 %d 원과 이자율 %.2f 값을 계산한 값은 %.2f 원 입니다.", Principal, Interest, Principal + Interest);

	return 0;

}