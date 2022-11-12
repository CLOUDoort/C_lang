#include <stdio.h>

int func2(int arr[], int N);

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];

    int i = 0;
    while(i < N) {
        scanf("%d", &arr[i]);
        i++;
    }

    int value = func2(arr, N);

    printf("value = %d \n", value);

    return 0;
}

int func2(int arr[], int N) {
    for(int i = 0; i < N; i++) {
        for(int j = i+1; j < N; j++) {
            if(arr[i]+arr[j] == 100) return 1;
        }
    }
    return 0;
}

// 시간복잡도: O(N^2)