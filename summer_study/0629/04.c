#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[1000];
    int index = 0;

    while(1) {
        scanf("%d", &arr[index]);
        if(!arr[index]) break;
        index++;
    }

    for(int i = 0; i < index; i++) {
        for(int j = i; j < index; j++) {
            if(arr[i] > arr[j]) {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    for(int i = 0; i < index; i++) {
        printf("%d ", arr[i]);
    }
}
