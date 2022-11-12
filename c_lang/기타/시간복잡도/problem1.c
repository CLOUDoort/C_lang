#include <stdio.h>

int func1(int N) {
    int sum = 0;
    for(int i = 3; i < N; i++) {
        if(i % 3 == 0 | i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int N;
    int sum;
    scanf("%d", &N);
    sum = func1(N);

    printf("3의 배수 또는 5의 배수 합은 %d \n", sum);

    return 0;
}

// 시간복잡도는 : O(N)