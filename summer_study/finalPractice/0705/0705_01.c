#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mySwab(int* a, int* b);

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    mySwab(&a, &b);

    printf("%d %d", a, b);
    
    return 0;
}

void mySwab(int* a, int* b) {
    int x = *a;
    int y = *b;

    *a = y;
    *b = x;
}