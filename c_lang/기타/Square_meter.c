#include <stdio.h>
int main() {
	double Sqm;

	printf("제곱미터를 평으로 바꿔주는 프로그램입니다. \n");
	printf("제곱미터를 입력해주세요 : ");
	scanf("%lf", &Sqm);

	printf("%.4lf 제곱미터는 %.4lf 평입니다. \n", Sqm, Sqm * 0.3025);

	return 0;
}