#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void minMax(int data[], int n, int* min, int* max);

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    
    if(n >= 10) return 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;

    minMax(arr, n, &min, &max);

    printf("%d %d", max, min);
}

void minMax(int data[], int n, int* min, int* max) {
    *min = data[0];
    *max = data[0];

    for(int i = 0; i < n; i++) {
        if(data[i] < *min) *min = data[i];
    }

    for(int i = 0; i < n; i++) {
        if(data[i] > *max) *max = data[i];
    }
}
