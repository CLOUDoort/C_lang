#include <stdio.h> 

//함수 외부에서 정의된 자료형은 이후 파일에서 사용 가능 
typedef unsigned int budget;

int main(void)
{
	budget year = 24500000; //새로운 자료형 budget 사용

	//함수 내부에서 정의된 자료형은 이후 함수내부에서만 사용 가능 
	typedef int profit;	
	profit month = 4600000; //새로운 자료형 profit 사용
	printf("올 예산은 %d, 이달의 이익은 %d 입니다.\n", year, month);

	return 0;
}

void test(void)
{
	budget year = 24500000; //새로운 자료형 budget 사용

	//profit은 이 함수에서는 사용 불가, 컴파일 오류 발생 
	//profit year;
}
