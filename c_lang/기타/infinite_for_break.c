#include <stdio.h>
int main() {
	int answer;

	printf("����� �׾����ϴ�. \n");
	printf("\n \n�ٽ� �����Ͻðڽ��ϱ�?\n Yes : 1 / No : 2 \n \n");

	for (;;) {
		scanf("%d", &answer);
		if (answer == 2) {
			printf("\n������ �����ϰڽ��ϴ�. \n");
			break;
		}
		else {
			printf("\nInsert Coin!\n");	
		}
	}
	return 0;
}
// ����