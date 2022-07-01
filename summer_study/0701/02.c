#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int index;
    int i = 0, sum = 0;
    int arr[100];

    while(1) {
        scanf("%d", &index);
        if(index < 0) {
            printf("wrong\n");
        } else break;
    }

    arr[0] = 1;
    for (i = 0; i < index; i++) {
        arr[i+1] = arr[i] * 2;
        sum += arr[i];
    }
    for(i = 0; i < index; i++) {
        printf("%d\n", arr[i]);
    }
    printf("=%d", sum);


}