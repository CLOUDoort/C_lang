#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c, int i;);
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
        printf("%d %d %d\n", max(a[i], b[i], c[i]), min(a[i], b[i], c[i]), middle(a[i], b[i], c[i]))
    }
}

int max(int a, int b, int c) {
    int i;
    int arr[3] = {a, b, c};
    int max = arr[0];
    for(i = 0; i < 3; i++) {
        if(arr[i] > max) arr[i] = max;
    }
}
int middle(int a, int b, int c) {
    int middle;
    if(a > b) {
        if(b > c) middle = b;
    } else {
        if(a > c) middle = a;
    }
}
int min(int a, int b, int c) {
    int i;
    int arr[3] = {a, b, c};
    int min = arr[0];
    for(i = 0; i < 3; i++) {
        if(arr[i] < min) arr[i] = min;
    }
}

int i;
    int arr[3] = {a, b, c};
    int middle = arr[0];
    for(i = 0; i < 3; i++) {
    }