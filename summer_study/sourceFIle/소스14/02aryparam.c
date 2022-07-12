#include <stdio.h>

int sumary(int*, int); //int sumary(int ary[], int SIZE)도 가능

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
	int aryLength = sizeof(point) / sizeof(int); 

	int* address = point; 
	int sum = 0;
	for (int i = 0; i < aryLength; i++) 
		sum += *(point + i);	//*(address++), *(address + i)도 가능 
		//sum += *(point++);	//오류발생

	printf("%d\n", sum);
	
	printf("%d\n", sumary(point, aryLength));

	return 0;
}

int sumary(int* ary, int SIZE) //int sumary(int ary[], int SIZE)도 가능
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += *ary++; //*(ary++)와 동일
		//sum += ary[i];		//가능
		//sum += *(ary + i);	//가능
	}

	return sum;
}
