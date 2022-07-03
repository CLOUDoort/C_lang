#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkLastDigit(int arr[], int size, int num);

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] <= 0) break;
    }

    for(int num = 0; num < 10; num++) {
        printf("%d %d\n", num, checkLastDigit(arr, n, num));
    }

}

int checkLastDigit(int arr[], int size, int num) {
    int ok = 0;

    for(int i = 0; i < size; i++) {
        if(arr[size] < 10) ok++;
    }
    return ok;
}

/*
10
4
7
2
9
1009
10
1
1003
2004
99
*/