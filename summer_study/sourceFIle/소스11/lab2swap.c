#include <stdio.h> 

int main(void)
{
	int x = 500, y = 700, dummy;
	printf("%d %d\n", x, y);

	int *px = &x, *py = &y, *pd = &dummy;
	
	*pd = *px;  // ���� dummy�� x�� ����
	*px = *py;	// ���� m�� n�� ����
	*py = *pd;  // ���� n�� dummy�� ����

	printf("%d %d\n", x, y);

	return 0;
}
