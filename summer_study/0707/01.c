#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct MovieData {
	char title[50];
	char dirname[50];
	int year;
	int time;
}Movie;

int main(void)
{
	Movie m1;

	gets(m1.title);
	gets(m1.dirname);
	scanf("%d", &m1.year);
	scanf("%d", &m1.time);

	printf("Title : %s\n", m1.title);
	printf("Director : %s\n", m1.dirname);
	printf("Year : %d\n", m1.year);
	printf("RunningTime : %d\n", m1.time);

	return 0;
}