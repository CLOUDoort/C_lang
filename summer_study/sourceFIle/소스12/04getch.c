#include <stdio.h> 
#include <conio.h> 

int main(void)
{
	char ch;

	printf("���ڸ� ��� �Է��ϰ� Enter�� ������ >>\n");
	while ((ch = getchar()) != 'q')
		putchar(ch); // stdio.h

	printf("\n���ڸ� ���� ���� ���̰�, _putch�� ���� �Է¹��� ��� >>\n");
	while ((ch = _getche()) != 'q')
		_putch(ch); // conio.h

	printf("\n���ڸ� ���� ���� �� ���̰�, _putch�� ���� �Է¹��� ��� >>\n");
	while ((ch = _getch()) != 'q')
		_putch(ch); // conio.h
	printf("\n");

	return 0;
}
