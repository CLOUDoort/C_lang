#include <stdio.h> 

//�Լ� �ܺο��� ���ǵ� �ڷ����� ���� ���Ͽ��� ��� ���� 
typedef unsigned int budget;

int main(void)
{
	budget year = 24500000; //���ο� �ڷ��� budget ���

	//�Լ� ���ο��� ���ǵ� �ڷ����� ���� �Լ����ο����� ��� ���� 
	typedef int profit;	
	profit month = 4600000; //���ο� �ڷ��� profit ���
	printf("�� ������ %d, �̴��� ������ %d �Դϴ�.\n", year, month);

	return 0;
}

void test(void)
{
	budget year = 24500000; //���ο� �ڷ��� budget ���

	//profit�� �� �Լ������� ��� �Ұ�, ������ ���� �߻� 
	//profit year;
}
