#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100];
    int index = 0;

    while(1) {
        scanf("%d", &arr[index]);
        if(!arr[index]) break;
        index++;
    }
    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < index; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("%d %d", max, min);
}