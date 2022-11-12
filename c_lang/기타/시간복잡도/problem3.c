#include <stdio.h>

int func3(int N);

int main()
{
    int N;
    scanf("%d", &N);

    int value = func3(N);
    printf("value is %d \n", value);

    return 0;
}

int func3(int N)
{
    // for(int i = 2; i < N; i++) {
    //     if(N % i == 0) {
    //         if(i * i == N) return 1;
    //     }
    // }
    for(int i = 1; i * i <= N; i++) {
        if(i*i == N) return 1;
    }

    return 0;
}

// 시간복잡도 : O(N)
// 시간복잡도 : O(√N)