#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* f;	
	if (fopen_s(&f, "C:/Users/user/Desktop/���α׷��ֱ���-�����ڷ�/�ҽ�����/�ҽ�15/5_flist.c", "r") != 0) //�б� ���� ���� ���� 
	//if ( (f = fopen("05flist.c", "r")) == NULL ) 
	{
		printf("������ ������ �ʽ��ϴ�.\n");
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
