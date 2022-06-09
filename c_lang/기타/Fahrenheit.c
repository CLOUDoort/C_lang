#include <stdio.h>
int main() {

	double fahre;

	printf("Fahrenheit - Celsius program \n");
	printf("화씨 온도를 입력해주세요:\t");
	scanf("%lf", &fahre);
        printf("화씨 %.2lf'c 는 섭씨 %.2lf'c 이다.\n", fahre, 5.0 * (fahre - 32) / 9.0);

	return 0;
}
