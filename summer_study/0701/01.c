#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[1000];
    int index = 0;
    double sum = 0;

    while(1) {
        scanf("%d", &arr[index]);
        if(arr[index] < 0) break;
        index++;
    }

    for(int i = 0; i < index; i++) {
        sum += arr[i];
    }

    printf("%.2lf", sum / index);
}