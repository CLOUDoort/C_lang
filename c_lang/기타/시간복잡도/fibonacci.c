#include <stdio.h>

int fibo(int k);

int main()
{
    int i = 0, sum = 0;
    for(i=0; sum<=1000000; i++) {
        if(i % 2 == 0) sum+=fibo(i);
    }
    printf("합 : %d\n", sum);
    return 0;
}

int fibo(int k) {
    if(k==0) return 0;
    else if(k == 1) return 1;

    return fibo(k-1) + fibo(k-2);
}
