#include <stdio.h> 

int main(void)
{
	int a[] = {10, 20};
	int *p = &a[0];	// 배열의 첫 번째 원소 포인터 선언
	

	printf("%d\n", *p++); // *(p++) 동일
	printf("%p %d\n", p, *p);

	p = &a[0];		// 다시 배열의 첫 번째 원소 주소 값 대입
	printf("%d\n", *++p); // *(++p) 동일
	printf("%p %d\n\n", p, *p);

	p = &a[0];		// 다시 배열의 첫 번째 원소 주소 값 대입
	printf("%d\n", (*p)++); 
	printf("%p %d\n", p, *p);

	a[0] = 10;		// 다시 배열의 첫 번째 원소에 10 저장
	p = &a[0];		// 다시 배열의 첫 번째 원소 주소 값 대입
	printf("%d\n", ++*p); // ++(*p) 동일
	printf("%p %d\n\n", p, *p);

	return 0;
}
