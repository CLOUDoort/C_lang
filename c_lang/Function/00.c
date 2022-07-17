#include <stdio.h>

int print_hello() {
    printf("Hello!! \n");
    return 0;
}
// 함수는 반환을 하여 종료하는 것이 안전하다.
// return을 실행하면 함수는 무조건 종료되어 함수를 호출하였던 부분으로 돌아간다.


// 프로그램을 실행할 때 컴퓨터가 main함수부터 찾는다. 무조건 여기서부터 시작한다.
int main() {
    printf("함수를 불러보자 : ");
    print_hello();

    printf("또 부를까? ");
    print_hello();

    return 0;
}

// main함수의 리턴값은 운영체제가 받아들인다.
// 정상적으로 종료하면 0을 반환한다.