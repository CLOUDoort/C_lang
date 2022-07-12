#include <stdio.h> 

int main(void)
{
	int x = 500, y = 700, dummy;
	printf("%d %d\n", x, y);

	int *px = &x, *py = &y, *pd = &dummy;
	
	*pd = *px;  // 변수 dummy에 x를 저장
	*px = *py;	// 변수 m에 n을 저장
	*py = *pd;  // 변수 n에 dummy를 저장

	printf("%d %d\n", x, y);

	return 0;
}
