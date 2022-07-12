#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sortWithoutDuplication(int arr[], int* size);

int main() {
    int arr[10];

    int size = 10;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    sortWithoutDuplication(arr, &size);

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void sortWithoutDuplication(int arr[], int* size) {
    for(int i = 0; i < *size; i++) {
        for(int j = i; j < *size; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < *size; i++) {
        if(arr[i] == arr[i + 1]) {
            for(int j = i; j < *size; j++) {
                arr[j] = arr[j+1];
            }
            --i;
            --*size;
        }
    }
}

// 다시 풀어보기
// 전위연산자와 후위연산자 차이 알기