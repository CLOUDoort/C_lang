

// lineprint.c: 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	char s[100];
	//문자배열 s에 표준입력한 한 행을 저장
	gets_s(s, 100);

	//문자배열에 저장된 한 행을 반대로 출력
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