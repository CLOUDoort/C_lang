// 다시 풀기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findSum(int data[], int n, int* sum);

int main() {
    int n;
    int arr[1000];
    int sum = 0;
    while(1) {
        scanf("%d", &n);
        if(n < 10) break;
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findSum(arr, n, &sum);

    printf("%d", sum);
}

void findSum(int data[], int n, int* sum) {
    int s = 0;

    for(int i = 0; i < n; i++) {
        s += data[i];
    }

    *sum = s;
}
