#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c);
int middle(int a, int b, int c);
int min(int a, int b, int c);

int main() {
    int index = 0;
    int a[100], b[100], c[100];
    while(1) {
        scanf("%d %d %d", &a[index], &b[index], &c[index]);
        if(a[index] == 0 && b[index] == 0 && c[index] == 0) break;
        index++;
    }
    for(int i = 0; i < index; i++) {
        printf("%d %d %d\n", max(a[i], b[i], c[i]), min(a[i], b[i], c[i]), middle(a[i], b[i], c[i]));
    }
}

int max(int a, int b, int c) {
    int i;
    int arr[3] = {a, b, c};
    int max = arr[0];
    for(i = 0; i < 3; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}
int middle(int a, int b, int c) {
    int arr[3] = {a, b, c};

    for(int i = 0; i < 3; i++) {
        for(int j = i; j < 3; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[1];
}
int min(int a, int b, int c) {
    int i;
    int arr[3] = {a, b, c};
    int min = arr[0];
    for(i = 0; i < 3; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}