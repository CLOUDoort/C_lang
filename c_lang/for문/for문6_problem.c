/*���� ���� �����ϴ� �ڿ��� a,b,c �� ������ ���Ͽ���
  i) a + b + c = 2000
  ii) a �� b > c, a,b,c �� ��� �ڿ���
  ���⿡ �ڿ����� 0�� �������� �ʴ´ٴ� ������ ���Ѵ�.

  �ݸ� �ذ�
  �ݺ�Ƚ���� ��� ���ؾ��ϴ� �� ������
  printf ��� ����++ ���ָ� ��
  ����, ���� �ʼ�*/

// ���� Ǭ ���

#include <stdio.h>
int main() {
	int a, b, c;
	int numCount = 0;


	for (a = 1997; a > 667; a--) {
		for (b = 2; b < a; b++) {
			for (c = 1; c < b; c++) {
				if (a + b + c == 2000) {
					/*printf("(%d, %d, %d)\n", a, b, c);*/
					numCount++;
				}
			}
		}
	}
	printf("���� ���� �����ϴ� �ڿ��� a,b,c �� ������ %d�Դϴ�.", numCount);

	return 0;
}

// �� ���� ���

//#include <stdio.h> 
//int main() {
//	int a = 3, b = 2, c = 1;
//	int count = 0;
//
//	for (a = 3; a < 2000; a++) {
//		for (b = 2; b < a; b++) {
//			for (c = 1; c < b; c++) {
//				if (a + b + c == 2000) {
//					count++;
//				}
//			}
//		}
//	}
//	printf("���� ���� �����ϴ� �ڿ��� a,b,c �� ������ %d�Դϴ�.", count);
//	return 0;
//}

