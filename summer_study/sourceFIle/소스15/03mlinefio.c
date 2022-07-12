#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char fname[] = "grade.txt";
	char names[80];
	int cnt = 0;
	FILE* f;

	if (fopen_s(&f, fname, "w") != 0) //if ((f = fopen(fname, "w")) == NULL) 
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};
	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	fgets(names, 80, stdin);	
	
	
	while (!feof(stdin)) 
	{ 
		fprintf(f, "%d ", ++cnt);	
		fputs(names, f);			
		fgets(names, 80, stdin);	
	}
	fclose(f);

	return 0;
}
