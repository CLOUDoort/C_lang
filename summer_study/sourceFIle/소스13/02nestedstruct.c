#include <stdio.h>
#include <string.h>

struct date
{
	int year;	//년
	int month;	//월
	int day;	//일
};


struct account
{
	struct date open;	//계좌 개설일자
	char name[12];		//계좌주 이름
	int actnum;			//계좌번호
	double balance;		//잔고
};

int main(void)
{
	struct account me = { { 2022, 3, 9 }, "홍길동", 1001, 300000 };

	printf("구조체 크기: %zu\n", sizeof(me));

	printf("[%d. %d. %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);
}
