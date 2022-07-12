#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* f;	
	if (fopen_s(&f, "C:/Users/user/Desktop/프로그래밍기초-강의자료/소스파일/소스15/5_flist.c", "r") != 0) //읽기 모드로 파일 열기 
	//if ( (f = fopen("05flist.c", "r")) == NULL ) 
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	int ch, cnt = 0;
	printf("%4d: ", ++cnt);
	while ((ch = fgetc(f)) != EOF)
	{
		putchar(ch); //putc(ch, stdout);
		if (ch == '\n') 
			printf("%4d: ", ++cnt);
	}
	printf("\n");
	fclose(f);

	return 0;
}
