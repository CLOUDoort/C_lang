#include <stdio.h>

void myprint(void)
{
	printf("void ������ �ű��ϳ׿�!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;
	char str[][20] = { { "C ���," }, { "����ֳ׿�!" } };

	void* p = &m; 
	printf("%p ", p); 
	//printf("%d\n", *p); //������ ���� �߻�
	printf("%d\n", *(int*) p); //int * �� ��ȯ

	p = &d;
	printf("%p ", p); 
	printf("%.2f\n", *(double*) p); //double * �� ��ȯ

	p = myprint;
	((void(*)(void)) p)(); //�Լ� �������� void(*)(void) �� ��ȯ�Ͽ� ȣ�� ()

	p = str;	
	printf("%s %s\n", (char(*)[20])p, (char(*)[20])p + 1);
	printf("%s %s\n", str, str + 1);

	{
		char ch = 'A';
		int data = 5;
		double value = 34.76;

		void* vp;

		vp = &ch;	
		vp = &data;	
		vp = &value;
	}
	return 0;
}
