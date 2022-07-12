#include <stdio.h> 
#include <stdarg.h> 

int min(int n, ...)
{
    int min, dum;

    va_list ap;
    va_start(ap, n);

    min = va_arg(ap, int); //�ּ� �� ã��, ù ���ڸ� �ּ� ������ 
    for (int i = 1; i < n; i++) //n-1�� �ݺ� 
        if ((dum = va_arg(ap, int)) < min) // ���� �ּҿ� ��
            min = dum; //�ּ� �� ����
    va_end(ap);

    return min;
}

int main()
{
    int count = 5;
    printf("�ּ� ��: %d\n", min(count, 20, 30, 33, 99, 6));
    return 0;
}