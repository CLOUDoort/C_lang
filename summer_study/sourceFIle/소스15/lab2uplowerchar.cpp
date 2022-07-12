#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	FILE* f1, * f2;
	if ((f1 = fopen("C:/Users/user/Desktop/프로그래밍기초-강의자료/소스파일/소스15/lab2uplowerchar.cpp", "r")) == NULL)
	{
		printf("cannot open this file\n");
		exit(1);
	}
	if ((f2 = fopen("convertchar.c", "w")) == NULL)
	{
		printf("cannot open this file\n");
		fclose(f1);
		exit(1);
	}

	char a;
	while ((a = getc(f1)) != EOF) //fgetc(f1)
	{
		if (isalpha(a))
			if (islower(a))
				a = toupper(a);
			else if (isupper(a))
				a = tolower(a);
		putc(a, f2); //fputc(a, f2)
	}

	fclose(f1);
	fclose(f2);
	printf("File convertchar.c is created!!!\n");

	return 0;
}
