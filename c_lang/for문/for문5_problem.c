/*���� 5. ����ڷ� ���� N ���� �Է� �ް� 1 ���� N ������ ���� ����Ѵ�.

	�ڷ� �ذ�*/

#include <stdio.h>
int main(){
	int i, N, multi;
	multi = 1;

	printf("1~N ������ ���� ���մϴ�. \n N ���� �Է����ּ���! \n");
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		multi *= i;
	}
	printf("1~N ������ ���� %d �Դϴ�.", multi);
	return 0;
}
// �ٷ� �ذ�