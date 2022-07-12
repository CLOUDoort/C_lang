#include <stdio.h>
#include <stdarg.h> 

double avg(int, ...); 

int main(void)
{
	printf("��� %.2f\n", avg(5, 1.2, 2.1, 3.6, 4.3, 5.8));
	printf("��� %.2f\n", avg(6, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0));
	printf("��� %.2f\n", avg(2, 1, 2.0));

	return 0;
}


double avg(int numagrs, ...) //�Ű����� numargs�� ���������� ���� ���� 
{
	double total = 0; 

	va_list argp; //1. �������� ���� ����

	va_start(argp, numagrs); //2. numargs ������ �������� ó�� ���� 

	for (int i = 0; i < numagrs; i++) //3. �������� ���
		total += va_arg(argp, double); //�����ϴ� double ������ �������� �ϳ��� ��ȯ

	va_end(argp); //4. �������� ó�� ����

	return total / numagrs;
}
