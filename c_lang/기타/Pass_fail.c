#include <stdio.h>
int main() {
	int score;

	printf("Pass/fail program \n");
	printf("������ �����ּ��� : ");
	scanf("%d", &score);
	printf("\n");

	if ( 80 <= score  && score <= 100) { // && �� ������, 0 <= a <= 1���߸��Ȼ�뿹�Դϴ�. �̴��0 <= a && a <= 1�����̻���ؾ��մϴ�.
		printf("�հ�!");
		return 0;
	} else if (0 < score && score < 80) {
		printf("�ٽ� �����ϼ���");
		return 0;
	} else {
		printf("�峭ġ������");
		return 0;
	}

	return 0;

}