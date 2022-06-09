// int arr[3][3]; 과 같은 배열은 내부적으로 어떻게 처리되는지 생각해보세요
#include <stdio.h>
int main() {
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("arr %d 행 %d 열 원소는 : %d \n", i, j, arr[i][j]);
        }
    }
    
    return 0;
}

// int* arr[3]; 과 같은 배열이 가지는 의미는 무엇일까요?