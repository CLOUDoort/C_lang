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
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};
	puts("���� ���ڸ� ��� �Է��ϴٰ� �����Ϸ��� x�� �Է� >>");

	
	char ch; 
	while ((ch = _getche()) != 'x')
		fputc(ch, f);	
	fclose(f);
	puts("");
		
	if (fopen_s(&f, fname, "r") != 0)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};

	
	while ((ch = fgetc(f)) != EOF)
		_putch(ch);	
	fclose(f);
	puts("");

	return 0;
}
