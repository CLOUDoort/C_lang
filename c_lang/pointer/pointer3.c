/*
#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    int *parr;

    parr = arr;
    // parr = &arr[0];

    printf("arr[1] : %d \n", arr[1]);
    printf("parr[1] : %d \n", parr[1]); // parr[1] = *(parr + 1)

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


// 포인터의 포인터
#include <stdio.h>
int main() {
    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    a = 3;

    printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
    printf("&a : %p // pa : %p // *ppa: %p \n", &a, pa, *ppa);
    printf("&pa : %p // ppa : %p \n", &pa, ppa);

    return 0;

}

// 배열 이름의 주소값?
#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    int (*parr)[3] = &arr; // -> 크기가 3인 배열을 가리키는 포인터
    // 주소값 연산자를 사용했을 경우에는 배열의 이름이 첫 번째 원소를 가리키는 포인터로 암묵적으로 변환되는 경우가 해당되지 않는다. -> &arr != int**
    // arr이 크기가 3인 배열이기 때문에, &arr을 보관할 포인터는 크기가 3인 배열을 가리키는 포인터가 되어야 할 것이다.
    // c언어 문법상 이를 정의하는 방식은 위와 같다. 괄호를 무조건 써줘야 한다.

    printf("arr : %d \n", arr);
    printf("parr : %d \n", parr);
    // arr = parr

    return 0;
}
// 2차원 배열
#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("전체 크기 : %d \n", sizeof(arr));
    printf("총 열의 개수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}



// 포인터의 type을 결정짓는 두 가지 요소
#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int **parr;

    parr = arr; // 에러 발생

    printf("arr[1][1] : %d \n", arr[1][1]);
    printf("parr[1][1] : %d \n", parr[1][1]);

    return 0;
}

// 배열의 포인터
#include <stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*parr)[3];
    // 크기가 3인 배열을 가리키는 포인터 표현식 = 2차원 배열을 가리키는 포인터
    // 2차원 배열에서 배열의 이름이 배열의 첫 번째 행을 가리키는 포인터가 된다. 그리고 첫 번째 행은 크기가 3인 1차원 배열인 것

    parr = arr;

    printf("parr[1][2] : %d / arr[1][2] : %d \n", parr[1][2], arr[1][2]);

    return 0;
}
*/

// 포인터 배열
// 배열 포인터는 배열을 가리키는 포인터이고, 포인터 배열은 포인터들을 모아놓은 배열이다.
#include <stdio.h>
int main() {
    int *arr[3];
    // 배열의 각 요소는 int를 가리키는 포인터로 선언되었다.
    int a = 1, b = 2, c = 3;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    printf("a : %d / *arr[0] : %d \n", a, *arr[0]);
    printf("b : %d / *arr[1] : %d \n", c, *arr[1]);
    printf("c : %d / *arr[2] : %d \n", b, *arr[2]);
    
    printf("&a : %p / arr[0] : %p \n", &a, arr[0]);

    return 0;
}