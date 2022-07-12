#include <stdio.h> 
#include <stdarg.h> 

int min(int n, ...)
{
    int min, dum;

    va_list ap;
    va_start(ap, n);

    min = va_arg(ap, int); //최소 값 찾기, 첫 인자를 최소 값으로 
    for (int i = 1; i < n; i++) //n-1번 반복 
        if ((dum = va_arg(ap, int)) < min) // 현재 최소와 비교
            min = dum; //최소 값 수정
    va_end(ap);

    return min;
}

int main()
{
    int count = 5;
    printf("최소 값: %d\n", min(count, 20, 30, 33, 99, 6));
    return 0;
}