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
	book python = { "���̽����� ���� ������ �ڵ�", "��ȯ��", 979117 };
	book comintro;
	strcpy(comintro.title, "����Ʈ���� �߽ɻ�ȸ�� ��ǻ�Ͱ���");
	strcpy(comintro.author, "��ȯ��");
	comintro.ISBN = 437894;
	print(&comintro);
	print(&python);

	return 0;
}

void print(book* b)
{
	printf("����: %s, ", b->title);
	printf("����: %s, ", b->author);
	printf("ISBN: %d\n", b->ISBN);
}