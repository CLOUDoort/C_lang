#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char arr[1000];
	gets(arr);

	char* ptoken = strtok(arr, " ");

	while (ptoken) {
		int i, j;
		char* pArr[] = { ptoken };
		for (i = 0, j = (int)strlen(ptoken) - 1; i < j; i++, j--) {
			char temp = ptoken[j];
			ptoken[j] = ptoken[i];
			ptoken[i] = temp;
		}
		printf("%s ", ptoken);
		ptoken = strtok(NULL, " ");
	}

}