/*������ �ڿ��� N �� �Է� �޾� N �� ���μ� ���� �� ����� ����Ͽ���. ���� �� N = 18 �� ���

N = 18 18 = 2 * 3 * 3

���� �ذ� ����
���� ����
����, ���� �ϱ⸻�� ������ ��, ���� �ʼ�*/

#include <stdio.h>
int main() {
	int i, N;
	i = 2;

	printf("�ڿ��� N�� ���μ������մϴ�. \n");
	printf("�ڿ��� N���� �Է��ϼ���. \n");
	scanf("%d", &N);

	printf("N = %d , %d = ", N, N);

	while (i) {
		if (N % i == 0) {
			N /= i;
			printf("%d", i);
			if (N == 1) break;
			printf("*");
		}
		else {
			i++;
		}
	}
	return 0;
}