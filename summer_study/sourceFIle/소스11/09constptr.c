#include <stdio.h>

int main()
{
	int i = 10, j = 20;
	const int* p = &i; //*p�� ����� *p�� ������ �� ����  
	//*p = 20; //���� �߻�
	printf("%d ", *p);
	p = &j;
	printf("%d\n", *p);

	double d = 7.8, e = 2.7;
	double* const pd = &d;
	//pd = &e; //pd�� ����� �ٸ� �ּ� ���� ������ �� ����  
	printf("%f ", *pd);
	*pd = 4.4;
	printf("%f\n", *pd);

	return 0;
}
