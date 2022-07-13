#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main()
{
	int i = 0 , ok = 0;
	char first[1000];
	char second[1000];
	char third[1000];
	char punc[100];

	gets(first);
	gets(second);
	gets(third);

	for (i = 0; i < (int)strlen(first); i++) {
		if (ispunct(first[i])) {
				punc[ok] = first[i];
				ok++;
			}
		}
	for (i = 0; i < (int)strlen(second); i++) {
		if (ispunct(second[i])) {
			punc[ok] = second[i];
			ok++;
		}
	}
	for (i = 0; i < (int)strlen(third); i++) {
		if (ispunct(third[i])) {
			punc[ok] = third[i];
			ok++;
		}
	}
	printf("%d %s", ok, punc);
}