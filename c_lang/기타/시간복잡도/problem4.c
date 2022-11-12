#include <stdio.h>

int func4(int N);

int main()
{
    int N;
    scanf("%d", &N);

    int value = func4(N);
    printf("value is %d\n", value);

    return 0;
}

int func4(int N)
{
    int max = 1;
    // for(int i = 2; i < N; i++) {
    //     while(i % 2 == 0) {
    //         i = i / 2;
    //         if(i == 1) break;
    //     }
    //     max = i;
    // }
    while(2*max <= N) max *= 2;
    return max;
}


// 다시 생각해보기
// 시간복잡도 : O(lgN)