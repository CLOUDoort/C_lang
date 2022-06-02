/*
절대로 바뀌지 않을 것 같은 값에는 const를 붙이는 습관을 들이자
상수포인터
const int* a;와i int* const a;의 차이

const int* 변수는 그냥 int* 형 변수인데 값을 절대로 바꾸면 안 되는 변수

#include <stdio.h>
int main() {
    int a;
    int b;
    const int* pa = &a;
    // -> pa가 가리키는 a의 값은 절대로 바뀌면 안 된다.

    // *pa = 3; -> pa가 가리키는 값이 바뀌었기 때문에 오류, 하지만 a 자체는 변수이기 때문에 바뀔 수 있음, pa가 가리키는 변수가 바뀌면 안 된다는 의미
    // 결과적으로 pa의 값은 변할 수 있지만 pa가 가리키는 a의 값은 바뀌면 안 된다. 하지만 a자체는 변수이기 때문에 a의 값은 변할 수 있다.
    pa = &b;
    return 0;
}

#include <stdio.h>
int main() {
    int a;
    int b;
    int* const pa = &a;
    // pa의 값이 바뀌면 안 된다.

    *pa = 3; // pa가 가리키는 값이 바뀌면 안 된다는 말은 하지 않았기 때문에 정상작동
    // pa = &b; -> pa의 값이 바뀌면 안 되기 때문에 에러
}
*/

/*
포인터의 덧셈


#include <stdio.h>
int main() {
    int a;
    int* pa;
    pa  = &a;
    
    printf("pa의 값은 %p \n", pa);
    printf("(pa+1)의 값은 %p \n", pa-1);

    return 0;
}

포인터끼리의 덧셈은 아무 의미 없으므로 에러 발생

// 포인터의 대입
같은 타입에만 가능

#include <stdio.h>
int main() {
    int a;
    int* pa = &a;
    int* pb;

    *pa = 3;
    pb = pa;

    printf("pa가 가리키는 값은 : %d \n", *pa);
    printf("pb가 가리키는 값은 : %d \n", *pb);

    return 0 ;

}


// 배열과 포인터
배열들의 각 원소는 메모리상에 연속되게 놓인다! 매우 충격적인 일
-> 포인터로도 배열의 각 원소에 접근할 수 있다!

#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr;
    int i;
    parr = &arr[0];

    for(i = 0; i < 10; i++) {
        printf("arr[%d]의 주소값 : %p", i, &arr[i]);
        printf("(parr + %d) 주소값 : %p", i, (parr + i));

        if(&arr[i] == (parr + i)) {
            만일 (parr + 1)이 arr[i]를 가리키는 경우 
            printf("--> 일치 \n");
        } else {
            printf("--> 불일치 \n");
        }
    }
        return 0;
}


#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr;

    parr = &arr[0];

    printf("arr[3] = %d, *(parr + 3) = %d \n", arr[3], *(parr +3));
    return 0;
}

// 배열에서 배열의 이름은 첫 번째 원소의 주소값을 가지고 있다. 하지만 그렇다고 배열의 이름이 배열의 첫 번째 원소를 가리키는 포인터라고 할 수는 없다.


#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    printf("%p \n", arr);
    printf("%p \n", &arr[0]);
    
    return 0;
}

 // 배열은 배열이고 포인터는 포인터다

#include <stdio.h>
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *parr = arr; // arr = &arr[0] , 값은 같지만 구분되어야 한다.

    printf("SizeOf(arr) : %d \n", sizeof(arr)); // 배열자체의 크기, (int)4바이트 * 6 = 24바이트
    printf("SizeOf(parr) : %d \n", sizeof(parr)); // 포인터자체의 크기, 64비트 컴퓨터이기 때문에 8바이트
    // -> 배열의 이름과 배열의 첫 번째 원소의 주소값은 엄연히 다르다
    // -> 그렇다면 왜 값이 같냐? 
    // C언어 상에서 배열의 이름이 sizof 연산자나 & 주소값 연산자를 사용할 때를 제외하고 배열의 이름을 사용시 암묵적으로 첫 번째 원소를 가리키는 포인터로 타입 변환되기 때문이다.

    return 0;

}

// [ ] 연산자
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("a[3] : %d \n", arr[3]);
    printf("*(a+3) : %d \n", *(arr + 3)); // arr이 +연산자와 사용되기 때문에 포인터로 변환되어 포인터 덧셈이 이뤄진다. -> 배열의 4번째 원소를 가리킨다.

    return 0;
}

// 신기한  [ ]의 사용
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("3[arr] : %d \n", 3 [arr] ); // 3 [arr] = arr[3]
    printf("*(3+a) : %d \n", *(arr + 3));

    return 0;
}
*/




