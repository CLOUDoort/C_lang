/* 1�� ����
	N���� �ﰢ���� ����Ѵ�. ��, ����ڷκ��� ������ N�� �Է¹޴´�.
	
	���� �޾� �ذ�*/



#include <stdio.h>
int main() {
	int i, j, N;

	printf("N�� �ﰢ���� ����ϴ�.\n");
	printf("N ���� �Է��ϼ���\n");
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
