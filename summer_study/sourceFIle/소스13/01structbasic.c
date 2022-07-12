#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct account
{
	char name[12];	//계좌주 이름
	int actnum;	//계좌번호
	double balance;	//잔고
};

int main(void)
{

	struct account mine = { "홍길동", 1001, 300000 };
	struct account yours;

	strcpy(yours.name, "이동원");
	//strcpy_s(yours.name, 12, "이동원"); //가능
	//yours.name = "이동원"; //오류

	yours.actnum = 1002;
	yours.balance = 500000;

	printf("구조체 크기: %zu\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	/*
	struct account me = { .name = "홍길동", .balance = 50000 };
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);

	struct account you;
	you = (struct account) { .name = "김파이", .balance = 70000 };
	printf("%s %d %.2f\n", you.name, you.actnum, you.balance);
	*/

	return 0;
}
