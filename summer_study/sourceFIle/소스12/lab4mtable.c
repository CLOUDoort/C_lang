

// lineprint.c: 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char s[100];
	//���ڹ迭 s�� ǥ���Է��� �� ���� ����
	gets_s(s, 100);

	//���ڹ迭�� ����� �� ���� �ݴ�� ���
	int idx = slen(s) - 1;
	char* p = s[idx];
	while (idx >= 0)
		printf("%c", s[idx--]);
	printf("\n");

	return 0;
}

int slen(char* s)
{
	int len = 0, cnt = 0;
	char* p = s;
	while (*p++)
		cnt++;

	return cnt;
}