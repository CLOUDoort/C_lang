#include <stdio.h>

int main()
{
    int N, i = 2;
    scanf("%d", &N);
    printf("%d : ", N);

    while(1) {
        if(N % i == 0) {
            N /= i;
            printf("%d ", i);
            if(N == 1) {
                printf("\n");
                break;
            }
            printf("* ");
        } else i++;
    }

    return 0;
}