/*1�� ������ �����ϳ�, �̹����� ���ﰢ�� ������
�ذ�!*/

#include <stdio.h>
int main() {
	int i, j, N;
	
	printf("N���� ���ﰢ���� �����. \n");
	printf("N���� �Է��ϼ��� \n");
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 2 * N - 1; j > 2 * i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}