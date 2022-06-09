
/* 포인터: 메모리 상에 위치한 특정한 데이터의 (시작)주소값을 보관하는 변수
    포인터에도 타입이 있다.

p라는 포인터가 int형 데이터 주소값을 보관하는 경우 /  *을 Asterisk(에스터리스크)라 부른다.
&p 는 p의 주소값을 불러온다.

#include <stdio.h>
int main() {
    int a;
    a = 2;

    printf("%p \n", &a); // %p는 16진수 형태로 출력하라는 의미
    return 0;
}

#include <stdio.h>
int main() {
    int *p;
    int a;

    p = &a;

    printf("포인터 p에 들어있는 값: %p \n", p);
    printf("int형 변수 a가 저장된 주소: %p \n", &a);
    return 0;
}
한 번 정의돤 주소값은 변하지 않는다.
*/

#include <stdio.h>
int main() {
    int a;
    int b;
    int *p;

    p = &a;
    *p = 2;
    p = &b;
    *p = 4;

    printf("a: %d \n", a);
    printf("b: %d \n", b);
    return 0;
}