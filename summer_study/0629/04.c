#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int index = 0;
    int arr[1000];

    while(1) {
        scanf("%d", &arr[index]);
        if(!arr[index]) break;
        index++;
    }

    for(int i = 0; i < index; i++) {
        for(int j = 0; j < index; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0; i < index; i++) {
        printf("%d", arr[i]);
    }
}