// 엄청 오래 걸림
// 끝자리수 구하는 개념도 오래 걸렸지만, for문에서 자꾸 i값을 안 넣고 최댓값을 넣어버림
// 위의 실수만 하지 않으면 더 빨리 할 듯

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkLastDigit(int arr[], int size, int num);

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] <= 0) return printf("0보다 큰 정수를 입력하세요!");
    }

    for(int num = 0; num < 10; num++) {
        printf("%d %d\n", num, checkLastDigit(arr, n, num));
    }

}

int checkLastDigit(int arr[], int size, int num) {
    int ok = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] < 10) {
            if(arr[i] == num) ok++;
        }
        if(arr[i] >= 10 && arr[i] < 100) {
            if(arr[i] % 10 == num) ok++;
        }
        if(arr[i] >= 100 && arr[i] < 1000) {
            if(arr[i] % 100 % 10 == num) ok++;
        }
        if(arr[i] >= 1000 && arr[i] < 10000) {
            if(arr[i] % 1000 % 10 == num) ok++;
        }
    }
    return ok;
}