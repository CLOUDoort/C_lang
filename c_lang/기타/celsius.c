#include <stdio.h>
int main() {
	double celsius; // ���� �µ�

	printf("���� �µ��� ȭ�� �µ��� ��ȯ���ִ� ���α׷��Դϴ�. \n");
	printf("���� �µ��� �Է����ּ��� :");
	scanf("%lf", &celsius); // ���� �µ��� �޴´�.

	printf("���� %f ���� ȭ�� %f ���Դϴ�. \n", celsius, 9 * celsius / 5 + 32);

	return 0;

}