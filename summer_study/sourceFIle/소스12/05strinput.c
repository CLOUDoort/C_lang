#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h> 

int main(void)
{
	char name[20], dept[30]; //char *name, *dept; ���� ���� �߻�
	int snum;
	printf("�й� �̸� �а� �Է� >>\n");
	scanf("%d %s %s", &snum, dept, name);
	printf("���: %d %s %s\n", snum, dept, name);

	char line[101]; //char *line ���δ� �����߻�
	printf("�� �࿡ �й� �̸� �а� �Է��� �� [enter]�� ������ ");
	printf("���ο� �࿡�� (ctrl + Z)�� �����ʽÿ�.\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");

	return 0;
}
