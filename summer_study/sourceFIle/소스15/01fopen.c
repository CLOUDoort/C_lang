#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main()
{
	char* fname = "b.txt";
	FILE* f;

	char name[30] = "������"; 
	int point = 100;

	
	if ((f = fopen(fname, "w")) == NULL) //if (fopen_s(&f, fname, "w") != 0)
	{
		printf("������ ������ �ʾ� �����մϴ�.\n");
		exit(1);
	};
	
	fprintf(f, "�̸� %s �л��� ������ %d �Դϴ�.\n", name, point);
	fclose(f);
	
	printf("�̸� %s �л��� ������ %d �Դϴ�.\n", name, point);
	

	return 0;
}
