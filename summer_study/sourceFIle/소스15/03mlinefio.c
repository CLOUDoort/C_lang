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
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	};
	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
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
