#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct account
{
	char name[12];	//������ �̸�
	int actnum;	//���¹�ȣ
	double balance;	//�ܰ�
};

int main(void)
{

	struct account mine = { "ȫ�浿", 1001, 300000 };
	struct account yours;

	strcpy(yours.name, "�̵���");
	//strcpy_s(yours.name, 12, "�̵���"); //����
	//yours.name = "�̵���"; //����

	yours.actnum = 1002;
	yours.balance = 500000;

	printf("����ü ũ��: %zu\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	/*
	struct account me = { .name = "ȫ�浿", .balance = 50000 };
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);

	struct account you;
	you = (struct account) { .name = "������", .balance = 70000 };
	printf("%s %d %.2f\n", you.name, you.actnum, you.balance);
	*/

	return 0;
}
