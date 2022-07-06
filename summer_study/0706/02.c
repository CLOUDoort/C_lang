#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	char arr[1000];
	int count[1000] = {0};
	gets(arr);
	
	for (i = 0; i < (int)strlen(arr); i++) {
		for (j = 65; j < 123; j++) {
			if (arr[i] == j) {
				count[j - 65]++;
			}
		}
	}

	for (i = 0; i <= 58; i++) {
		if (count[i] != 0) {
			printf("%c:%d\n",i+65, count[i]);
		}
	}
}