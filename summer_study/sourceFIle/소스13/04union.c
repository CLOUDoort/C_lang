#include <stdio.h>


union data
{
	char ch;	//������
	int cnt;	//������
	double real;//�Ǽ���
} data1;		//data1�� ��������

int main(void)
{
	union data data2 = { 'A' };		//ù ����� char�����θ� �ʱ�ȭ ����
	union data data3 = { 97.78 };	//������ �� ��� �߻�
	union data data4 = data2;		//�ٸ� ������ �ʱ�ȭ ����
	data4.real = 3.78;

	printf("%zu %zu\n", sizeof(union data), sizeof(data3));
	printf("%c %c %f\n", data2.ch, data3.ch, data4.real);

	
	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	
	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	
	data1.real = 3.156759;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	/* 
	union data value = { .real = 3.98 };
	printf("%.2f\n", value.real);

	union share
	{
		int count;
		float value;
		char  str[20];
	};

	typedef union share share;

	share a;
	a.count = 55;
	printf("a.count : %d\n", a.count);
	*/


	return 0;
}
