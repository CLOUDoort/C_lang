#include <stdio.h>
int main() {
	double Sqm;

	printf("�������͸� ������ �ٲ��ִ� ���α׷��Դϴ�. \n");
	printf("�������͸� �Է����ּ��� : ");
	scanf("%lf", &Sqm);

	printf("%.4lf �������ʹ� %.4lf ���Դϴ�. \n", Sqm, Sqm * 0.3025);

	return 0;
}