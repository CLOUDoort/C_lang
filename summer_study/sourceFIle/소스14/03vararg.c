#include <stdio.h>
#include <stdarg.h> 

double avg(int, ...); 

int main(void)
{
	printf("평균 %.2f\n", avg(5, 1.2, 2.1, 3.6, 4.3, 5.8));
	printf("평균 %.2f\n", avg(6, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0));
	printf("평균 %.2f\n", avg(2, 1, 2.0));

	return 0;
}


double avg(int numagrs, ...) //매개변수 numargs는 가변인자의 수를 지정 
{
	double total = 0; 

	va_list argp; //1. 가변인자 변수 선언

	va_start(argp, numagrs); //2. numargs 이후의 가변인자 처리 시작 

	for (int i = 0; i < numagrs; i++) //3. 가변인자 얻기
		total += va_arg(argp, double); //지정하는 double 형으로 가변인자 하나를 반환

	va_end(argp); //4. 가변인자 처리 종료

	return total / numagrs;
}
