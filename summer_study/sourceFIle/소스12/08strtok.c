#define _CRT_SECURE_NO_WARNINGS // strtok() ����ϱ� ���� 
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "C and C++\t languages are best!";
	char *delimiter = " !\t";
	//char *next_token;
	
	
	char* ptoken = strtok(str, delimiter);
	//char* ptoken = strtok_s(str, delimiter, &next_token);
	while (ptoken) //(ptoken != NULL)
	{
		printf("%s\n", ptoken);
		ptoken = strtok(NULL, delimiter); //���� ��ū�� ��ȯ
		//ptoken = strtok_s(NULL, delimiter, &next_token); //���� ��ū�� ��ȯ
	}

	return 0;
}
