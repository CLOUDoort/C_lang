#include <stdio.h>

int main(void)
{
	//��ȭ ���� ����ü 
	typedef struct movie
	{
		char* title;		//��ȭ����
		long long profit;	//�������
	} movie;

	movie parasite;
	parasite.title = "�����";
	parasite.profit = 310000000000;	//�� ���迡�� 3,100�� ���� 

	printf("[%s] �Ѽ���: %lld\n", parasite.title, parasite.profit);

	return 0;
}
