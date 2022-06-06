/*
#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    int *parr;

    parr = arr;
    // parr = &arr[0];

    printf("arr[1] : %d \n", arr[1]);
    printf("parr[1] : %d \n", parr[1]);

    return 0;
}

#include <stdio.h>
int main() {
    int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

    int *parr = arr;
    // parr = &arr[0];
    int sum = 0;

    while (parr - arr <= 9) { // 배열원소가 0~9까지 있기 때문
        sum += (*parr);
        parr++; // 포인터 연산에서 1을 더한다는 의미는 주소값에 1이 더하는 것이 아닌, 포인터 타입의 크기만큼 더해진다. int이기 때문에 4가 더해지게 되면서, 배열의 다음 원소를 가리킨다.
    }
    printf("시험 점수 평균 : %d \n", sum/10);

    return 0;
}
*/

// 포인터의 포인터
#include <stdio.h>
int main() {
    int a;
    int *pa;
    int **ppa; // int*을 가리키는 포인터

    pa = &a;
    ppa = &pa;

    a = 3;

    printf("a : %d, *pa = %d, **ppa = %d \n", a, *pa, **ppa);
    printf("&a : %p, pa = %p, *ppa  =  %p \n", &a, pa, *ppa);
    printf("&pa : %p, ppa = %p \n", &pa, ppa);

    return 0;
}
