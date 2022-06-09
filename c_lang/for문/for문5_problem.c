/*문제 5. 사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력한다.

	자력 해결*/

#include <stdio.h>
int main(){
	int i, N, multi;
	multi = 1;

	printf("1~N 까지의 곱을 구합니다. \n N 값을 입력해주세요! \n");
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		multi *= i;
	}
	printf("1~N 까지의 곱은 %d 입니다.", multi);
	return 0;
}
// 바로 해결