#include <stdio.h>
int main() {
	int Principal;
	double Interest_rate;
	double Interest = 0; // ���� ����� �ʱ�ȭ ����� ��

	printf("�ݸ� ���� \n \n");
	printf("������ �־��ּ���: ");
	scanf("%d", &Principal);
	printf("�������� �־��ּ���: ");
	scanf("%lf", &Interest_rate);

	Interest = Principal * Interest_rate;


	printf("���� %d ���� ������ %.2f ���� ����� ���� %.2f �� �Դϴ�.", Principal, Interest, Principal + Interest);

	return 0;

}