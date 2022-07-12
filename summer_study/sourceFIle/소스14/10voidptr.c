#include <stdio.h>

void myprint(void)
{
	printf("void 포인터 신기하네요!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;
	char str[][20] = { { "C 언어," }, { "재미있네요!" } };

	void* p = &m; 
	printf("%p ", p); 
	//printf("%d\n", *p); //컴파일 오류 발생
	printf("%d\n", *(int*) p); //int * 로 변환

	p = &d;
	printf("%p ", p); 
	printf("%.2f\n", *(double*) p); //double * 로 변환

	p = myprint;
	((void(*)(void)) p)(); //함수 포인터인 void(*)(void) 로 변환하여 호출 ()

	p = str;	
	printf("%s %s\n", (char(*)[20])p, (char(*)[20])p + 1);
	printf("%s %s\n", str, str + 1);

	{
		char ch = 'A';
		int data = 5;
		double value = 34.76;

		void* vp;

		vp = &ch;	
		vp = &data;	
		vp = &value;
	}
	return 0;
}
