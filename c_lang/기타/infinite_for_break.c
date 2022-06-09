#include <stdio.h>
int main() {
	int answer;

	printf("당신은 죽었습니다. \n");
	printf("\n \n다시 시작하시겠습니까?\n Yes : 1 / No : 2 \n \n");

	for (;;) {
		scanf("%d", &answer);
		if (answer == 2) {
			printf("\n게임을 종료하겠습니다. \n");
			break;
		}
		else {
			printf("\nInsert Coin!\n");	
		}
	}
	return 0;
}
// 수정