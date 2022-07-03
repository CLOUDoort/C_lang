#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, D;
    double x, y;
    scanf("%d %d %d", &a, &b, &c);
    D = pow(b, 2) - (4 * a * c);
    
    if(a == 0) {
     x = (double)-c / b; // 형변환 다시 까먹지 말자!
     printf("%f", x);
    } else {

        if(D > 0) {
            x = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
            y = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
             printf("%f, %f", x, y);
        } else if( D == 0) {
            x = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
             printf("%f", x);
        } else {
             printf("허근입니다");
        }
    }
    return 0;
}