#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct book
{
	char  title[50];
	char  author[50];
	int   ISBN;
} book;

void print(book* b);

int main()
{
	book python = { "파이썬으로 배우는 누구나 코딩", "강환수", 979117 };
	book comintro;
	strcpy(comintro.title, "소프트웨어 중심사회의 컴퓨터개론");
	strcpy(comintro.author, "강환수");
	comintro.ISBN = 437894;
	print(&comintro);
	print(&python);

	return 0;
}

void print(book* b)
{
	printf("제목: %s, ", b->title);
	printf("저자: %s, ", b->author);
	printf("ISBN: %d\n", b->ISBN);
}