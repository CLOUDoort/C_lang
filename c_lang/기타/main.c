/* ��� - ���ǹ�(if) 0316 ����
if(����){
  ��ɹ�
}
else if (){
}
else {
}
*/

// ��ǻ�Ϳ��� ��� ���� 0���� ������ ���� �����Ǿ� �ִ�.


// != ���� �ٸ��� ��

/*��������
&& �� �� �̻� ���ǽĿ� ���̴� AND�� �ǹ�, �ϳ��� &�� ���� ������ AND ����
|| OR ����*/

/*�ݺ��� for��
for(�ʱ��, ���ǽ�, ������){
	���1
	���2
	...
}
���ǽ� : �ݺ����� �󸶳� �ݺ��ؾ� �� �� �˱� ���� ������� �д�.
������ : 1ȸ ����� ������ ���� ��� ������ �ϴ��� �˷���
for ������ {} �ȿ� �۾����� ���ǽ��� ������ ���� �ݺ����ִ� ��, �� �ݺ����� �������� �����Ѵ�*/

//#include <stdio.h>
//int main() {
//	int i;
//
//	for (i = 5; 4 <= i && i <= 20; i++) {
//		printf("���� : %d \n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int i, sum = 0;
//
//	for (i = 0; i <= 10000; ++i) {
//		sum = sum + i;
//	}
//	printf("0���� 10000������ �� : %d \n", sum);
//
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int i;
//	int subject, score;
//	double sum_score = 0;
//
//	printf("�� ���� ���� ������ ���� ���ΰ���? \n");
//	scanf("%d", &subject);
//
//	printf("\n �� ������ ������ �Է��ϼ��� \n");
//	for (i = 1; i <= subject; i++) {
//		printf("���� %d : ", i);
//		scanf("%d", &score);
//		sum_score = sum_score + score;
//
//	}
//
//	printf("��ü ������ ����� : %.2f���Դϴ�. \n", sum_score / subject);
//
//	return 0;
//}

/* break ����
#include <stdio.h>
int main() {
	int usranswer;

	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");

	for (;;) { // �ʱ��, ���ǽ�, �������� ������ ������ ���̱� ������ ���� �ݺ��ȴ�.
		scanf("%d", &usranswer);
		if (usranswer == 3) { 
			printf("���߼̱���! \n");
			break; // 3�� �Ǹ� ���� �ݺ����� ���ش�.
		}
		else {
			printf("Ʋ�Ⱦ��! \n"); // 3�� �ȳ����� ������ �� ���� ���´�.
		}
	}
	return 0;
}*/ // ����

/* continue 
#include <stdio.h>
int main() {
	int i;

	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue; // skip�� ���� ����
		
		printf("%d", i);
	}
	return 0;
}*/

/* while 
while(���ǽ�){
	���1
	���2
	...
}

#include <stdio.h>
int main() {
	int i = 1, sum = 0;

	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("1 ���� 100 ������ ��: %d \n", sum);

	return 0;
}
*/

/* do - while ��
	do {
		���1
		���2
		...
		} while (���ǽ�);

		-> ���� ������ �ڿ� ���ǽ��� �˻�, ������ �ּ��� �� ���� ����ǰ� �ȴ�.
		
#include <stdio.h>
int main() {
	int i = 1, sum = 0;

	do {
		sum += i;
		i++;
	} while (i < 1);

	printf("sum : %d \n", sum);
	return 0; 
	// ���� �����ϰ� ���ǽ��� �˻��߱� ������ �� �� �ݺ��� ���� 1�� ���� �� �ִ� ��
} */

