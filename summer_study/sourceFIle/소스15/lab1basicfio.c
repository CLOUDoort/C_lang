#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //for exit()

int main()
{
	FILE* f;

	if ((f = fopen("myinfo.txt", "w")) == NULL)
		//if (fopen_s(&f, "myinfo.txt", "w") != 0)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	
	char tel[15] = "010-3018-3824";
	char add[30] = "���ʱ� ������ 557";
	int age = 22;
	
	fprintf(f, "��ȭ��ȣ: %s, �ּ�:%s, ����: %d\n", tel, add, age);
		
	fclose(f); 
	
	printf("��ȭ��ȣ: %s, �ּ�:%s, ����: %d\n", tel, add, age);
	

	return 0;
}
