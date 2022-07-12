#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main()
{
	FILE* f;

	if ((f = fopen("myinfo.txt", "w")) == NULL)
		//if (fopen_s(&f, "myinfo.txt", "w") != 0)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	
	char tel[15] = "010-3018-3824";
	char add[30] = "서초구 대정로 557";
	int age = 22;
	
	fprintf(f, "전화번호: %s, 주소:%s, 나이: %d\n", tel, add, age);
		
	fclose(f); 
	
	printf("전화번호: %s, 주소:%s, 나이: %d\n", tel, add, age);
	

	return 0;
}
