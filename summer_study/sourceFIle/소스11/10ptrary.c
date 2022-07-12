#include <stdio.h> 

int main(void)
{
	int score[] = {10, 20, 30};
	printf("%p %p\n", score, (score + 1));
	printf("%d %d\n\n", *score, *(score + 1));

	int a[3] = {5, 10, 15};
	
	int* p = a; //a == &a[0]

	
	printf("%d %d %d\n", *(p), *(p + 1), *(p + 2));
	
	printf("%d %d %d\n", p[0], p[1], p[2]);
	
	printf("%d ", *p++); 
	
	printf("%d\n\n", *p);

	p = &a[2]; // &a[2] == a + 2
	
	printf("%d ", *p--); // *(p--), 15 출력 후, p 이전 주소로 감소
	
	printf("%d\n", (*p)--); // 10 출력 후, 1 감소해 9 저장
	
	printf("%d %d %d\n", *(p - 1), *p, *(p + 1)); // 5 9 15
	
	printf("%d %d %d\n", p[-1], p[0], p[1]); // 5 9 15

	{
		int a[] = { 1, 2, 3, 4, 5 };
		int* p = a + 2;
		printf("%d %d\n", p[-1], p[1]);
	}

	{
		int a[] = { 10, 20, 30, 40, 50 };
		int* p = a + 1;
		printf("%d %d\n", *(a+2), ++*p);
		printf("%d\n", *p);
		printf("%d\n", *p++);
	}

	return 0;
}
