#include <stdio.h>

int main(void)
{
	int ary[][4] = { {10, 20, 30, 40}, {50, 60, 70, 80} }; //2행 4열 배열
	int(*ptr)[4] = ary;	 //열이 4인 배열을 가리키는 포인터, int *ptr[4]은 포인터 배열

	printf("%zd %zd\n", sizeof(ary), sizeof(ptr));
	printf("%zd %zd\n\n", sizeof(ary[0]), sizeof(ptr[0]));

	printf("%2d %2d\n", **ary, **ptr); //첫 번째 원소, 10
	printf("%2d %2d\n", **(ary + 1), *ary[1]); //두 번째 해의 첫 원소, 50
	printf("%2d %2d\n", **(ptr + 1), *ptr[1]); //두 번째 해의 첫 원소, 50
	printf("%2d %2d\n", *(ary[1] + 1), *(ptr[1] + 1)); //2행 2열, 60
	printf("%2d %2d\n\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3)); //2행 4열, 80

	printf("%2d ", **ptr++); //배열의 첫 원소 10 참조 후, ptr의 다음 행으로 주소 수정
	printf("%2d\n", **ptr); //두 번째 행의 첫 원소 50 참조

	return 0;

	int a[][4] = { {1, 2, 3, 4}, {10, 15, 20, 25}, {50, 60, 70, 80} }; //3행 4열 배열
	int(*p)[4] = a;	 //열이 4인 배열을 가리키는 포인터, int *p[4]은 포인터 배열
	printf("%2d %2d\n", **(p + 1), **(p + 2)); 

	return 0;
}
