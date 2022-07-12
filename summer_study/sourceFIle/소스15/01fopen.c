#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main()
{
	char* fname = "b.txt";
	FILE* f;

	char name[30] = "손혜진"; 
	int point = 100;

	
	if ((f = fopen(fname, "w")) == NULL) //if (fopen_s(&f, fname, "w") != 0)
	{
		printf("파일이 열리지 않아 종료합니다.\n");
		exit(1);
	};
	
	fprintf(f, "이름 %s 학생의 성적은 %d 입니다.\n", name, point);
	fclose(f);
	
	printf("이름 %s 학생의 성적은 %d 입니다.\n", name, point);
	

	return 0;
}
