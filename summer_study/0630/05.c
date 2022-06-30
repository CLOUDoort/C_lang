#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lcm(int x, int y);

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    return lcm(x, y);
}

int lcm(int x, int y) {
    int i = 2, cf = 1;

    while(1) {
        if(x % i == 0 && y % i == 0) {
            cf *= i;
            x /= i;
            y /= i;
        } else i++;
        if(i > x || i > y) break;
    }

    return printf("%d\n", cf * x * y);
}

// 변수 cf값 초기화를 안 해줘서 결과 바로 안 나옴;
// 변수 초기화 잘 하자