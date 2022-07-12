#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char fname[] = "char.txt"; 
	FILE* f;
		
	if (fopen_s(&f, fname, "w") != 0)
	//if ( (f = fopen(fname, "w")) == NULL ) 
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};
	puts("영어 문자를 계속 입력하다가 종료하려면 x를 입력 >>");

	
	char ch; 
	while ((ch = _getche()) != 'x')
		fputc(ch, f);	
	fclose(f);
	puts("");
		
	if (fopen_s(&f, fname, "r") != 0)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	};

	
	while ((ch = fgetc(f)) != EOF)
		_putch(ch);	
	fclose(f);
	puts("");

	return 0;
}
